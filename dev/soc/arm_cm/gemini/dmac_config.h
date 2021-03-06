#ifndef DMAC_CONFIG_H_
#define DMAC_CONFIG_H_

#define DMAC1_MAX_CHANNEL_NUM 8

typedef enum
{
    CH_I2C1_RX = 0,
    CH_I2C1_TX = 1,
    CH_I2C2_RX = 2,
    CH_I2C2_TX = 3,
    CH_I2C3_RX = 4,
    CH_I2C3_TX = 5,
    CH_UART1_RX = 6,
    CH_UART1_TX = 7,
    CH_UART2_RX = 8,
    CH_UART2_TX = 9,
    CH_UART3_RX = 10,
    CH_UART3_TX = 11,
    CH_UART4_RX = 12,
    CH_UART4_TX = 13,
    CH_UART5_RX = 14,
    CH_ADC1 = 15,
    CH_SPI1_RX = 16,
    CH_SPI1_TX = 17,
    CH_SPI2_RX = 18,
    CH_SPI2_TX = 19,
    CH_SPI3_RX = 20,
    CH_SPI3_TX = 21,
    CH_ADC0 = 22,
    CH_PDMCH0_RX = 23,
    CH_PDMCH1_RX = 24,
    CH_DAC_CH1 = 25,
    CH_DAC_CH2 = 26,
    CH_QSPI_TX = 27,
    CH_QSPI_RX = 28,
    CH_CRYPT_WR = 29,
    CH_CRYPT_RD = 30,
    CH_ECC = 31,
    CH_LSGPTIMA1_CH0 = 32,
    CH_LSGPTIMA1_CH1 = 33,
    CH_LSGPTIMA1_CH2 = 34,
    CH_LSGPTIMA1_CH3 = 35,
    CH_LSGPTIMA1_CH4 = 36,
    CH_LSGPTIMA1_CH5 = 37,
    CH_LSGPTIMB1_CH0 = 38,
    CH_LSGPTIMB1_CH1 = 39,
    CH_LSGPTIMB1_CH2 = 40,
    CH_LSGPTIMB1_CH3 = 41,
    CH_LSGPTIMB1_CH4 = 42,
    CH_LSGPTIMB1_CH5 = 43,
    CH_LSGPTIMC1_CH0 = 44,
    CH_LSGPTIMC1_CH1 = 45,
    CH_LSGPTIMC1_CH2 = 46,
    CH_LSGPTIMC1_CH3 = 47,
    CH_LSGPTIMC1_CH4 = 48,
    CH_BSTIM1 = 49,
    CH_LSADTIM1_CH0 = 50,
    CH_LSADTIM1_CH1 = 51,
    CH_LSADTIM1_CH2 = 52,
    CH_LSADTIM1_CH3 = 53,
    CH_LSADTIM1_CH4 = 54,
    CH_LSADTIM1_CH5 = 55,
    CH_LSADTIM1_CH6 = 56,
    CH_LSADTIM2_CH0 = 57,
    CH_LSADTIM2_CH1 = 58,
    CH_LSADTIM2_CH2 = 59,
    CH_LSADTIM2_CH3 = 60,
    CH_LSADTIM2_CH4 = 61,
    CH_LSADTIM2_CH5 = 62,
    CH_LSADTIM2_CH6 = 63,
} DMA_ChnSig_TypeDef;

#endif
