#pragma once

#include "configuration.h"

#if defined(ARDUINO_ARCH_ESP32)
#include <FS.h>
#include <WiFi.h>
#endif

#include <Arduino.h>
#include <SPI.h>
#include <Wire.h>

#ifdef DISPLAY_MODEL
#include <U8g2lib.h>
#endif

#include <esp_mac.h>

#ifndef DISPLAY_ADDR
#define DISPLAY_ADDR               0x3C
#endif


// #define ENABLE_BLE      //Enable ble function

typedef struct {
    String          chipModel;
    float           psramSize;
    uint8_t         chipModelRev;
    uint8_t         chipFreq;
    uint8_t         flashSize;
    uint8_t         flashSpeed;
} DevInfo_t;

void setupBoards(bool disable_u8g2 = false);

void printResult(bool radio_online);

bool beginGPS();
bool recoveryGPS();

void scanWiFi();

#define disablePeripherals()

#ifdef DISPLAY_MODEL
bool beginDisplay();
extern DISPLAY_MODEL *u8g2;
#define U8G2_HOR_ALIGN_CENTER(t)    ((u8g2->getDisplayWidth() -  (u8g2->getUTF8Width(t))) / 2)
#define U8G2_HOR_ALIGN_RIGHT(t)     ( u8g2->getDisplayWidth()  -  u8g2->getUTF8Width(t))
#endif


#if defined(ARDUINO_ARCH_ESP32)
#define SerialGPS Serial1
#endif

#ifdef NTC_PIN
float getTempForNTC();
#endif

#ifdef ENABLE_BLE
void setupBLE();
#else
#define setupBLE()
#endif
