/**
 * @file    i2c_detect.h
 * @author  Ferenc Nemeth
 * @date    6 Oct 2018
 * @brief   This file contains the functions to detect and print the I2C devices.
 *
 *          Copyright (c) 2018 Ferenc Nemeth - https://github.com/ferenc-nemeth
 */

#ifndef I2C_DETECT_H_
#define I2C_DETECT_H_

#include "stm32l4xx_hal.h"

void i2c_detect(void);
int _write(int file, char *data, int len);

#endif /* I2C_DETECT_H_ */
