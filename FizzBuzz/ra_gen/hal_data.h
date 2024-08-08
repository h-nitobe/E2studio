/* generated HAL header file - do not edit */
#ifndef HAL_DATA_H_
#define HAL_DATA_H_
#include <stdint.h>
#include "bsp_api.h"
#include "common_data.h"
#include "r_rtc_c.h"
#include "r_rtc_api.h"
#include "r_iica_master.h"
#include "r_i2c_master_api.h"
#include "r_tau.h"
#include "r_timer_api.h"
#include "r_uarta.h"
#include "r_uart_api.h"
FSP_HEADER
/* RTC Instance. */
extern const rtc_instance_t g_rtc0;

/** Access the RTC instance using these structures when calling API functions directly (::p_api is not used). */
extern rtc_c_instance_ctrl_t g_rtc0_ctrl;
extern const rtc_cfg_t g_rtc0_cfg;
extern const rtc_c_extended_cfg g_rtc0_cfg_extend;

#ifndef RtcCallback
void RtcCallback(rtc_callback_args_t *p_args);
#endif
/* IICA Master on IICA Instance. */
extern const i2c_master_instance_t g_iica_master0;

/** Access the IICA Master instance using these structures when calling API functions directly (::p_api is not used). */
extern iica_master_instance_ctrl_t g_iica_master0_ctrl;
extern const i2c_master_cfg_t g_iica_master0_cfg;

#ifndef IicaCallback
void IicaCallback(i2c_master_callback_args_t *p_args);
#endif
/** TAU Timer Instance */
extern const timer_instance_t g_timer0;

/** Access the TAU instance using these structures when calling API functions directly (::p_api is not used). */
extern tau_instance_ctrl_t g_timer0_ctrl;
extern const timer_cfg_t g_timer0_cfg;

#ifndef TimerCallback
void TimerCallback(timer_callback_args_t *p_args);
#endif
/** UART on UARTA Instance. */
extern const uart_instance_t g_uart0;

/** Access the UARTA instance using these structures when calling API functions directly (::p_api is not used). */
extern uarta_instance_ctrl_t g_uart0_ctrl;
extern const uart_cfg_t g_uart0_cfg;
extern const uarta_extended_cfg_t g_uart0_cfg_extend;

#ifndef UartaCallback
void UartaCallback(uart_callback_args_t *p_args);
#endif
void hal_entry(void);
void g_hal_init(void);
FSP_FOOTER
#endif /* HAL_DATA_H_ */
