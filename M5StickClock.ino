// M5StickClock
// Copyright (c) 2022 Sora Arakawa

#include <M5StickC.h>
#include <time.h>
#include "img/logo.h"
#include "img/colon.h"
#include "img/big.h"
#include "img/medium.h"
#include "img/small.h"
#include "img/hyphen.h"
#include "img/day.h"

int screen = 0;
int count = 0;
int second = 0;
TFT_eSprite sprite(&M5.Lcd);
RTC_DateTypeDef DateStruct;
RTC_TimeTypeDef TimeStruct;

void setup() {
  M5.begin();
  M5.Lcd.setRotation(1);
  sprite.createSprite(M5.Lcd.width(), M5.Lcd.height());
  sprite.setSwapBytes(true);
  DateStruct.Year = 2022;
  DateStruct.Month = 6;
  DateStruct.Date = 28;
  DateStruct.WeekDay = 2;
  M5.Rtc.SetData(&DateStruct);
  TimeStruct.Hours = 0;
  TimeStruct.Minutes = 0;
  TimeStruct.Seconds = 0;
  M5.Rtc.SetTime(&TimeStruct);
}

void loop() {
  M5.Rtc.GetTime(&TimeStruct);
  switch (screen) {
    case 0:
      if (count == 0) {
        M5.Lcd.pushImage(0, 0, logoWidth, logoHeight, logo);
      }
      count++;
      if (count >= 30) {
        M5.Lcd.setSwapBytes(true);
        count = -1;
        screen = 10;
      }
      break;
    case 10:
      if (TimeStruct.Seconds != second) {
        M5.Lcd.startWrite();
        sprite.fillRect(0, 0, 160, 80, BLACK);
        sprite.pushImage(61, 20, colonWidth, colonHeight, colon);
        sprite.pushImage(44, 61, hyphenWidth, hyphenHeight, hyphen);
        sprite.pushImage(72, 61, hyphenWidth, hyphenHeight, hyphen);
        drawBig(4, 12, TimeStruct.Hours / 10);
        drawBig(31, 12, TimeStruct.Hours % 10);
        drawBig(74, 12, TimeStruct.Minutes / 10);
        drawBig(101, 12, TimeStruct.Minutes % 10);
        drawMedium(129, 28, TimeStruct.Seconds / 10);
        drawMedium(143, 28, TimeStruct.Seconds % 10);
        drawSmall(4, 55, DateStruct.Year / 1000);
        drawSmall(14, 55, (DateStruct.Year / 100) % 10);
        drawSmall(24, 55, (DateStruct.Year / 10) % 10);
        drawSmall(34, 55, DateStruct.Year % 10);
        drawSmall(52, 55, DateStruct.Month / 10);
        drawSmall(62, 55, DateStruct.Month % 10);
        drawSmall(80, 55, DateStruct.Date / 10);
        drawSmall(90, 55, DateStruct.Date % 10);
        drawDay(111, 54, DateStruct.WeekDay);
        sprite.pushImage(127, 54, dayWidth, dayHeight, day);
        sprite.pushImage(143, 54, dayWidth, dayHeight, day0);
        sprite.pushSprite(0, 0);
        M5.Lcd.endWrite();
        second = TimeStruct.Seconds;
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
