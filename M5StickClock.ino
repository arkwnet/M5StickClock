// M5StickClock
// Copyright (c) 2022-2024 Sora Arakawa
// Licensed under the MIT License

#include <M5StickC.h>
#include <time.h>
#include "img/logo.h"
#include "img/colon.h"
#include "img/big.h"
#include "img/medium.h"
#include "img/small.h"
#include "img/hyphen.h"
#include "img/day.h"
#include "img/settings.h"

const int version[3] = {1, 1, 0};
const int screenWidth = 160;
const int screenHeight = 80;
int dmax[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int screen = 0;
int count = 0;
int countSleep = 0;
int second = 0;
int temp = 0;
TFT_eSprite sprite(&M5.Lcd);
RTC_DateTypeDef DateStruct;
RTC_TimeTypeDef TimeStruct;

void setup() {
  M5.begin();
  setCpuFrequencyMhz(20);
  M5.Lcd.setRotation(3);
  M5.Lcd.setSwapBytes(true);
  M5.Axp.ScreenBreath(11);
  sprite.createSprite(M5.Lcd.width(), M5.Lcd.height());
  DateStruct.Year = 2024;
  DateStruct.Month = 1;
  DateStruct.Date = 1;
  DateStruct.WeekDay = zeller(DateStruct.Year, DateStruct.Month, DateStruct.Date);
  M5.Rtc.SetData(&DateStruct);
  TimeStruct.Hours = 0;
  TimeStruct.Minutes = 0;
  TimeStruct.Seconds = 0;
  M5.Rtc.SetTime(&TimeStruct);
  dmax[1] = leapYear(DateStruct.Year);
}

void loop() {
  M5.update();
  M5.Rtc.GetTime(&TimeStruct);
  switch (screen) {
    // Splash Screen
    case 0:
      if (count == 0) {
        M5.Lcd.pushImage(0, 0, screenWidth, screenHeight, logo);
      }
      count++;
      if (count >= 30) {
        count = -1;
        screen = 10;
      }
      break;

    // Clock Screen
    case 10:
      if (TimeStruct.Seconds != second) {
        if (TimeStruct.Hours == 0 && TimeStruct.Minutes == 0 && TimeStruct.Seconds == 0) {
          int lastDay = 31;
          switch (DateStruct.Month) {
            case 2:
              lastDay = 28;
              break;
            case 4:
            case 6:
            case 9:
            case 11:
              lastDay = 30;
              break;
          }
          if (DateStruct.Date >= lastDay) {
            DateStruct.Date = 1;
            if (DateStruct.Month >= 12) {
              DateStruct.Month = 1;
              DateStruct.Year++;
            } else {
              DateStruct.Month++;
            }
          } else {
            DateStruct.Date++;
          }
          DateStruct.WeekDay = zeller(DateStruct.Year, DateStruct.Month, DateStruct.Date);
          M5.Rtc.SetData(&DateStruct);
        }
        M5.Lcd.startWrite();
        sprite.fillRect(0, 0, 160, 80, BLACK);
        sprite.pushImage(60, 20, colonWidth, colonHeight, colon);
        sprite.pushImage(43, 61, hyphenWidth, hyphenHeight, hyphen);
        sprite.pushImage(71, 61, hyphenWidth, hyphenHeight, hyphen);
        drawBig(3, 12, TimeStruct.Hours / 10);
        drawBig(30, 12, TimeStruct.Hours % 10);
        drawBig(73, 12, TimeStruct.Minutes / 10);
        drawBig(100, 12, TimeStruct.Minutes % 10);
        drawMedium(128, 28, TimeStruct.Seconds / 10);
        drawMedium(142, 28, TimeStruct.Seconds % 10);
        drawSmall(3, 55, DateStruct.Year / 1000);
        drawSmall(13, 55, (DateStruct.Year / 100) % 10);
        drawSmall(23, 55, (DateStruct.Year / 10) % 10);
        drawSmall(33, 55, DateStruct.Year % 10);
        drawSmall(51, 55, DateStruct.Month / 10);
        drawSmall(61, 55, DateStruct.Month % 10);
        drawSmall(79, 55, DateStruct.Date / 10);
        drawSmall(89, 55, DateStruct.Date % 10);
        drawDay(110, 54, DateStruct.WeekDay);
        sprite.pushImage(126, 54, dayWidth, dayHeight, day);
        sprite.pushImage(142, 54, dayWidth, dayHeight, day0);
        sprite.pushSprite(0, 0);
        M5.Lcd.endWrite();
        second = TimeStruct.Seconds;
      }
      if (M5.BtnA.pressedFor(1000)) {
        M5.Axp.ScreenBreath(11);
        temp = TimeStruct.Hours;
        count = -1;
        screen = 20;
      }
      if (M5.BtnA.wasPressed()) {
        countSleep = 0;
        M5.Axp.ScreenBreath(11);
      }
      if (M5.BtnB.pressedFor(1000)) {
        count = -1;
        screen = 100;
      }
      if (countSleep >= 150) {
        M5.Axp.ScreenBreath(7);
      } else {
        countSleep++;
      }
      break;
    
    // Set Hours
    case 20:
      if (count != temp) {
        M5.Lcd.startWrite();
        sprite.fillRect(0, 0, 160, 80, BLACK);
        drawBig(3, 12, temp / 10);
        drawBig(30, 12, temp % 10);
        sprite.pushImage(60, 20, colonWidth, colonHeight, colon);
        sprite.pushSprite(0, 0);
        M5.Lcd.endWrite();
        count = temp;
      }
      if (M5.BtnA.wasPressed()) {
        count = -1;
        temp = TimeStruct.Minutes;
        screen = 21;
      }
      if (M5.BtnB.wasPressed()) {
        temp++;
        if (temp >= 24) {
          temp = 0;
        }
        TimeStruct.Hours = temp;
        M5.Rtc.SetTime(&TimeStruct);
      }
      break;

    // Set Minutes
    case 21:
      if (count != temp) {
        M5.Lcd.startWrite();
        sprite.fillRect(0, 0, 160, 80, BLACK);
        drawBig(73, 12, temp / 10);
        drawBig(100, 12, temp % 10);
        sprite.pushImage(60, 20, colonWidth, colonHeight, colon);
        sprite.pushSprite(0, 0);
        M5.Lcd.endWrite();
        count = temp;
      }
      if (M5.BtnA.wasPressed()) {
        second = -1;
        screen = 22;
      }
      if (M5.BtnB.wasPressed()) {
        temp++;
        if (temp >= 60) {
          temp = 0;
        }
        TimeStruct.Minutes = temp;
        M5.Rtc.SetTime(&TimeStruct);
      }
      break;

    // Set Seconds
    case 22:
      if (TimeStruct.Seconds != second) {
        M5.Lcd.startWrite();
        sprite.fillRect(0, 0, 160, 80, BLACK);
        drawMedium(128, 28, TimeStruct.Seconds / 10);
        drawMedium(142, 28, TimeStruct.Seconds % 10);
        sprite.pushImage(60, 20, colonWidth, colonHeight, colon);
        sprite.pushSprite(0, 0);
        M5.Lcd.endWrite();
        second = TimeStruct.Seconds;
      }
      if (M5.BtnA.wasPressed()) {
        second = -1;
        count = -1;
        temp = DateStruct.Year;
        screen = 30;
      }
      if (M5.BtnB.wasPressed()) {
        second = -1;
        TimeStruct.Seconds = 0;
        M5.Rtc.SetTime(&TimeStruct);
      }
      break;

    // Set Year
    case 30:
      if (count != temp) {
        M5.Lcd.startWrite();
        sprite.fillRect(0, 0, 160, 80, BLACK);
        sprite.pushImage(43, 61, hyphenWidth, hyphenHeight, hyphen);
        sprite.pushImage(71, 61, hyphenWidth, hyphenHeight, hyphen);
        drawSmall(3, 55, DateStruct.Year / 1000);
        drawSmall(13, 55, (DateStruct.Year / 100) % 10);
        drawSmall(23, 55, (DateStruct.Year / 10) % 10);
        drawSmall(33, 55, DateStruct.Year % 10);
        sprite.pushSprite(0, 0);
        M5.Lcd.endWrite();
        count = temp;
      }
      if (M5.BtnA.wasPressed()) {
        count = -1;
        temp = DateStruct.Month;
        screen = 31;
      }
      if (M5.BtnB.wasPressed()) {
        temp++;
        if (temp > 2029) {
          temp = 2020;
        }
        DateStruct.Year = temp;
        dmax[1] = leapYear(DateStruct.Year);
        DateStruct.WeekDay = zeller(DateStruct.Year, DateStruct.Month, DateStruct.Date);
        M5.Rtc.SetData(&DateStruct);
      }
      break;

    // Set Month
    case 31:
      if (count != temp) {
        M5.Lcd.startWrite();
        sprite.fillRect(0, 0, 160, 80, BLACK);
        sprite.pushImage(43, 61, hyphenWidth, hyphenHeight, hyphen);
        sprite.pushImage(71, 61, hyphenWidth, hyphenHeight, hyphen);
        drawSmall(51, 55, DateStruct.Month / 10);
        drawSmall(61, 55, DateStruct.Month % 10);
        sprite.pushSprite(0, 0);
        M5.Lcd.endWrite();
        count = temp;
      }
      if (M5.BtnA.wasPressed()) {
        count = -1;
        temp = DateStruct.Date;
        screen = 32;
      }
      if (M5.BtnB.wasPressed()) {
        temp++;
        if (temp > 12) {
          temp = 1;
        }
        DateStruct.Month = temp;
        if (DateStruct.Date > dmax[DateStruct.Month - 1]) {
          DateStruct.Date = dmax[DateStruct.Month - 1];
        }
        DateStruct.WeekDay = zeller(DateStruct.Year, DateStruct.Month, DateStruct.Date);
        M5.Rtc.SetData(&DateStruct);
      }
      break;

    // Set Date
    case 32:
      if (count == -1) {
        if (DateStruct.Date > dmax[DateStruct.Month - 1]) {
          DateStruct.Date = dmax[DateStruct.Month - 1];
        }
      }
      if (count != temp) {
        M5.Lcd.startWrite();
        sprite.fillRect(0, 0, 160, 80, BLACK);
        sprite.pushImage(43, 61, hyphenWidth, hyphenHeight, hyphen);
        sprite.pushImage(71, 61, hyphenWidth, hyphenHeight, hyphen);
        drawSmall(79, 55, DateStruct.Date / 10);
        drawSmall(89, 55, DateStruct.Date % 10);
        drawDay(110, 54, DateStruct.WeekDay);
        sprite.pushImage(126, 54, dayWidth, dayHeight, day);
        sprite.pushImage(142, 54, dayWidth, dayHeight, day0);
        sprite.pushSprite(0, 0);
        M5.Lcd.endWrite();
        count = temp;
      }
      if (M5.BtnA.wasPressed()) {
        second = -1;
        screen = 10;
      }
      if (M5.BtnB.wasPressed()) {
        temp++;
        if (temp > dmax[DateStruct.Month - 1]) {
          temp = 1;
        }
        DateStruct.Date = temp;
        DateStruct.WeekDay = zeller(DateStruct.Year, DateStruct.Month, DateStruct.Date);
        M5.Rtc.SetData(&DateStruct);
      }
      break;
    
    // Settings, Version Information (Page 1)
    case 100:
      if (count == -1) {
        M5.Axp.ScreenBreath(11);
        M5.Lcd.startWrite();
        sprite.fillRect(0, 0, screenWidth, screenHeight, BLACK);
        sprite.pushImage(0, 0, screenWidth, 16, settings_header_version);
        sprite.pushImage(0, 16, screenWidth, 2, settings_border);
        sprite.pushImage(14, 24, 133, 49, settings_version1);
        drawSmall(96, 59, version[0]);
        drawSmall(111, 59, version[1]);
        drawSmall(126, 59, version[2]);
        sprite.pushSprite(0, 0);
        M5.Lcd.endWrite();
        count = 0;
      }
      if (M5.BtnA.wasPressed()) {
        count = -1;
        screen = 101;
      }
      if (M5.BtnB.wasPressed()) {
        countSleep = 0;
        second = -1;
        screen = 10;
      }
      break;

    // Settings, Version Information (Page 2)
    case 101:
      if (count == -1) {
        M5.Lcd.startWrite();
        sprite.fillRect(0, 0, screenWidth, screenHeight, BLACK);
        sprite.pushImage(0, 0, screenWidth, 16, settings_header_version);
        sprite.pushImage(0, 16, screenWidth, 2, settings_border);
        sprite.pushImage(2, 23, 156, 54, settings_version2);
        sprite.pushSprite(0, 0);
        M5.Lcd.endWrite();
        count = 0;
      }
      if (M5.BtnA.wasPressed()) {
        count = -1;
        screen = 100;
      }
      if (M5.BtnB.wasPressed()) {
        countSleep = 0;
        second = -1;
        screen = 10;
      }
      break;
  }
  delay(1000 / 30);
}

void drawBig(int x, int y, int i) {
  unsigned short big[936];
  int bsize = sizeof(big);
  switch (i) {
    case 0:
      memcpy(big, big0, bsize);
      break;
    case 1:
      memcpy(big, big1, bsize);
      break;
    case 2:
      memcpy(big, big2, bsize);
      break;
    case 3:
      memcpy(big, big3, bsize);
      break;
    case 4:
      memcpy(big, big4, bsize);
      break;
    case 5:
      memcpy(big, big5, bsize);
      break;
    case 6:
      memcpy(big, big6, bsize);
      break;
    case 7:
      memcpy(big, big7, bsize);
      break;
    case 8:
      memcpy(big, big8, bsize);
      break;
    case 9:
      memcpy(big, big9, bsize);
      break;
  }
  sprite.pushImage(x, y, bigWidth, bigHeight, big);
  return;
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

void drawSmall(int x, int y, int i) {
  unsigned short small[150];
  int ssize = sizeof(small);
  switch (i) {
    case 0:
      memcpy(small, small0, ssize);
      break;
    case 1:
      memcpy(small, small1, ssize);
      break;
    case 2:
      memcpy(small, small2, ssize);
      break;
    case 3:
      memcpy(small, small3, ssize);
      break;
    case 4:
      memcpy(small, small4, ssize);
      break;
    case 5:
      memcpy(small, small5, ssize);
      break;
    case 6:
      memcpy(small, small6, ssize);
      break;
    case 7:
      memcpy(small, small7, ssize);
      break;
    case 8:
      memcpy(small, small8, ssize);
      break;
    case 9:
      memcpy(small, small9, ssize);
      break;
  }
  sprite.pushImage(x, y, smallWidth, smallHeight, small);
  return;
}

void drawDay(int x, int y, int i) {
  unsigned short day[256];
  int dsize = sizeof(day);
  switch (i) {
    case 0:
      memcpy(day, day0, dsize);
      break;
    case 1:
      memcpy(day, day1, dsize);
      break;
    case 2:
      memcpy(day, day2, dsize);
      break;
    case 3:
      memcpy(day, day3, dsize);
      break;
    case 4:
      memcpy(day, day4, dsize);
      break;
    case 5:
      memcpy(day, day5, dsize);
      break;
    case 6:
      memcpy(day, day6, dsize);
      break;
  }
  sprite.pushImage(x, y, dayWidth, dayHeight, day);
  return;
}

int zeller(int y, int m, int d) {
  int w;
  if (m < 3) {
    y--;
    m += 12;
  }
  w = (y + y / 4 - y / 100 + y / 400 + (13 * m + 8) / 5 + d) % 7;
  return w;
}

int leapYear(int y) {
  if (y == 2020 || y == 2024 || y == 2028) {
    return 29;
  } else {
    return 28;
  }
}
