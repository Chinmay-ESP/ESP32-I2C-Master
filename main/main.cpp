#include "I2C.hpp"

extern "C" void app_main(void) {
    i2c_master_bus_handle_t bus_handle;
    i2c_master_init_bus(&bus_handle);

    xTaskCreate(
        check_address_task, 
        "Scan I2C", 
        4096, 
        (void *) bus_handle, 
        10, 
        &CheckAddressHandle
    );

}
