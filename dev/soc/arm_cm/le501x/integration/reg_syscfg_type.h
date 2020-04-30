#ifndef REG_SYSCFG_TYPE_H_
#define REG_SYSCFG_TYPE_H_
#include <stdint.h>

typedef struct
{
    volatile uint32_t MRMP;
    volatile uint32_t DCDC;
    volatile uint32_t CRYPT;
    volatile uint32_t RSTST;
    volatile uint32_t CORERST;
    volatile uint32_t RESERVED0[3];
    volatile uint32_t TSTENB;
    volatile uint32_t TSTCFG;
    volatile uint32_t QSPICTL;
    volatile uint32_t RESERVED1[2];
    volatile uint32_t ANACFG0;
    volatile uint32_t ANACFG1;
    volatile uint32_t CFG;
    volatile uint32_t RESERVED2[4];
    volatile uint32_t BKD;
}reg_syscfg_t;

enum SYSCFG_REG_MRMP_FIELD
{
    SYSCFG_REMAP_EN_MASK = 0x1,
    SYSCFG_REMAP_EN_POS = 0,
    SYSCFG_REMAP_MEM_MASK = 0x4,
    SYSCFG_REMAP_MEM_POS = 2,
    SYSCFG_REMAP_MEM_R_MASK = 0x400,
    SYSCFG_REMAP_MEM_R_POS = 10,
};

enum SYSCFG_REG_DCDC_FIELD
{
    SYSCFG_VBG_VCTL_MASK = 0xf,
    SYSCFG_VBG_VCTL_POS = 0,
    SYSCFG_PWM_HYS_CTL_MASK = 0x70,
    SYSCFG_PWM_HYS_CTL_POS = 4,
    SYSCFG_DELAY_MASK = 0x80,
    SYSCFG_DELAY_POS = 7,
    SYSCFG_PWM_FI_MASK = 0x700,
    SYSCFG_PWM_FI_POS = 8,
    SYSCFG_EN_OVC_MASK = 0x800,
    SYSCFG_EN_OVC_POS = 11,
    SYSCFG_PWM_FC_MASK = 0x7000,
    SYSCFG_PWM_FC_POS = 12,
    SYSCFG_RAMP_I_HALF_MASK = 0x8000,
    SYSCFG_RAMP_I_HALF_POS = 15,
    SYSCFG_VCTL_MASK = 0xf0000,
    SYSCFG_VCTL_POS = 16,
    SYSCFG_TESTEN_MASK = 0x800000,
    SYSCFG_TESTEN_POS = 23,
    SYSCFG_OUT_ADJ_MASK = 0x7000000,
    SYSCFG_OUT_ADJ_POS = 24,
    SYSCFG_PSW_ADJ_MASK = 0x18000000,
    SYSCFG_PSW_ADJ_POS = 27,
    SYSCFG_NSW_ADJ_MASK = 0x60000000,
    SYSCFG_NSW_ADJ_POS = 29,
    SYSCFG_EN_MASK = 0x80000000,
    SYSCFG_EN_POS = 31,
};

enum SYSCFG_REG_CRYPT_FIELD
{
    SYSCFG_CRYPT_WORD_MASK = 0xffffffff,
    SYSCFG_CRYPT_WORD_POS = 0,
};

enum SYSCFG_REG_RSTST_FIELD
{
    SYSCFG_POR33_RSTF_MASK = 0x1,
    SYSCFG_POR33_RSTF_POS = 0,
    SYSCFG_BOR33_RSTF_MASK = 0x2,
    SYSCFG_BOR33_RSTF_POS = 1,
    SYSCFG_MRSTN_RSTF_MASK = 0x4,
    SYSCFG_MRSTN_RSTF_POS = 2,
    SYSCFG_IWDT_RSTF_MASK = 0x10,
    SYSCFG_IWDT_RSTF_POS = 4,
    SYSCFG_WWDT_RSTF_MASK = 0x20,
    SYSCFG_WWDT_RSTF_POS = 5,
    SYSCFG_LKRST_RSTF_MASK = 0x40,
    SYSCFG_LKRST_RSTF_POS = 6,
    SYSCFG_LVD33_FLAG_MASK = 0x80,
    SYSCFG_LVD33_FLAG_POS = 7,
};

enum SYSCFG_REG_CORERST_FIELD
{
    SYSCFG_CPU_RST_REQ_MASK = 0x1,
    SYSCFG_CPU_RST_REQ_POS = 0,
    SYSCFG_AIRCR_KEY_MASK = 0xffff0000,
    SYSCFG_AIRCR_KEY_POS = 16,
};

enum SYSCFG_REG_TSTENB_FIELD
{
    SYSCFG_TSTENB_MASK = 0xffffffff,
    SYSCFG_TSTENB_POS = 0,
};

enum SYSCFG_REG_TSTCFG_FIELD
{
    SYSCFG_TSTCFG_MASK = 0xffffffff,
    SYSCFG_TSTCFG_POS = 0,
};

enum SYSCFG_REG_QSPICTL_FIELD
{
    SYSCFG_QSPI_NSS_IE_MASK = 0x1,
    SYSCFG_QSPI_NSS_IE_POS = 0,
    SYSCFG_QSPI_NSS_OE_MASK = 0x2,
    SYSCFG_QSPI_NSS_OE_POS = 1,
    SYSCFG_QSPI_NSS_DO_MASK = 0x4,
    SYSCFG_QSPI_NSS_DO_POS = 2,
    SYSCFG_QSPI_NSS_DI_MASK = 0x8,
    SYSCFG_QSPI_NSS_DI_POS = 3,
    SYSCFG_QSPI_SCK_IE_MASK = 0x10,
    SYSCFG_QSPI_SCK_IE_POS = 4,
    SYSCFG_QSPI_SCK_OE_MASK = 0x20,
    SYSCFG_QSPI_SCK_OE_POS = 5,
    SYSCFG_QSPI_SCK_DO_MASK = 0x40,
    SYSCFG_QSPI_SCK_DO_POS = 6,
    SYSCFG_QSPI_SCK_DI_MASK = 0x80,
    SYSCFG_QSPI_SCK_DI_POS = 7,
    SYSCFG_QSPI_DQ0_IE_MASK = 0x100,
    SYSCFG_QSPI_DQ0_IE_POS = 8,
    SYSCFG_QSPI_DQ0_OE_MASK = 0x200,
    SYSCFG_QSPI_DQ0_OE_POS = 9,
    SYSCFG_QSPI_DQ0_DO_MASK = 0x400,
    SYSCFG_QSPI_DQ0_DO_POS = 10,
    SYSCFG_QSPI_DQ0_DI_MASK = 0x800,
    SYSCFG_QSPI_DQ0_DI_POS = 11,
    SYSCFG_QSPI_DQ1_IE_MASK = 0x1000,
    SYSCFG_QSPI_DQ1_IE_POS = 12,
    SYSCFG_QSPI_DQ1_OE_MASK = 0x2000,
    SYSCFG_QSPI_DQ1_OE_POS = 13,
    SYSCFG_QSPI_DQ1_DO_MASK = 0x4000,
    SYSCFG_QSPI_DQ1_DO_POS = 14,
    SYSCFG_QSPI_DQ1_DI_MASK = 0x8000,
    SYSCFG_QSPI_DQ1_DI_POS = 15,
    SYSCFG_QSPI_DQ2_IE_MASK = 0x10000,
    SYSCFG_QSPI_DQ2_IE_POS = 16,
    SYSCFG_QSPI_DQ2_OE_MASK = 0x20000,
    SYSCFG_QSPI_DQ2_OE_POS = 17,
    SYSCFG_QSPI_DQ2_DO_MASK = 0x40000,
    SYSCFG_QSPI_DQ2_DO_POS = 18,
    SYSCFG_QSPI_DQ2_DI_MASK = 0x80000,
    SYSCFG_QSPI_DQ2_DI_POS = 19,
    SYSCFG_QSPI_DQ3_IE_MASK = 0x100000,
    SYSCFG_QSPI_DQ3_IE_POS = 20,
    SYSCFG_QSPI_DQ3_OE_MASK = 0x200000,
    SYSCFG_QSPI_DQ3_OE_POS = 21,
    SYSCFG_QSPI_DQ3_DO_MASK = 0x400000,
    SYSCFG_QSPI_DQ3_DO_POS = 22,
    SYSCFG_QSPI_DQ3_DI_MASK = 0x800000,
    SYSCFG_QSPI_DQ3_DI_POS = 23,
    SYSCFG_QSPI_CTL_EN_MASK = 0x1000000,
    SYSCFG_QSPI_CTL_EN_POS = 24,
};

enum SYSCFG_REG_ANACFG0_FIELD
{
    SYSCFG_QCLK256M_SEL_MASK = 0x1,
    SYSCFG_QCLK256M_SEL_POS = 0,
    SYSCFG_EN_QCLK_MASK = 0x2,
    SYSCFG_EN_QCLK_POS = 1,
    SYSCFG_EN_DPLL_LOCK_BYPS_MASK = 0x4,
    SYSCFG_EN_DPLL_LOCK_BYPS_POS = 2,
    SYSCFG_EN_DPLL_128M_EXT_MASK = 0x8,
    SYSCFG_EN_DPLL_128M_EXT_POS = 3,
    SYSCFG_EN_DPLL_128M_RF_MASK = 0x10,
    SYSCFG_EN_DPLL_128M_RF_POS = 4,
    SYSCFG_EN_DPLL_16M_RF_MASK = 0x20,
    SYSCFG_EN_DPLL_16M_RF_POS = 5,
    SYSCFG_EN_DPLL_MASK = 0x40,
    SYSCFG_EN_DPLL_POS = 6,
    SYSCFG_ENB_DPLL_64M_EXT_MASK = 0x80,
    SYSCFG_ENB_DPLL_64M_EXT_POS = 7,
    SYSCFG_LVD_EN_MASK = 0x100,
    SYSCFG_LVD_EN_POS = 8,
    SYSCFG_LVD_REF_MASK = 0xe00,
    SYSCFG_LVD_REF_POS = 9,
    SYSCFG_LVD_CTL_MASK = 0x7000,
    SYSCFG_LVD_CTL_POS = 12,
    SYSCFG_LDO_DG_TRIM_MASK = 0x30000,
    SYSCFG_LDO_DG_TRIM_POS = 16,
    SYSCFG_BG_RBIAS_TRIM_MASK = 0x300000,
    SYSCFG_BG_RBIAS_TRIM_POS = 20,
    SYSCFG_BG_VREF_FINE_MASK = 0xc00000,
    SYSCFG_BG_VREF_FINE_POS = 22,
    SYSCFG_BG_RES_TRIM_MASK = 0x3f000000,
    SYSCFG_BG_RES_TRIM_POS = 24,
    SYSCFG_BG_VREF_OK12_MASK = 0x40000000,
    SYSCFG_BG_VREF_OK12_POS = 30,
    SYSCFG_DPLL_LOCK_MASK = 0x80000000,
    SYSCFG_DPLL_LOCK_POS = 31,
};

enum SYSCFG_REG_ANACFG1_FIELD
{
    SYSCFG_RCO_CAL_CODE_MASK = 0xfff,
    SYSCFG_RCO_CAL_CODE_POS = 0,
    SYSCFG_RCO_CAL_DONE_MASK = 0x1000,
    SYSCFG_RCO_CAL_DONE_POS = 12,
    SYSCFG_RCO_MODE_SEL_MASK = 0x2000,
    SYSCFG_RCO_MODE_SEL_POS = 13,
    SYSCFG_RCO_CAL_START_MASK = 0x8000,
    SYSCFG_RCO_CAL_START_POS = 15,
    SYSCFG_EN_RCO_DIG_PWR_MASK = 0x10000,
    SYSCFG_EN_RCO_DIG_PWR_POS = 16,
    SYSCFG_ADC12B_DIG_PWR_EN_MASK = 0x20000,
    SYSCFG_ADC12B_DIG_PWR_EN_POS = 17,
    SYSCFG_OSCRC_DIG_PWR_EN_MASK = 0x40000,
    SYSCFG_OSCRC_DIG_PWR_EN_POS = 18,
    SYSCFG_XO32K_OE_BYPS_MASK = 0x100000,
    SYSCFG_XO32K_OE_BYPS_POS = 20,
    SYSCFG_XO32K_CODE_MASK = 0x200000,
    SYSCFG_XO32K_CODE_POS = 21,
    SYSCFG_XO16M_SEL_MASK = 0x400000,
    SYSCFG_XO16M_SEL_POS = 22,
    SYSCFG_XO16M_LP_MASK = 0x800000,
    SYSCFG_XO16M_LP_POS = 23,
    SYSCFG_XO16M_CAP_TRIM_MASK = 0x3f000000,
    SYSCFG_XO16M_CAP_TRIM_POS = 24,
    SYSCFG_XO16M_ADJ_MASK = 0xc0000000,
    SYSCFG_XO16M_ADJ_POS = 30,
};

enum SYSCFG_REG_CFG_FIELD
{
    SYSCFG_HAI_CAP_MASK = 0x3,
    SYSCFG_HAI_CAP_POS = 0,
    SYSCFG_HAI_CAL_MASK = 0xffc,
    SYSCFG_HAI_CAL_POS = 2,
    SYSCFG_HAI_IBIAS_SEL_MASK = 0x3000,
    SYSCFG_HAI_IBIAS_SEL_POS = 12,
    SYSCFG_HAI_SEL_MASK = 0x4000,
    SYSCFG_HAI_SEL_POS = 14,
    SYSCFG_IWDG_DEBUG_MASK = 0x10000,
    SYSCFG_IWDG_DEBUG_POS = 16,
    SYSCFG_WWDG_DEBUG_MASK = 0x20000,
    SYSCFG_WWDG_DEBUG_POS = 17,
    SYSCFG_CFG_IWDG_EN_MASK = 0x40000,
    SYSCFG_CFG_IWDG_EN_POS = 18,
    SYSCFG_CFG_WWDG_EN_MASK = 0x80000,
    SYSCFG_CFG_WWDG_EN_POS = 19,
    SYSCFG_LVD33_INTE_MASK = 0x100000,
    SYSCFG_LVD33_INTE_POS = 20,
    SYSCFG_SPI1_SS_IN_N_MASK = 0x1000000,
    SYSCFG_SPI1_SS_IN_N_POS = 24,
    SYSCFG_DEEP_SLEEP_STAT_S_MASK = 0x2000000,
    SYSCFG_DEEP_SLEEP_STAT_S_POS = 25,
    SYSCFG_CACHE_MEMTST_MASK = 0x40000000,
    SYSCFG_CACHE_MEMTST_POS = 30,
    SYSCFG_CRYPT_EN_MASK = 0x80000000,
    SYSCFG_CRYPT_EN_POS = 31,
};

enum SYSCFG_REG_BKD_FIELD
{
    SYSCFG_BK_DATA_MASK = 0xffff0000,
    SYSCFG_BK_DATA_POS = 16,
};

#endif
