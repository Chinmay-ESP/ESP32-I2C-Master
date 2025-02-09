#ifndef I2C_HPP
#define I2C_HPP

#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/i2c_master.h"
#include "esp_log.h"
#include "sdkconfig.h"

#define I2C_MASTER_TIMEOUT_MS 1000

extern TaskHandle_t CheckAddressHandle;  // Declare as extern

// Function for initializing I2C bus
void i2c_master_init_bus(i2c_master_bus_handle_t *bus_handle);

// Function for initializing I2C handle
void i2c_master_init_handle(i2c_master_bus_handle_t bus_handle, i2c_master_dev_handle_t *dev_handle, uint8_t address);

// Address scanning function
void check_address_task(void *arg);

#endif
