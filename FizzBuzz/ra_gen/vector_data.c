/* generated vector source file - do not edit */
#include "bsp_api.h"
/* Do not build these data structures if no interrupts are currently allocated because IAR will have build errors. */
#if VECTOR_DATA_IRQ_COUNT > 0
        BSP_DONT_REMOVE const fsp_vector_t g_vector_table[BSP_ICU_VECTOR_MAX_ENTRIES] BSP_PLACE_IN_SECTION(BSP_SECTION_APPLICATION_VECTORS) =
        {
                        [19] = tau_tmi_isr, /* TAU0 TMI00 (End of timer channel 00 count or capture) */
            [26] = iica_master_txrxi_isr, /* IICA0 TXRXI (Communication event) */
            [32] = rtc_c_alarm_prd_or_alm_isr, /* RTC ALARM OR PERIOD (Alarm or Periodic interrupt) */
            [39] = uarta_eri_isr, /* UARTA0 ERRI (Reception error interrupt) */
            [40] = uarta_txi_isr, /* UARTA0 TXI (Transfer completion interrupt) */
            [41] = uarta_rxi_isr, /* UARTA0 RXI (Reception transfer end) */
        };
        #if BSP_FEATURE_ICU_HAS_IELSR
        const bsp_interrupt_event_t g_interrupt_event_link_select[BSP_ICU_VECTOR_MAX_ENTRIES] =
        {
            [19] = BSP_PRV_VECT_ENUM(EVENT_TAU0_TMI00,GROUP3), /* TAU0 TMI00 (End of timer channel 00 count or capture) */
            [26] = BSP_PRV_VECT_ENUM(EVENT_IICA0_TXRXI,GROUP2), /* IICA0 TXRXI (Communication event) */
            [32] = BSP_PRV_VECT_ENUM(EVENT_RTC_ALARM_OR_PERIOD,FIXED), /* RTC ALARM OR PERIOD (Alarm or Periodic interrupt) */
            [39] = BSP_PRV_VECT_ENUM(EVENT_UARTA0_ERRI,FIXED), /* UARTA0 ERRI (Reception error interrupt) */
            [40] = BSP_PRV_VECT_ENUM(EVENT_UARTA0_TXI,FIXED), /* UARTA0 TXI (Transfer completion interrupt) */
            [41] = BSP_PRV_VECT_ENUM(EVENT_UARTA0_RXI,FIXED), /* UARTA0 RXI (Reception transfer end) */
        };
        #endif
        #endif
