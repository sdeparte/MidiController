# MidiController

## Prérequis
### Hardware
- Un [Arduino UNO](https://www.amazon.fr/Arduino-A000066-M%C3%A9moire-flash-32/dp/B008GRTSV6)
- Un [TinyISP](https://www.amazon.fr/TECNOIOT-usbtinyisp-Programmer-atmega328-Programming/dp/B07LH4GMS3)

### Software
- [Arduino IDE](https://www.arduino.cc/en/software)
- [WinAVR](http://winavr.sourceforge.net/)

## Téléverser le sketch
### Avant avoir flasher le Arduino 
- `Croquis` > `Téléverser`

### Après avoir flasher le Arduino
- `Outils` > `Programmateur` : selectionnez `USBTinyISP`
- `Croquis` > `Téléverser avec un programmateur`

## Flash du firmware
### Firmware Hiduino
```
avrdude -c usbtiny -p at90usb82 -F -U flash:w:arduino_midi.hex \ -U lfuse:w:0xFF:m -U hfuse:w:0xD9:m -U efuse:w:0xF4:m -U lock:w:0x0F:m
```

### Firmware de base
```
avrdude -c usbtiny -p at90usb82 -F -U flash:w:usbserial_uno_16u2.hex \ -U lfuse:w:0xFF:m -U hfuse:w:0xD9:m -U efuse:w:0xF4:m -U lock:w:0x0F:m
```