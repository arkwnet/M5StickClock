// M5StickClock
// Copyright (c) 2022 Sora Arakawa

#include <M5StickC.h>
#include "img/logo.h"
#include "img/layout.h"
#include "img/colon.h"
#include "img/big.h"
#include "img/medium.h"

int screen = 0;
int count = 0;
int second = 0;
TFT_eSprite sprite(&M5.Lcd);

void setup() {
  M5.begin();
  M5.Lcd.setRotation(1);
  M5.Lcd.setSwapBytes(true);
  sprite.createSprite(M5.Lcd.width(), M5.Lcd.height());
  sprite.setSwapBytes(true);
}

void loop() {
  M5.Lcd.startWrite();
  switch (screen) {
    case 0:
      sprite.pushImage(0, 0, logoWidth, logoHeight, logo);
      if (count >= 20) {
        count = -1;
        screen = 10;
      }
      break;
    case 10:
      if (count == 0) {
        sprite.pushImage(0, 0, layoutWidth, layoutHeight, layout);
        sprite.pushImage(4, 12, bigWidth, bigHeight, big);
        sprite.pushImage(31, 12, bigWidth, bigHeight, big);
        sprite.pushImage(74, 12, bigWidth, bigHeight, big);
        sprite.pushImage(101, 12, bigWidth, bigHeight, big);
        drawMedium(129, 28, 0);
        drawMedium(143, 28, second);
        sprite.pushImage(61, 20, colonWidth, colonHeight, colon);
      }
      break;
  }
  sprite.pushSprite(0, 0);
  M5.Lcd.endWrite();
  count++;
  if (screen > 0) {
    if (count >= 20) {
      count = 0;
      second++;
    }
    if (second >= 10) {
      second = 0;
    }
  }
  delay(1000 / 20);
}

void drawMedium(int x, int y, int i) {
  unsigned short medium[280];
  int msize = sizeof(medium);
  switch (i) {
    case 0:
      memcpy(medium, medium0, msize);
      break;
    case 1:
      memcpy(medium, medium1, msize);
      break;
    case 2:
      memcpy(medium, medium2, msize);
      break;
    case 3:
      memcpy(medium, medium3, msize);
      break;
    case 4:
      memcpy(medium, medium4, msize);
      break;
    case 5:
      memcpy(medium, medium5, msize);
      break;
    case 6:
      memcpy(medium, medium6, msize);
      break;
    case 7:
      memcpy(medium, medium7, msize);
      break;
    case 8:
      memcpy(medium, medium8, msize);
      break;
    case 9:
      memcpy(medium, medium9, msize);
      break;
  }
  sprite.pushImage(x, y, mediumWidth, mediumHeight, medium);
  return;
}
