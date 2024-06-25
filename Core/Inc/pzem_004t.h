/*
 * pzem_004t.h
 *
 *  Created on: Jun 20, 2024
 *      Author: rafael
 */

#ifndef INC_PZEM_004T_H_
#define INC_PZEM_004T_H_

#include <stdint.h>
#include <string.h>
#include "stm32f4xx_hal.h"
#include "main.h"




#define default_addr		0xF8

/*
 * error_check map
 * 0x01= no communication
 */
typedef struct
{
	uint32_t 	voltage;
	uint32_t 	current;
	uint32_t	power;
	uint32_t	energy;
	uint32_t	frequency;
	uint32_t 	power_factor;
	uint32_t 	alarm_status;

	uint8_t 	error_check;

} energyValues_t;


//FUNCTIONS -----------------------------------

void pzem_init(UART_HandleTypeDef Uart_typedef);
uint16_t CRC_16(const unsigned char *data, unsigned int len);
energyValues_t read_PZEM();
void reset_PZEM();
void CRC_TESTE();
//--------------------------------------------

#endif /* INC_PZEM_004T_H_ */
