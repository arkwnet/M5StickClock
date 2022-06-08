// M5StickClock
// Copyright (c) 2022 Sora Arakawa

#include <M5StickC.h>
#include "img/logo.h"

void setup() {
  M5.begin();
  M5.Lcd.setRotation(1);
  M5.Lcd.print("M5StickClock");
}

void loop() {
  M5.Lcd.startWrite();
  M5.Lcd.pushImage(0, 0, logoWidth, logoHeight, logo);
  M5.Lcd.endWrite();
  delay(1000);
}
