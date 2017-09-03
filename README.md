# Play with M5Stack in [esp-idf](https://github.com/espressif/esp-idf)

## Introduction

This is a demo of using [M5Stack](https://github.com/m5stack/M5Stack) library with esp-idf. It doesn't need Arduino IDE.

## Installation

Please refer to [arduino-esp32](https://github.com/espressif/arduino-esp32) for instructions.

In order to compile, please add the following line to *components/arduino/component.mk*:

```makefile
ARDUINO_CORE_LIBS += $(patsubst $(COMPONENT_PATH)/%,%,$(sort $(dir $(wildcard $(COMPONENT_PATH)/libraries/*/*/))))
```
