/* generated vector header file - do not edit */
#ifndef VECTOR_DATA_H
#define VECTOR_DATA_H
#ifdef __cplusplus
        extern "C" {
        #endif
/* Number of interrupts allocated */
#ifndef VECTOR_DATA_IRQ_COUNT
#define VECTOR_DATA_IRQ_COUNT    (6)
#endif
/* ISR prototypes */
void tau_tmi_isr(void);
void iica_master_txrxi_isr(void);
void rtc_c_alarm_prd_or_alm_isr(void);
void uarta_eri_isr(void);
void uarta_txi_isr(void);
void uarta_rxi_isr(void);

/* Vector table allocations */
#define VECTOR_NUMBER_TAU0_TMI00 ((IRQn_Type) 19) /* TAU0 TMI00 (End of timer channel 00 count or capture) */
#define TAU0_TMI00_IRQn          ((IRQn_Type) 19) /* TAU0 TMI00 (End of timer channel 00 count or capture) */
#define VECTOR_NUMBER_IICA0_TXRXI ((IRQn_Type) 26) /* IICA0 TXRXI (Communication event) */
#define IICA0_TXRXI_IRQn          ((IRQn_Type) 26) /* IICA0 TXRXI (Communication event) */
#define VECTOR_NUMBER_RTC_ALARM_OR_PERIOD ((IRQn_Type) 32) /* RTC ALARM OR PERIOD (Alarm or Periodic interrupt) */
#define RTC_ALARM_OR_PERIOD_IRQn          ((IRQn_Type) 32) /* RTC ALARM OR PERIOD (Alarm or Periodic interrupt) */
#define VECTOR_NUMBER_UARTA0_ERRI ((IRQn_Type) 39) /* UARTA0 ERRI (Reception error interrupt) */
#define UARTA0_ERRI_IRQn          ((IRQn_Type) 39) /* UARTA0 ERRI (Reception error interrupt) */
#define VECTOR_NUMBER_UARTA0_TXI ((IRQn_Type) 40) /* UARTA0 TXI (Transfer completion interrupt) */
#define UARTA0_TXI_IRQn          ((IRQn_Type) 40) /* UARTA0 TXI (Transfer completion interrupt) */
#define VECTOR_NUMBER_UARTA0_RXI ((IRQn_Type) 41) /* UARTA0 RXI (Reception transfer end) */
#define UARTA0_RXI_IRQn          ((IRQn_Type) 41) /* UARTA0 RXI (Reception transfer end) */
#ifdef __cplusplus
        }
        #endif
#endif /* VECTOR_DATA_H */
