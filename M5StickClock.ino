// M5StickClock
// Copyright (c) 2022 Sora Arakawa

#include <M5StickC.h>

void setup() {
  M5.begin();
  M5.Lcd.setRotation(1);
  M5.Lcd.print("M5StickClock");
}

void loop() {
}
