#ifndef Pins_Arduino_h
#define Pins_Arduino_h

#include "soc/soc_caps.h"
#include <stdint.h>

static const uint8_t TX = 1;
static const uint8_t RX = 3;

// --- ОСНОВНЫЕ ПИНЫ SPI ДЛЯ ДИСПЛЕЯ (VSPI) ---
static const uint8_t SS = 5;
static const uint8_t MOSI = 23;
static const uint8_t MISO = -1; // Для ST7789 MISO не нужен
static const uint8_t SCK = 18;

// --- ПИНЫ I2C ---
static const uint8_t SDA = 21;
static const uint8_t SCL = 22;

#define SERIAL_RX 3
#define SERIAL_TX 1
#define BAD_RX SERIAL_RX
#define BAD_TX SERIAL_TX
#define GPS_SERIAL_TX SERIAL_TX
#define GPS_SERIAL_RX SERIAL_RX

// === НАСТРОЙКА КНОПОК ===
#define BTN_ALIAS "\"OK\""
#define HAS_4_BUTTONS       // Режим 4 кнопок
#define UP_BTN 32           // Кнопка 1 — Вверх
#define DW_BTN 33           // Кнопка 2 — Вниз
#define SEL_BTN 17          // Кнопка 3 — Выбор (ОК)
#define ESC_BTN 19          // Кнопка 4 — Назад (Отмена)
#define BTN_ACT LOW         // Замыкание на GND
#define L_BTN -1
#define R_BTN -1

// === ИНФРАКРАСНЫЙ ПОРТ (IR) ===
#define HAS_IR
#define IR_TX_PIN 26        // Ваш DAT пин ИК
#define IR_RX_PIN -1        // Если только передатчик

// === НАСТРОЙКА ЭКРАНА И ОРИЕНТАЦИИ ===
#define HAS_SCREEN 1
#define ROTATION 3          // Альбомная ориентация (ландшафт)
#define MINBRIGHT (uint8_t)1

// === НАСТРОЙКА ДИСПЛЕЯ ST7789 ===
#define USER_SETUP_LOADED 1
#define ST7789_DRIVER 1
#define TFT_RGB_ORDER 0
#define TFT_WIDTH 240       
#define TFT_HEIGHT 320
#define TFT_BACKLIGHT_ON 1
#define TFT_BL 15           // Ваша подсветка BL
#define TFT_RST 4           // Ваш сброс RST
#define TFT_DC 16           // Ваш выбор режима DC
#define TFT_MOSI 23         // Ваш SDA
#define TFT_SCLK 18         // Ваш SCL
#define TFT_CS 5            // Ваш CS
#define TOUCH_CS -1 
#define SMOOTH_FONT 1
#define SPI_FREQUENCY 40000000

// === НАСТРОЙКА SD-КАРТЫ (Шина HSPI) ===
#define HAS_SDCARD 1
#define SDCARD_CS 27        // Ваш CS карты
#define SDCARD_SCK 14       // Ваш CLK карты
#define SDCARD_MOSI 13      // Ваш MOSI карты
#define SDCARD_MISO 35      // Ваш MISO карты

#define NO_BATTERY 1

#endif /* Pins_Arduino_h */
