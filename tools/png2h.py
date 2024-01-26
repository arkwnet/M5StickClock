import numpy as np
from PIL import Image
import sys
import glob

def main(outstr):
    img_list = sorted(glob.glob(".\\img\\**\\*.png", recursive = True)) # 画像リストを取得
    # 画像が無い場合は終了
    if len(img_list) == 0:
        return print("No image file!")
    file_count = 0
    for fn in img_list:
        f = open(fn + ".h", "w")
        file_count += 1
        print("Loading " + fn)
        image = Image.open(fn)
        width, height = image.size
        image_length = width * height
        f.write("const unsigned short IMG_DATA[" + str(image_length) + "] PROGMEM = {\n")
        image_hex = outputColorPixel(width, height, image, outstr)
        f.write(image_hex)
        f.write("};\n")
        f.close()
        print("Saved " + fn + ".h")

# RGB値を16bit(RGB565)のテキストに変換する
def rgb2hexstr(rgb):
    col = ((rgb[0]>>3)<<11) | ((rgb[1]>>2)<<5) | (rgb[2]>>3)
    return "0x{:04X}".format(col)

# 16bpp出力
def outputColorPixel(width, height, image, outstr):
    result_str = ""
    result_size = 0
    #  パレット読み込み
    if image.mode == "P":
        palette = np.array(image.getpalette()).reshape(-1, 3)  # n行3列に変換
        getPixel = lambda x,y: palette[image.getpixel((x, y))]
    else:
        getPixel = lambda x,y: image.getpixel((x, y))
    # 書き込み時の改行位置を計算
    line_break = width
    while True:
        if (width % line_break) == 0:
            break
        line_break = line_break - 1
    for y in range(height):
        x_cnt = 0
        for x in range(width):
            pixel = getPixel(x, y)
            result_str += outstr(pixel) + ","
            x_cnt = x_cnt + 1
            if x_cnt >= line_break:
                x_cnt = 0
                result_size += width
                result_str += "// row " + str(y) + ", " + str(result_size) + " pixels\n"
    return result_str

if __name__ == "__main__":
    args = sys.argv
    outstr = rgb2hexstr
    main(outstr)
