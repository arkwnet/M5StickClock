// M5StickClock
// Copyright (c) 2022 Sora Arakawa

#include <M5StickC.h>
#include "img/logo.h"
#include "img/layout.h"

int count = 0;

void setup() {
  M5.begin();
  M5.Lcd.setRotation(1);
  M5.Lcd.print("M5StickClock");
}

void loop() {
  M5.Lcd.startWrite();
  if (count < 20) {
    M5.Lcd.pushImage(0, 0, logoWidth, logoHeight, logo);
  } else {
    M5.Lcd.pushImage(0, 0, layoutWidth, layoutHeight, layout);
  }
  M5.Lcd.endWrite();
  count++;
  delay(1000 / 20);
}
