# I2C Address Read for I2C Devices (ESP32-IDF)

## Overview
This project is designed to scan and detect I2C devices connected to an ESP32 microcontroller. It initializes the I2C bus, scans for available I2C addresses, and displays the detected device addresses in the terminal. This is useful for debugging and verifying connections in I2C-based embedded systems.

## Features
- **ESP32 I2C Bus Initialization**: Configures GPIO21 (SDA) and GPIO22 (SCL) for I2C communication.
- **Device Detection**: Scans for I2C devices on the bus and prints their addresses.
- **FreeRTOS Task Implementation**: Uses FreeRTOS to continuously scan and detect devices asynchronously.
- **ESP-IDF Integration**: Fully compatible with ESP-IDF framework.

## Hardware Requirements
- ESP32 Development Board
- I2C-based Sensors or Modules (e.g., OLED Display, I2C Device etc.)
- Jumper Wires for Connections

## Software Requirements
- ESP-IDF (>= v5.2)
- VS Code or Terminal for Development
- Python 3.x (for ESP-IDF setup)

## Setup & Installation
### 1. Clone the Repository
```sh
git clone https://github.com/Chinmay-ESP/ESP32-I2C-Master.git
cd ESP32-I2C-Master
```

### 2. Set Up ESP-IDF
Follow the [ESP-IDF Getting Started Guide](https://docs.espressif.com/projects/esp-idf/en/latest/esp32/get-started/) to set up your ESP32 development environment.

### 3. Build & Flash the Project
```sh
idf.py set-target esp32
idf.py build
idf.py flash -p /dev/ttyUSB0 -b 115200
```

### 4. Monitor Serial Output
```sh
idf.py monitor
```

## Usage
1. Connect your I2C devices to the ESP32:
   - **SDA**: GPIO 21
   - **SCL**: GPIO 22
2. Flash the firmware to your ESP32.
3. Open the serial monitor to view detected I2C addresses.
4. The output should display detected device addresses like:
   ```sh
   I2C Scanner found I2C device at: 0x3C
   I2C Scanner found I2C device at: 0x68
   I2C_Scanner complete
   ```
