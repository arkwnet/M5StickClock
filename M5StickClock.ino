// M5StickClock
// Copyright (c) 2022 Sora Arakawa

#include <M5StickC.h>
#include "img/logo.h"
#include "img/layout.h"
#include "img/big.h"

int count = 0;
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
  sprite.fillScreen(BLACK);
  if (count < 20) {
    sprite.pushImage(0, 0, logoWidth, logoHeight, logo);
  } else {
    sprite.pushImage(0, 0, layoutWidth, layoutHeight, layout);
    sprite.pushImage(4, 12, bigWidth, bigHeight, big);
    sprite.pushImage(31, 12, bigWidth, bigHeight, big);
    sprite.pushImage(74, 12, bigWidth, bigHeight, big);
    sprite.pushImage(101, 12, bigWidth, bigHeight, big);
  }
  sprite.pushSprite(0, 0);
  M5.Lcd.endWrite();
  count++;
  delay(1000 / 20);
}
