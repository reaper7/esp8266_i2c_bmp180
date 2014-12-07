#ifndef __I2C_BMP180_H
#define	__I2C_BMP180_H

#include "c_types.h"
#include "ets_sys.h"
#include "osapi.h"

#define BMP180_ADDRESS   0xee 
#define CONVERSION_TIME 5
#define CTRL_REG_ADD 0xf4
#define DATA_REG 0xf6

#define BMP_CMD_MEASURE_TEMP       (0x2E) // Max conversion time 4.5ms
#define BMP_CMD_MEASURE_PRESSURE_0 (0x34) // Max conversion time 4.5ms (OSS = 0)
//#define BMP_CMD_MEASURE_PRESSURE_1 (0x74) // Max conversion time 7.5ms (OSS = 1)
//#define BMP_CMD_MEASURE_PRESSURE_2 (0xB4) // Max conversion time 13.5ms (OSS = 2)
//#define BMP_CMD_MEASURE_PRESSURE_3 (0xF4) // Max conversion time 25.5ms (OSS = 3)

#define MYALTITUDE  153.0

enum {
    GET_TEMPERATURE = 0,
    GET_REAL_PRESSURE,
    GET_RELATIVE_PRESSURE
};

uint32_t BMP180_GetVal(uint8_t mode);
void BMP180_Init(void);

#endif
