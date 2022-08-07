<p align="center"><img src="buildroot/share/pixmaps/logo/Prusa_AIO_Black_Bear_Marlin.png" height="300" alt="Prusa Bear" /></p>

<h1 align="center">Prusa All-in-One Marlin Firmware</h1>

<p align="center">
    <a href="/LICENSE"><img alt="GPL-V3.0 License" src="https://img.shields.io/github/license/thisiskeithb/prusaaio.svg"></a>
    <a href="https://github.com/thisiskeithb/PrusaAIO/graphs/contributors"><img alt="Contributors" src="https://img.shields.io/github/contributors/thisiskeithb/prusaaio.svg"></a>
    <a href="https://github.com/thisiskeithb/PrusaAIO/commits/prusa-aio-bugfix-2.1.x"><img alt="Last Commit Date" src="https://img.shields.io/github/last-commit/thisiskeithb/prusaaio/prusa-aio-bugfix-2.1.x"></a>
    <a href="https://github.com/thisiskeithb/PrusaAIO/actions"><img alt="Prusa AIO CI Status" src="https://github.com/thisiskeithb/PrusaAIO/actions/workflows/test-prusa-aio-build.yml/badge.svg"></a>
    <a href="https://github.com/sponsors/thisiskeithb"><img alt="GitHub Sponsors" src="https://img.shields.io/github/sponsors/thisiskeithb?color=db61a2"></a>
    <br />
    <a href="https://twitter.com/thisiskeithb"><img alt="Follow thisiskeithb on Twitter" src="https://img.shields.io/twitter/follow/thisiskeithb?style=social&logo=twitter"></a>
</p>

## About

All-in-One Marlin firmware for your 32-bit Prusa MK3S/+ Bear!

## Supported Hardware Upgrades

In addition to the stock hardware (except the Einsy motherboard), the following upgrades are supported:

- **Motherboards**: BigTreeTech SKR 3.0 & 3.0 EZ, 2.0 with optional flash drive support, 1.4 & 1.4 Turbo, BTT002 1.0, SKR Mini E3 V3, MKS/Makerbase Robin Nano V3 with optional flash drive support, SGEN_L V2, and Robin E3 & E3D V1.x
- **Drivers**: TMC2209s and TMC5160s
- **Displays**: BigTreeTech dual mode TFT (TFT35, TFT50, TFT70, etc.), WINSTAR OLED-based RepRapDiscount smart controller, and Mini 12864 with NeoPixel RGB backlight (BigTreeTech Mini 12864 V1 and MKS Mini 12864 V3)
- **LDO/Moons Stepper Motors**: Planetary extruder and 0.9° X/Y/E
- **Bondtech BMG extruder**: Bondtech BMG upgrade kit and Self-printed BMG
- **5015 Part Cooling Fans**: 24V Mechatronics B5015E24B-BSR, 24V Delta BFB0524HH, 24V SoundOriginal, 5V LDO DF5015H05S
- **High Temperature Thermistors**: Slice Engineering 450°C and Dyze Design 500°C
- **Probes**: BLTouch and SuperPINDA
- NeoPixels

## Configuring Prusa All-in-One Firmware

To configure this firmware, edit [`Prusa_AIO_Configuration.h`](Marlin/Prusa_AIO_Configuration.h)

## Building Prusa All-in-One Firmware

To build this firmware, you'll need [Visual Studio Code](https://code.visualstudio.com/) with [PlatformIO](https://docs.platformio.org/en/latest//integration/ide/vscode.html#ide-vscode). Detailed setup instructions can be found in the [Building Marlin with PlatformIO for ReArm](https://marlinfw.org/docs/basics/install_rearm.html) guide.

## Helpful Links

 - [Prusa AIO Wiki](https://github.com/thisiskeithb/PrusaAIO/wiki/) &mdash; Includes wiring information, recommended motherboard & LCD cases, purchase links for supported hardware, and more!
 - [Prusa AIO Discussions](https://github.com/thisiskeithb/PrusaAIO/discussions)
 - [Prusa Bear Upgrade Facebook group](https://facebook.com/groups/prusabearupgrade/)
 - [Prusa Community Facebook group](https://facebook.com/groups/675831176090951/)

 You can also send me a message on Discord: [💬 thisiskeithb#4707](https://discordapp.com/users/602976310805135370)

## Credits

If you find this project helpful, please consider donating!

 - Keith Bennett [[thisiskeithb](https://github.com/thisiskeithb)], Prusa AIO Creator - [💸 Github Sponsors](https://github.com/sponsors/thisiskeithb) / [☕ Ko-fi](https://ko-fi.com/thisiskeithb)
 - Chris Warkocki, SKR Bear Project
 - Grégoire Saunier [[gregsaun](https://github.com/gregsaun)], Prusa Bear Project - [💸 Patreon](https://patreon.com/gregsaun)
 - Scott Lahteine [[thinkyhead](https://github.com/thinkyhead)], Lead Marlin Developer & Maintainer - [💸 Donate](https://www.thinkyhead.com/donate-to-marlin)

## License

Marlin and the Prusa All-in-One Firmware is published under the [GPL license](/LICENSE) because we believe in open development.