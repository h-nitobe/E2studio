/* generated configuration header file - do not edit */
#ifndef BSP_PIN_CFG_H_
#define BSP_PIN_CFG_H_
#include "r_ioport.h"

/* Common macro for FSP header files. There is also a corresponding FSP_FOOTER macro at the end of this file. */
FSP_HEADER

#define LED1 (BSP_IO_PORT_00_PIN_08) /* GREEN_ARDUINO_A4 */
#define LED2 (BSP_IO_PORT_00_PIN_09) /* GREEN_PMOD1_CS3_GPIO10_ARDUINO_A3 */
#define ARDUINO_AREF (BSP_IO_PORT_00_PIN_10)
#define ARDUINO_A5 (BSP_IO_PORT_00_PIN_11)
#define PMOD1_CS2_GPIO9_ARDUINO_A2 (BSP_IO_PORT_00_PIN_12)
#define PMOD1_RESET_ARDUINO_A1 (BSP_IO_PORT_00_PIN_13)
#define PMOD2_GPIO8_ARDUINO_A0 (BSP_IO_PORT_00_PIN_14)
#define PMOD2_INT (BSP_IO_PORT_00_PIN_15)
#define PMOD1_MISO_RXD_ARDUINO_D4 (BSP_IO_PORT_01_PIN_00)
#define PMOD1_MOSI_TXD_ARDUINO_D5 (BSP_IO_PORT_01_PIN_01)
#define PMOD1_SCK_RTS_ARDUINO_D6 (BSP_IO_PORT_01_PIN_02)
#define PMOD1_CS_CTS_ARDUINO_D7 (BSP_IO_PORT_01_PIN_03)
#define PMOD2_RESET_ARDUINO_D8 (BSP_IO_PORT_01_PIN_09)
#define PMOD2_SDA_ARDUINO_D9 (BSP_IO_PORT_01_PIN_10)
#define PMOD2_SCL_ARDUINO_D10 (BSP_IO_PORT_01_PIN_12)
#define SW (BSP_IO_PORT_02_PIN_00) /* ARDUINO_D2 */
#define PMOD1_INT_ARDUINO_D3 (BSP_IO_PORT_02_PIN_01)
#define RES (BSP_IO_PORT_02_PIN_06) /* ARDUINO_RESET */
#define ARDUINO_RX (BSP_IO_PORT_02_PIN_07)
#define ARDUINO_TX (BSP_IO_PORT_02_PIN_08)
#define ARDUINO_MISO (BSP_IO_PORT_02_PIN_12)
#define ARDUINO_MOSI (BSP_IO_PORT_02_PIN_13)
#define ARDUINO_SCK (BSP_IO_PORT_04_PIN_07) /* PMOD2_GPIO7 */
#define PMOD2_GPIO10_ARDUINO_SDA (BSP_IO_PORT_09_PIN_13)
#define PMOD2_GPIO9_ARDUINO_SCL (BSP_IO_PORT_09_PIN_14)
extern const ioport_cfg_t g_bsp_pin_cfg; /* FPB-RA0E1 */

void BSP_PinConfigSecurityInit();

/* Common macro for FSP header files. There is also a corresponding FSP_HEADER macro at the top of this file. */
FSP_FOOTER
#endif /* BSP_PIN_CFG_H_ */
