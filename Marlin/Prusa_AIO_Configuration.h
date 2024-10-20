#pragma once

/**
 * Prusa_AIO_Configuration.h
 *
 * This file includes basic settings like:
 *
 * - Getting Started with Prusa All-in-One Firmware
 * - Custom Printer Name
 * - Tall Bear
 * - Motherboard
 * - USB Flash Drive
 * - ESP WiFi Addon
 * - Stepper Drivers
 * - Stepper Motors
 * - Extruder
 * - Hotend
 * - Probe & Bed Leveling
 * - Fans
 * - PID / MPC Settings
 * - LCD / TFT / Controller
 * - Custom Menus
 * - NeoPixels
 * - Input Shaping
 * - MK2.5S Support
 */
#define CONFIGURATION_H_VERSION 02010300
#define PRUSA_AIO_VERSION 20241019

//===========================================================================
//============= Getting Started with Prusa All-in-One Firmware ==============
//===========================================================================

/**
 * If you find this project helpful, please consider donating:
 *
 * Keith Bennett, Prusa AIO creator:  https://github.com/sponsors/thisiskeithb
 *                                    https://ko-fi.com/thisiskeithb
 *
 * Here are some standard links to get your machine set up:
 *
 * Prusa AIO Wiki:         https://github.com/thisiskeithb/PrusaAIO/wiki/
 * Prusa AIO Discussions:  https://github.com/thisiskeithb/PrusaAIO/discussions
 *
 * Thank you and Happy Printing!
 */

//===========================================================================
//=========================== Custom Printer Name ===========================
//===========================================================================

// Uncomment to set a custom printer name.
//#define PRUSA_AIO_CUSTOM_PRINTER_NAME "AIO Bear"

//===========================================================================
//================================ Tall Bear ================================
//===========================================================================

// Stock Bear frame (210mm Z) is assumed by default. Uncomment PRUSA_AIO_FRAME_BEAR_320 to enable 320mm Z support.
//#define PRUSA_AIO_FRAME_BEAR_320

//===========================================================================
//=============================== Motherboard ===============================
//===========================================================================

/**
 * Motherboard Options
 *
 *  BigTreeTech / BTT
 *
 *    - SKR 3.0             (STM32H723VG/STM32H743VI)
 *    - SKR 3.0 EZ          (STM32H723VG/STM32H743VI)
 *    - SKR 2.0 Rev. B      (STM32F407VG/STM32F429VG)
 *    - SKR 1.4             (LPC1768)
 *    - SKR 1.4 Turbo       (LPC1769)
 *    - SKR 1.3             (LPC1768)
 *    - BTT002 1.0          (STM32F407VG/STM32F407VE)
 *    - SKR Mini E3 V3      (STM32G0B1RE)
 *    - SKR Mini E3 V3.0.1  (STM32F401RC)
 *    - SKR Mini E3 V2      (STM32F103RC/STM32F103RE)
 *
 *  Makerbase / MKS
 *
 *    - Robin Nano V3       (STM32F407VG)
 *    - Robin Nano V3.1     (STM32F407VE)
 *    - Eagle V1.0          (STM32F407VE)
 *    - SGEN_L V2           (LPC1769)
 *    - Robin E3 1.0        (STM32F103RC)
 *    - Robin E3 1.1        (STM32F103RC)
 *    - Robin E3D 1.0       (STM32F103RC)
 *    - Robin E3D 1.1       (STM32F103RC)
 *
 * Motherboard Cases: https://github.com/thisiskeithb/PrusaAIO/wiki/Recommended-Motherboard-Cases
 * Wiring Guide: https://github.com/thisiskeithb/PrusaAIO/wiki/Supported-Motherboards-&-Wiring-Guide
 */
//#define PRUSA_AIO_MOTHERBOARD_BTT_SKR_V3_0
#define PRUSA_AIO_MOTHERBOARD_BTT_SKR_V3_0_EZ
//#define PRUSA_AIO_MOTHERBOARD_BTT_SKR_V2_0_REV_B
//#define PRUSA_AIO_MOTHERBOARD_BTT_SKR_1_4
//#define PRUSA_AIO_MOTHERBOARD_BTT_SKR_1_4_TURBO
//#define PRUSA_AIO_MOTHERBOARD_BTT_SKR_1_3
//#define PRUSA_AIO_MOTHERBOARD_BTT_BTT002
//#define PRUSA_AIO_MOTHERBOARD_BTT_SKR_MINI_E3_V3_0
//#define PRUSA_AIO_MOTHERBOARD_BTT_SKR_MINI_E3_V3_0_1
//#define PRUSA_AIO_MOTHERBOARD_BTT_SKR_MINI_E3_V2_0
//#define PRUSA_AIO_MOTHERBOARD_MKS_ROBIN_NANO_V3
//#define PRUSA_AIO_MOTHERBOARD_MKS_ROBIN_NANO_V3_1
//#define PRUSA_AIO_MOTHERBOARD_MKS_EAGLE_V1_0
//#define PRUSA_AIO_MOTHERBOARD_MKS_SGEN_L_V2
//#define PRUSA_AIO_MOTHERBOARD_MKS_ROBIN_E3
//#define PRUSA_AIO_MOTHERBOARD_MKS_ROBIN_E3_V1_1
//#define PRUSA_AIO_MOTHERBOARD_MKS_ROBIN_E3D
//#define PRUSA_AIO_MOTHERBOARD_MKS_ROBIN_E3D_V1_1

//===========================================================================
//============================= USB Flash Drive =============================
//===========================================================================

/**
 * Not supported on all boards. Check your board for compatibility.
 *
 * Disabled by default. Uncomment PRUSA_AIO_FLASH_DRIVE_SUPPORT to enable support.
 */
//#define PRUSA_AIO_FLASH_DRIVE_SUPPORT

//===========================================================================
//============================= ESP WiFi Addon ==============================
//===========================================================================

/**
 * Not supported on all boards. Check your board for compatibility.
 *
 * ESP3D download: https://github.com/luc-github/ESP3D
 * ESP3D WEBUI download: https://github.com/luc-github/ESP3D-WEBUI
 *
 * Disabled by default. Uncomment PRUSA_AIO_WIFI_SUPPORT to enable support.
 */
//#define PRUSA_AIO_WIFI_SUPPORT

//===========================================================================
//============================= Stepper Drivers =============================
//===========================================================================

/**
 * Trinamic Drivers
 *
 *   - TMC2209 / EZ2209
 *   - TMC2226 / EZ2226
 *   - TMC5160 / EZ5160
 *   - TMC2130 / EZ2130 - Active cooling is essential or drivers will overheat!
 *
 * Supported Drivers: https://github.com/thisiskeithb/PrusaAIO/wiki/Supported-Drivers
 * Note: If your motherboard supports five drivers, all five driver slots must be populated.
 */
//#define PRUSA_AIO_DRIVERS_TMC2130             // TMC2130 / BTT EZ2130 with 0.11 Ohm RSENSE resistors
#define PRUSA_AIO_DRIVERS_TMC2209               // TMC2209 / BTT EZ2209 with 0.11 Ohm RSENSE resistors
//#define PRUSA_AIO_DRIVERS_TMC2226_015_RSENSE  // BTT TMC2226 with 0.15 Ohm RSENSE resistors
//#define PRUSA_AIO_DRIVERS_TMC2226_011_RSENSE  // MKS TMC2226 / BTT EZ2226 with 0.11 Ohm RSENSE resistors
//#define PRUSA_AIO_DRIVERS_TMC5160             // TMC5160 / BTT EZ5160 with 0.075 Ohm RSENSE resistors

//===========================================================================
//============================= Stepper Motors ==============================
//===========================================================================

/**
 * Extruder Stepper Motor
 *
 *   - Stock 1.8°
 *   - Bondtech 1.8° pancake
 *   - LDO 1.8° Slim Power pancake
 *   - LDO 0.9° Slim Power pancake
 *   - LDO Planetary Geared
 *
 * Supported Motors: https://github.com/thisiskeithb/PrusaAIO/wiki/Supported-Motors
 * Wiring Guide: https://github.com/thisiskeithb/PrusaAIO/wiki/Supported-Motherboards-&-Wiring-Guide
 */
#define PRUSA_AIO_E_STEPPER_STOCK
//#define PRUSA_AIO_E_STEPPER_BONDTECH
//#define PRUSA_AIO_E_STEPPER_LDO_1_8
//#define PRUSA_AIO_E_STEPPER_LDO_0_9
//#define PRUSA_AIO_E_STEPPER_LDO_PLANETARY

/**
 * X/Y Stepper Motors
 *
 *   - Stock 1.8°
 *   - LDO 0.9°
 *   - Moons 0.9°
 *
 * Supported Motors: https://github.com/thisiskeithb/PrusaAIO/wiki/Supported-Motors
 * Wiring Guide: https://github.com/thisiskeithb/PrusaAIO/wiki/Supported-Motherboards-&-Wiring-Guide
 */
#define PRUSA_AIO_XY_STEPPERS_STOCK
//#define PRUSA_AIO_XY_STEPPERS_LDO_0_9
//#define PRUSA_AIO_XY_STEPPERS_MOONS_0_9

// Invert the stepper direction. Change (or reverse the motor connector) if an axis goes the wrong way.
//#define PRUSA_AIO_INVERT_X_DIR
//#define PRUSA_AIO_INVERT_Y_DIR
//#define PRUSA_AIO_INVERT_Z_DIR
//#define PRUSA_AIO_INVERT_E_DIR

/**
 * Sensorless Homing
 *
 *  Sensitivity   TMC2209   TMC5160
 *                TMC2226   TMC2130
 *    HIGHEST       255       -64    (Too sensitive => False positive)
 *    LOWEST         0         63    (Too insensitive => No trigger)
 *
 * If needed, uncomment PRUSA_AIO_*_STALL sensorless (StallGuard) settings below.
 * Settings can also be customized via LCD under Configuration -> Advanced Settings -> TMC Drivers -> Sensorless Homing
 */
//#define PRUSA_AIO_X_STALL_SENSITIVITY  90
//#define PRUSA_AIO_Y_STALL_SENSITIVITY  100

// If needed, uncomment PRUSA_AIO_HOMING_FEEDRATE_MM_M to customize Homing speeds (mm/min)
//#define PRUSA_AIO_HOMING_FEEDRATE_MM_M { (50*60), (50*60), (4*60) }

//===========================================================================
//================================ Extruder =================================
//===========================================================================

/**
 * Extruder
 *
 *  - Bear Extruder V2 w/ SuperPINDA or PINDA V2                  https://www.patreon.com/posts/bearexxa-v2-new-67675755
 *
 *  - Bear Extruder V1 w/ SuperPINDA or PINDA V2                  https://github.com/gregsaun/bear_extruder_and_x_axis
 *  - Bear Extruder V1 w/ integrated BLTouch mount by Vertigo235  https://www.printables.com/model/6606
 *
 *  - Bondtech BMG extruder w/ SuperPINDA or PINDA V2             https://www.bondtech.se/product/prusa-i3-mk3s-extruder-upgrade/
 *  - Bondtech BMG extruder w/ BLTouch mount by Vertigo235        https://www.printables.com/model/6623
 *
 *  - SFP Extruder w/ SuperPINDA or PINDA V2 by gerdj             https://github.com/gerdj/RedBear/tree/master/SFP_Extruder
 *
 * Supported Extruders: https://github.com/thisiskeithb/PrusaAIO/wiki/Supported-Extruders
 * Wiring Guide: https://github.com/thisiskeithb/PrusaAIO/wiki/Supported-Motherboards-&-Wiring-Guide
 */
//#define PRUSA_AIO_EXTRUDER_BEAR_V2_PINDA
#define PRUSA_AIO_EXTRUDER_BEAR_V1_PINDA
//#define PRUSA_AIO_EXTRUDER_BEAR_V1_BLTOUCH
//#define PRUSA_AIO_EXTRUDER_BMG_PINDA
//#define PRUSA_AIO_EXTRUDER_BMG_BLTOUCH
//#define PRUSA_AIO_EXTRUDER_SFP_PINDA

//===========================================================================
//================================= Hotend ==================================
//===========================================================================

/**
 * Hotend
 *
 *  - E3D V6
 *  - E3D Revo Six
 *  - E3D Revo Micro
 *  - Slice Engineering Mosquito / Magnum
 *
 * Supported Hotends: https://github.com/thisiskeithb/PrusaAIO/wiki/Supported-Hotends
 * Wiring Guide: https://github.com/thisiskeithb/PrusaAIO/wiki/Supported-Motherboards-&-Wiring-Guide
 */
#define PRUSA_AIO_HOTEND_E3D_V6
//#define PRUSA_AIO_HOTEND_E3D_REVO_SIX
//#define PRUSA_AIO_HOTEND_E3D_REVO_MICRO
//#define PRUSA_AIO_HOTEND_SLICE_MOSQUITO

/**
 * Thermistor
 *
 * Standard Thermistors
 *
 *   - Stock / Revo Semitec 104NT
 *   - Generic NTC 100K (Type 1)
 *
 * High Temperature Thermistors
 *
 *   - Slice Engineering's 450°C High Temperature Thermistor
 *   - Trianglelab T-D500 500°C High Temperature Thermistor (Cartridge-based Dyze Design thermistor)
 *
 * Supported Thermistors: https://github.com/thisiskeithb/PrusaAIO/wiki/Supported-Thermistors
 * Wiring Guide: https://github.com/thisiskeithb/PrusaAIO/wiki/Supported-Motherboards-&-Wiring-Guide
 */
#define PRUSA_AIO_THERMISTOR_SEMITEC_104NT
//#define PRUSA_AIO_THERMISTOR_GENERIC_100K
//#define PRUSA_AIO_THERMISTOR_SLICE_450C
//#define PRUSA_AIO_THERMISTOR_TL_T_D500

//===========================================================================
//========================== Probe & Bed Leveling ===========================
//===========================================================================

/**
 * Probes
 *
 *  - SuperPINDA (3 wires)
 *  - PINDA V2 w/ Thermistor (4 wires)
 *  - BLTouch
 *
 * Wiring Guide: https://github.com/thisiskeithb/PrusaAIO/wiki/Supported-Motherboards-&-Wiring-Guide
 */
#define PRUSA_AIO_PROBE_SUPERPINDA
//#define PRUSA_AIO_PROBE_PINDA_V2
//#define PRUSA_AIO_PROBE_BLTOUCH

/**
 * Probe Connection
 *
 * Connect probe to ZPROBE (5-pin) or SERVO (3-pin) + ZPROBE (2-pin) by default.
 * Uncomment if connecting probe to SERVO + Z MIN/Z STOP instead.
 */
//#define PRUSA_AIO_PROBE_USES_Z_MIN_ENDSTOP_PIN

/*
 * Custom Probe Offset
 *
 * Default probe offsets will be used based on extruder selected above.
 *
 * If needed, uncomment to customize probe offset. This can also be customized via LCD
 * under Configuration -> Advanced Settings -> Probe Offsets
 */
//#define PRUSA_AIO_NOZZLE_TO_PROBE_OFFSET { 23, 5, 0 }

/**
 * Bed Leveling Type
 *
 *   - Bilinear
 *   - Unified Bed Leveling
 */
#define PRUSA_AIO_BED_LEVELING_BILINEAR
//#define PRUSA_AIO_BED_LEVELING_UBL

//===========================================================================
//================================== Fans ===================================
//===========================================================================

/**
 * Part Cooling Fan
 *
 * 24V Options:
 *
 *   - Generic (No minimum PWM limit is applied)
 *   - 24V Mechatronics B5015E24B-BSR
 *   - 24V Delta BFB0524HH
 *   - 24V SoundOriginal
 *
 * 12V Options (MK2.5S only):
 *
 *   - 12V Stock Prusa 5015
 *   - 12V SoundOriginal
 *
 * 5V Options (BigTreeTech BTT002 1.0 & SKR V3/EZ with DC Mode addon board only):
 *
 *   - Generic (No minimum PWM limit is applied)
 *   - 5V Stock Prusa 5015
 *   - 5V LDO DF5015H05S
 *
 * Supported Fans: https://github.com/thisiskeithb/PrusaAIO/wiki/Supported-Fans
 * Wiring Guide: https://github.com/thisiskeithb/PrusaAIO/wiki/Supported-Motherboards-&-Wiring-Guide
 */
#define PRUSA_AIO_PART_COOLING_FAN_GENERIC
//#define PRUSA_AIO_PART_COOLING_FAN_24V_MECHATRONICS_B5015E24B_BSR
//#define PRUSA_AIO_PART_COOLING_FAN_24V_DELTA_BFB0524HH
//#define PRUSA_AIO_PART_COOLING_FAN_24V_SOUNDORIGINAL
//#define PRUSA_AIO_PART_COOLING_FAN_12V_STOCK_PRUSA_MK25S_5015
//#define PRUSA_AIO_PART_COOLING_FAN_12V_SOUNDORIGINAL
//#define PRUSA_AIO_PART_COOLING_FAN_5V_STOCK_PRUSA_MK3S_5015
//#define PRUSA_AIO_PART_COOLING_FAN_5V_LDO_DF5015H05S

/**
 * Motherboard Cooling Fan
 *
 * Wiring Guide: https://github.com/thisiskeithb/PrusaAIO/wiki/Supported-Motherboards-&-Wiring-Guide
 */
//#define PRUSA_AIO_MOTHERBOARD_FAN

//===========================================================================
//=========================== PID / MPC Settings ============================
//===========================================================================

/**
 * Custom PID Settings
 *
 * Stock E3D V6 hotend and Prusa MK52 bed PID settings are enabled by default.
 *
 * If needed, uncomment PRUSA_AIO_CUSTOM_HOTEND_PID or PRUSA_AIO_CUSTOM_BED_PID to customize PID settings.
 */
//#define PRUSA_AIO_CUSTOM_HOTEND_PID
#if ENABLED(PRUSA_AIO_CUSTOM_HOTEND_PID)
  #define PRUSA_AIO_DEFAULT_Kp  16.50
  #define PRUSA_AIO_DEFAULT_Ki   1.16
  #define PRUSA_AIO_DEFAULT_Kd  58.80
  // Find your own by running "M303 E0 C8 S210" via serial to run autotune on the hotend at 210 °C for 8 cycles.
#endif

//#define PRUSA_AIO_CUSTOM_BED_PID
#if ENABLED(PRUSA_AIO_CUSTOM_BED_PID)
  #define PRUSA_AIO_DEFAULT_bedKp  28.13
  #define PRUSA_AIO_DEFAULT_bedKi   2.09
  #define PRUSA_AIO_DEFAULT_bedKd 483.07
  // Find your own by running "M303 E-1 C8 S65" via serial to run autotune on the bed at 65 °C for 8 cycles.
#endif

/**
 * Model Predictive Control for Hotend
 *
 * Stock E3D V6 hotend with 40W heater cartridge is configured by default.
 *
 * Note: Replaces PID for the hotend
 */
//#define PRUSA_AIO_HOTEND_MPCTEMP

// If needed, uncomment PRUSA_AIO_CUSTOM_HOTEND_MPCTEMP to customize MPCTEMP settings.
// Use M306 T to autotune the model. See https://marlinfw.org/docs/gcode/M306.html for full details.
//#define PRUSA_AIO_CUSTOM_HOTEND_MPCTEMP
#if ALL(PRUSA_AIO_HOTEND_MPCTEMP, PRUSA_AIO_CUSTOM_HOTEND_MPCTEMP)
  #define PRUSA_AIO_CUSTOM_MPC_HEATER_POWER { 40.0f }                // (W) Heat cartridge power.
  #define PRUSA_AIO_CUSTOM_MPC_BLOCK_HEAT_CAPACITY { 16.7f }         // (J/K) Heat block heat capacity. Use M306 T to autotune the model.
  #define PRUSA_AIO_CUSTOM_MPC_SENSOR_RESPONSIVENESS { 0.22f }       // (K/s per ∆K) Rate of change of sensor temperature from heat block.
  #define PRUSA_AIO_CUSTOM_MPC_AMBIENT_XFER_COEFF { 0.068f }         // (W/K) Heat transfer coefficients from heat block to room air with fan off.
  #define PRUSA_AIO_CUSTOM_MPC_AMBIENT_XFER_COEFF_FAN255 { 0.097f }  // (W/K) Heat transfer coefficients from heat block to room air with fan on full.


  // Filament Heat Capacity (joules/kelvin/mm)
  // Set with M306 H<value> in your filament or start G-code.
  #define PRUSA_AIO_CUSTOM_FILAMENT_HEAT_CAPACITY_PERMM { 5.6e-3f }  //   PLA = 5.6e-3f (0.0056) J/K/mm
                                                                     //  PETG = 3.6e-3f (0.0036) J/K/mm
                                                                     //   ABS = 5.15e-3f (0.00515) J/K/mm
                                                                     // Nylon = 5.22e-3f (0.00522) J/K/mm
#endif

//===========================================================================
//========================= LCD / TFT / Controller ==========================
//===========================================================================

/**
 * LCD / TFT / Controller
 *
 *   - Stock RepRapDiscount smart controller
 *   - OLED RepRapDiscount smart controller   // OLED screen is only compatible with LPC-based motherboards.
 *   - BigTreeTech Dual Mode TFT              // BigTreeTech TFT35, TFT50, TFT70, etc.
 *   - BTT Mini 12864 with NeoPixel RGB       // BigTreeTech Mini 12864 V1/V2 with NeoPixel RGB
 *   - Fysetc Mini 12864 with NeoPixel RGB    // Fysetc Mini 12864 V2.1 with NeoPixel RGB
 *   - MKS Mini 12864 with NeoPixel RGB       // MKS Mini 12864 V3 with NeoPixel RGB
 *
 * LCD Covers: https://github.com/thisiskeithb/PrusaAIO/wiki/Recommended-LCD-Covers
 */
#define PRUSA_AIO_DISPLAY_STOCK_REPRAP_DISCOUNT_SMART_CONTROLLER
//#define PRUSA_AIO_DISPLAY_OLED_REPRAP_DISCOUNT_SMART_CONTROLLER
//#define PRUSA_AIO_DISPLAY_BTT_DUAL_MODE_TFT
//#define PRUSA_AIO_DISPLAY_BTT_MINI_12864_NEOPIXEL
//#define PRUSA_AIO_DISPLAY_FYSETC_MINI_12864_NEOPIXEL
//#define PRUSA_AIO_DISPLAY_MKS_MINI_12864_NEOPIXEL

//
// Reverse the encoder direction everywhere.
//
//#define PRUSA_AIO_REVERSE_ENCODER_DIRECTION

/**
 * LCD LANGUAGE
 *
 * Select the language to display on the LCD. These languages are available:
 *
 *   en, an, bg, ca, cz, da, de, el, el_CY, es, eu, fi, fr, gl, hr, hu, it,
 *   jp_kana, ko_KR, nl, pl, pt, pt_br, ro, ru, sk, sv, tr, uk, vi, zh_CN, zh_TW
 *
 * :{ 'en':'English', 'an':'Aragonese', 'bg':'Bulgarian', 'ca':'Catalan', 'cz':'Czech', 'da':'Danish', 'de':'German', 'el':'Greek (Greece)', 'el_CY':'Greek (Cyprus)', 'es':'Spanish', 'eu':'Basque-Euskera', 'fi':'Finnish', 'fr':'French', 'gl':'Galician', 'hr':'Croatian', 'hu':'Hungarian', 'it':'Italian', 'jp_kana':'Japanese', 'ko_KR':'Korean (South Korea)', 'nl':'Dutch', 'pl':'Polish', 'pt':'Portuguese', 'pt_br':'Portuguese (Brazilian)', 'ro':'Romanian', 'ru':'Russian', 'sk':'Slovak', 'sv':'Swedish', 'tr':'Turkish', 'uk':'Ukrainian', 'vi':'Vietnamese', 'zh_CN':'Chinese (Simplified)', 'zh_TW':'Chinese (Traditional)' }
 */
#define PRUSA_AIO_LCD_LANGUAGE en

//===========================================================================
//============================== Custom Menus ===============================
//===========================================================================

/**
 * Sheet Profiles Menu
 *
 * Automatically adjust Z Probe Offset with M851 based on selected Sheet Profile.
 * Up to 10 are supported without changes.
 */
//#define PRUSA_AIO_SHEET_PROFILES_MENU
#if ENABLED(PRUSA_AIO_SHEET_PROFILES_MENU)
  #define PRUSA_AIO_SHEET_1_DESC      "Smooth"    // Short description of Sheet
  #define PRUSA_AIO_SHEET_1_OFFSET      -0.000    // Sheet offset. This should be a negative value.

  #define PRUSA_AIO_SHEET_2_DESC    "Textured"
  #define PRUSA_AIO_SHEET_2_OFFSET      -0.000

  //#define PRUSA_AIO_SHEET_3_DESC     "Satin"
  //#define PRUSA_AIO_SHEET_3_OFFSET    -0.000
#endif

/**
 * Calibration Menu
 *
 * Top-level menu with first layer calibration, nozzle change, semi-automated cold pull, and more.
 */
//#define PRUSA_AIO_CALIBRATION_MENU

//===========================================================================
//================================ NeoPixels ================================
//===========================================================================

/**
 * Default LCD NeoPixel Color (Mini 12864 with NeoPixel RGB only)
 *
 *   - WHITE, RED, ORANGE, YELLOW, GREEN, BLUE, INDIGO, VIOLET
 */
#if ANY(PRUSA_AIO_DISPLAY_BTT_MINI_12864_NEOPIXEL, PRUSA_AIO_DISPLAY_FYSETC_MINI_12864_NEOPIXEL, PRUSA_AIO_DISPLAY_MKS_MINI_12864_NEOPIXEL)
  #define PRUSA_AIO_LCD_NEOPIXEL_COLOR_WHITE
  //#define PRUSA_AIO_LCD_NEOPIXEL_COLOR_RED
  //#define PRUSA_AIO_LCD_NEOPIXEL_COLOR_ORANGE
  //#define PRUSA_AIO_LCD_NEOPIXEL_COLOR_YELLOW
  //#define PRUSA_AIO_LCD_NEOPIXEL_COLOR_GREEN
  //#define PRUSA_AIO_LCD_NEOPIXEL_COLOR_BLUE
  //#define PRUSA_AIO_LCD_NEOPIXEL_COLOR_INDIGO
  //#define PRUSA_AIO_LCD_NEOPIXEL_COLOR_VIOLET
#endif

// NeoPixel strip is disabled by default. Uncomment to enable.
//#define PRUSA_AIO_NEOPIXEL_STRIP
#if ENABLED(PRUSA_AIO_NEOPIXEL_STRIP)
  /**
   * NeoPixel Strip Type
   *
   *   - NEO_GRBW, NEO_RGBW, NEO_GRB, NEO_RBG, etc.
   *
   * 60 LEDs/meter: https://www.amazon.com/dp/B018X04ES2
   * Wiring Guide: https://github.com/thisiskeithb/PrusaAIO/wiki/Supported-Motherboards-&-Wiring-Guide
   */
  #define PRUSA_AIO_NEOPIXEL_STRIP_TYPE NEO_GRB
  #define PRUSA_AIO_NEOPIXEL_STRIP_LED_COUNT    17    // 17 NeoPixels fit in the top 2040 extrusion (60 LEDs/meter)
  #define PRUSA_AIO_NEOPIXEL_STRIP_BRIGHTNESS  255    // 255 is max brightness

  /**
   * Default NeoPixel Strip Color
   *
   *   - WHITE, RED, ORANGE, YELLOW, GREEN, BLUE, INDIGO, VIOLET
   */
  #define PRUSA_AIO_NEOPIXEL_STRIP_COLOR_WHITE
  //#define PRUSA_AIO_NEOPIXEL_STRIP_COLOR_RED
  //#define PRUSA_AIO_NEOPIXEL_STRIP_COLOR_ORANGE
  //#define PRUSA_AIO_NEOPIXEL_STRIP_COLOR_YELLOW
  //#define PRUSA_AIO_NEOPIXEL_STRIP_COLOR_GREEN
  //#define PRUSA_AIO_NEOPIXEL_STRIP_COLOR_BLUE
  //#define PRUSA_AIO_NEOPIXEL_STRIP_COLOR_INDIGO
  //#define PRUSA_AIO_NEOPIXEL_STRIP_COLOR_VIOLET
#endif

//===========================================================================
//============================== Input Shaping ==============================
//===========================================================================

/**
 * Input Shaping -- EXPERIMENTAL
 *
 * Zero Vibration (ZV) Input Shaping for X and/or Y movements.
 *
 * See https://github.com/MarlinFirmware/Marlin/pull/24797 for configuration & full details.
 *
 * Tune with M593 D<factor> F<frequency>:
 *
 *  D<factor>    Set the zeta/damping factor. If axes (X, Y, etc.) are not specified, set for all axes.
 *  F<frequency> Set the frequency. If axes (X, Y, etc.) are not specified, set for all axes.
 *  X<1>         Set the given parameters only for the X axis.
 *  Y<1>         Set the given parameters only for the Y axis.
 */
//#define PRUSA_AIO_INPUT_SHAPING
#if ENABLED(PRUSA_AIO_INPUT_SHAPING)
  #define PRUSA_AIO_SHAPING_FREQ_X            40    // (Hz) The default dominant resonant frequency on the X axis.
  #define PRUSA_AIO_SHAPING_FREQ_Y            40    // (Hz) The default dominant resonant frequency on the Y axis.
  #define PRUSA_AIO_SHAPING_ZETA_X             0.15 // Damping ratio of the X axis (range: 0.0 = no damping to 1.0 = critical damping).
  #define PRUSA_AIO_SHAPING_ZETA_Y             0.15 // Damping ratio of the Y axis (range: 0.0 = no damping to 1.0 = critical damping).
  //#define PRUSA_AIO_SHAPING_MIN_FREQ        20.0  // By default the minimum of the shaping frequencies. Override to affect SRAM usage.
  //#define PRUSA_AIO_SHAPING_MAX_STEPRATE 10000    // By default the maximum total step rate of the shaped axes. Override to affect SRAM usage.
#endif

//===========================================================================
//============================= MK2.5S Support ==============================
//===========================================================================

// Uncomment to enable Prusa MK2.5S support. X & Y endstops are required.
//#define PRUSA_AIO_MK25S_SUPPORT
