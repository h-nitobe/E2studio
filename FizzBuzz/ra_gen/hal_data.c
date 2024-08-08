/* generated HAL source file - do not edit */
#include "hal_data.h"
rtc_c_instance_ctrl_t g_rtc0_ctrl;

/** RTC_C extended configuration */
const rtc_c_extended_cfg g_rtc0_cfg_extend =
{ .clock_source_div = RTC_CLOCK_SOURCE_SUBCLOCK_DIV_BY_1, };

const rtc_cfg_t g_rtc0_cfg =
{ .p_err_cfg = NULL, .p_callback = RtcCallback, .p_context = NULL, .periodic_ipl = (1), .alarm_irq = FSP_INVALID_VECTOR,
#if defined(VECTOR_NUMBER_RTC_ALARM_OR_PERIOD)
    .periodic_irq            = VECTOR_NUMBER_RTC_ALARM_OR_PERIOD,
#else
  .periodic_irq = FSP_INVALID_VECTOR,
#endif
  .p_extend = &g_rtc0_cfg_extend, };
/* Instance structure to use this module. */
const rtc_instance_t g_rtc0 =
{ .p_ctrl = &g_rtc0_ctrl, .p_cfg = &g_rtc0_cfg, .p_api = &g_rtc_on_rtc_c };
iica_master_instance_ctrl_t g_iica_master0_ctrl;
const iica_master_extended_cfg_t g_iica_master0_extend =
{ .clock_settings.comm_rez = IICA_MASTER_COMM_REZ_DISABLED,
  .clock_settings.digital_filter = 0,
  /* Actual calculated bitrate: 99379. IICWH0 duty cycle: 53. IICWL0 duty cycle: 47. */.clock_settings.iicwl_value = 76,
  .clock_settings.iicwh_value = 85,
  .clock_settings.cks_value = 1,
  .sda_pin_settings.pin = BSP_IO_PORT_09_PIN_13,
  .sda_pin_settings.cfg = (uint32_t) (IOPORT_PERIPHERAL_IICA1),
  .scl_pin_settings.pin = BSP_IO_PORT_09_PIN_14,
  .scl_pin_settings.cfg = (uint32_t) (IOPORT_PERIPHERAL_IICA1), };
const i2c_master_cfg_t g_iica_master0_cfg =
{ .channel = 0, .rate = I2C_MASTER_RATE_STANDARD, .slave = 0x27, .addr_mode = I2C_MASTER_ADDR_MODE_7BIT, .p_callback =
          IicaCallback,
  .p_context = NULL,
#if defined(VECTOR_NUMBER_IICA0_TXRXI)
    .tei_irq             = VECTOR_NUMBER_IICA0_TXRXI,
#else
  .tei_irq = FSP_INVALID_VECTOR,
#endif
  .ipl = (2),
  .p_extend = &g_iica_master0_extend, };
/* Instance structure to use this module. */
const i2c_master_instance_t g_iica_master0 =
{ .p_ctrl = &g_iica_master0_ctrl, .p_cfg = &g_iica_master0_cfg, .p_api = &g_iica_master_on_iica };
tau_instance_ctrl_t g_timer0_ctrl;
const tau_extended_cfg_t g_timer0_extend =
{ .opirq = TAU_INTERRUPT_OPIRQ_BIT_RESET,
  .tau_func = TAU_FUNCTION_INTERVAL,
  .bit_mode = TAU_BIT_MODE_16BIT,
  .initial_output = TAU_PIN_OUTPUT_CFG_DISABLED,
  .input_source = TAU_INPUT_SOURCE_NONE,
  .tau_filter = TAU_INPUT_NOISE_FILTER_DISABLE,
  .trigger_edge = TAU_TRIGGER_EDGE_RISING,
  .operation_clock = TAU_OPERATION_CK00,
  /* Not used for 16-bit or lower 8-bit mode */
  .period_higher_8bit_counts = (uint16_t) 0x100,
  .higher_8bit_cycle_end_ipl = (BSP_IRQ_DISABLED),
#if defined(VECTOR_NUMBER_TAU0_TMI00H)
    .higher_8bit_cycle_end_irq       = VECTOR_NUMBER_TAU0_TMI00H,
#else
  .higher_8bit_cycle_end_irq = FSP_INVALID_VECTOR,
#endif
        };
const timer_cfg_t g_timer0_cfg =
{ .mode = (timer_mode_t) 0,
  /* Actual Period: 0.0010080000 seconds. */
  /* Minimum Period ~ Maximum Period: 0.0000160000 ~ 1.04857600 seconds. */.period_counts = (uint32_t) 0x3f,
  .duty_cycle_counts = 0,
  .source_div = (timer_source_div_t) BSP_CFG_TAU_CK00,
  .channel = 0,
  .p_callback = TimerCallback,
  /** If NULL then do not add & */
#if defined(NULL)
    .p_context           = NULL,
#else
  .p_context = &NULL,
#endif
  .p_extend = &g_timer0_extend,
  .cycle_end_ipl = (3),
#if defined(VECTOR_NUMBER_TAU0_TMI00)
    .cycle_end_irq       = VECTOR_NUMBER_TAU0_TMI00,
#else
  .cycle_end_irq = FSP_INVALID_VECTOR,
#endif
        };
/* Instance structure to use this module. */
const timer_instance_t g_timer0 =
{ .p_ctrl = &g_timer0_ctrl, .p_cfg = &g_timer0_cfg, .p_api = &g_timer_on_tau };
uarta_instance_ctrl_t g_uart0_ctrl;

uarta_baud_setting_t g_uart0_baud_setting =
{
#if (BSP_CFG_UARTA_CLOCK_SOURCE == BSP_CLOCKS_SOURCE_CLOCK_MAIN_OSC)

  /* Baud rate calculated with Acutal_Error 0.22%. */
  /* The permissible baud rate error range during reception: -4.71% ~ 5.20% */
  .uta0ck_clock_b.utasel = UARTA_CLOCK_SOURCE_MOSC,
  .uta0ck_clock_b.uta0ck = UARTA_CLOCK_DIV_1, .brgca = 87
#elif (BSP_CFG_UARTA_CLOCK_SOURCE == BSP_CLOCKS_SOURCE_CLOCK_HOCO)

/* Baud rate calculated with Acutal_Error 0.08%. */
/* The permissible baud rate error range during reception: -4.73% ~ 5.22% */
  .uta0ck_clock_b.utasel = UARTA_CLOCK_SOURCE_HOCO
, .uta0ck_clock_b.uta0ck = UARTA_CLOCK_DIV_1
, .brgca = 139
 #elif (BSP_CFG_UARTA_CLOCK_SOURCE == BSP_CLOCKS_SOURCE_CLOCK_MOCO)

/* Baud rate calculated with Acutal_Error 2.12%. */ 
/* The permissible baud rate error range during reception: -4.49% ~ 4.94% */
  .uta0ck_clock_b.utasel = UARTA_CLOCK_SOURCE_MOCO
, .uta0ck_clock_b.uta0ck = UARTA_CLOCK_DIV_1
, .brgca = 17
 #elif (BSP_CFG_UARTA_CLOCK_SOURCE == BSP_CLOCKS_SOURCE_CLOCK_FSXP)

/* Baud rate calculated with Acutal_Error 100%. */
/* The permissible baud rate error range during reception: Invalid Range Error */
  .uta0ck_clock_b.utasel = 0
, .uta0ck_clock_b.uta0ck = 0
, .brgca = 0
 #endif
        };

/** UART extended configuration for UART on UARTA HAL driver */
const uarta_extended_cfg_t g_uart0_cfg_extend =
{ .rxi_mode = UARTA_RXI_MODE_ERROR_TRIGGER_ERI, .transfer_dir = UARTA_DIR_BIT_LSB_FIRST, .transfer_level =
          UARTA_ALV_BIT_POSITIVE_LOGIC,
  .p_baud_setting = &g_uart0_baud_setting, };

/** UART interface configuration */
const uart_cfg_t g_uart0_cfg =
{ .channel = 0, .data_bits = UART_DATA_BITS_8, .parity = UART_PARITY_OFF, .stop_bits = UART_STOP_BITS_1, .p_callback =
          UartaCallback,
  .p_context = NULL, .p_extend = &g_uart0_cfg_extend,
#define RA_NOT_DEFINED (1)
#if (RA_NOT_DEFINED == RA_NOT_DEFINED)
  .p_transfer_tx = NULL,
#else
                .p_transfer_tx       = &RA_NOT_DEFINED,
#endif
#if (RA_NOT_DEFINED == RA_NOT_DEFINED)
  .p_transfer_rx = NULL,
#else
                .p_transfer_rx       = &RA_NOT_DEFINED,
#endif
#undef RA_NOT_DEFINED
  .rxi_ipl = (2),
  .txi_ipl = (2), .eri_ipl = (2),
#if defined(VECTOR_NUMBER_UARTA0_RXI)
                .rxi_irq             = VECTOR_NUMBER_UARTA0_RXI,
#else
  .rxi_irq = FSP_INVALID_VECTOR,
#endif
#if defined(VECTOR_NUMBER_UARTA0_TXI)
                .txi_irq             = VECTOR_NUMBER_UARTA0_TXI,
#else
  .txi_irq = FSP_INVALID_VECTOR,
#endif
#if defined(VECTOR_NUMBER_UARTA0_ERRI)
                .eri_irq             = VECTOR_NUMBER_UARTA0_ERRI,
#else
  .eri_irq = FSP_INVALID_VECTOR,
#endif
        };

/* Instance structure to use this module. */
const uart_instance_t g_uart0 =
{ .p_ctrl = &g_uart0_ctrl, .p_cfg = &g_uart0_cfg, .p_api = &g_uart_on_uarta };
void g_hal_init(void)
{
    g_common_init ();
}
