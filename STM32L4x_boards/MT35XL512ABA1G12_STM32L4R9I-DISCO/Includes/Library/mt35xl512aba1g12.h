//
// Definitions for programming/erasing Micron MT35XL512ABA1G12 NOR FLASH
//
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MT35XL512ABA1G12_H
#define __MT35XL512ABA1G12_H

#ifdef __cplusplus
 extern "C" {
#endif 

// Sizes
#define MT35XL512ABA1G12_FLASH_SIZE     0x4000000 /* 512 MBits => 64 MBytes */
#define MT35XL512ABA1G12_BLOCK_SIZE     0x20000   /* 512 blocks of 128 KBytes */
#define MT35XL512ABA1G12_SECTOR_SIZE    0x1000    /* 16384 sectors of 4 kBytes */
#define MT35XL512ABA1G12_PAGE_SIZE      0x100     /* 262144 pages of 256 bytes */

// Timing in ms
#define MT35XL512ABA1G12_CHIP_ERASE_MAX_TIME          400000
#define MT35XL512ABA1G12_BLOCK_ERASE_MAX_TIME         1000
#define MT35XL512ABA1G12_WRITE_REG_MAX_TIME           1000

// Dummy cycles
// TODO: verify these from datasheet
#define MT35XL512ABA1G12_DUMMY_CYCLES_READ_OCTAL        16
#define MT35XL512ABA1G12_DUMMY_CYCLES_READ_REG_OCTAL    8

// OCTOSPI cmds
/* Read Operations */
#define READ_CMD                                  0x03
#define READ_4_BYTE_ADDR_CMD                      0x13

#define FAST_READ_CMD                             0x0B
#define FAST_READ_4_BYTE_ADDR_CMD                 0x0C

#define OCTAL_IO_READ_CMD                         0xCB34
#define OCTAL_IO_DTR_READ_CMD                     0xFD02

/* Program Operations */
#define PAGE_PROG_CMD                             0x02
#define PAGE_PROG_4_BYTE_ADDR_CMD                 0x12

#define OCTAL_PAGE_PROG_CMD                       0x12ED

/* Erase Operations */
#define SECTOR_ERASE_CMD                          0x20
#define SECTOR_ERASE_4_BYTE_ADDR_CMD              0x21

#define OCTAL_SECTOR_ERASE_CMD                    0x21DE

#define BLOCK_ERASE_CMD                           0xD8
#define BLOCK_ERASE_4_BYTE_ADDR_CMD               0xDC

#define OCTAL_BLOCK_ERASE_CMD                     0xDC23

#define CHIP_ERASE_CMD                            0x60
#define CHIP_ERASE_CMD_2                          0xC7

#define OCTAL_CHIP_ERASE_CMD                      0x609F
#define OCTAL_CHIP_ERASE_CMD_2                    0xC738

#define PROG_ERASE_RESUME_CMD                     0x7A
#define PROG_ERASE_SUSPEND_CMD                    0x75

#define OCTAL_PROG_ERASE_RESUME_CMD               0x7A85
#define OCTAL_PROG_ERASE_SUSPEND_CMD              0x758A

/* Identification Operations */
#define READ_ID_CMD                               0x9F
#define READ_SERIAL_FLASH_DISCO_PARAM_CMD         0x5A

#define OCTAL_READ_ID_CMD                         0x9F60
#define OCTAL_READ_SERIAL_FLASH_DISCO_PARAM_CMD   0x5AA5  

/* Write Operations */
#define WRITE_ENABLE_CMD                          0x06
#define WRITE_DISABLE_CMD                         0x04

#define OCTAL_WRITE_ENABLE_CMD                    0x06F9
#define OCTAL_WRITE_DISABLE_CMD                   0x04FB

/* Register Operations */
#define READ_STATUS_REG_CMD                       0x05
//#define READ_CFG_REG_CMD                          0x15
//#define WRITE_STATUS_CFG_REG_CMD                  0x01

#define OCTAL_READ_STATUS_REG_CMD                 0x05FA
//#define OCTAL_READ_CFG_REG_CMD                    0x15EA
//#define OCTAL_WRITE_STATUS_CFG_REG_CMD            0x01FE

//#define READ_CFG_REG_2_CMD                        0x71
//#define WRITE_CFG_REG_2_CMD                       0x72

#define READ_VOLATILE_CFG_REG_CMD                  0x85
#define WRITE_VOLATILE_CFG_REG_CMD                 0x81

#define OCTAL_READ_VOLATILE_CFG_REG_CMD            0x857A
#define OCTAL_WRITE_VOLATILE_CFG_REG_CMD           0x817E

// Volatile config registers
#define DUMMY_CYCLE_CONFIG_REG_ADDR             0x01
#define IO_MODE_REG_ADDR                        0x00

// IO Mode
#define OCTAL_DDR_MODE                          0xE7
#define OCTAL_DDR_NO_DQS_MODE                   0xC7
#define EXTENDED_SPI_MODE                       0xFF
   
#define READ_FLAG_STATUS_REG_CMD                    0x70

#define OCTAL_READ_FLAG_STATUS_REG_CMD              0x708F


/* Power Down Operations */
#define DEEP_POWER_DOWN_CMD                       0xB9
#define RELEASE_DEEP_POWER_DOWN_CMD               0xAB

#define OCTAL_ENTER_DEEP_POWER_DOWN_CMD           0xB946

///* Burst Operations */
//#define SET_BURST_LENGTH_CMD                      0xC0
//
//#define OCTAL_SET_BURST_LENGTH_CMD                0xC03F

///* One-Time Programmable Operations */
//#define ENTER_SECURED_OTP_CMD                     0xB1
//#define EXIT_SECURED_OTP_CMD                      0xC1
//
//#define OCTAL_ENTER_SECURED_OTP_CMD               0xB14E
//#define OCTAL_EXIT_SECURED_OTP_CMD                0xC13E

/* No Operation */
#define NO_OPERATION_CMD                          0x00

#define OCTAL_NO_OPERATION_CMD                    0x00FF

/* Reset Operations */
#define RESET_ENABLE_CMD                          0x66
#define RESET_MEMORY_CMD                          0x99

#define OCTAL_RESET_ENABLE_CMD                    0x6699
#define OCTAL_RESET_MEMORY_CMD                    0x9966

/* Protection Operations */
//#define WRITE_PROTECT_SEL_CMD                     0x68

//#define OCTAL_WRITE_PROTECT_SEL_CMD               0x6897

//#define GANG_BLOCK_LOCK_CMD                       0x7E
//#define GANG_BLOCK_UNLOCK_CMD                     0x98
//
//#define OCTAL_GANG_BLOCK_LOCK_CMD                 0x7E81
//#define OCTAL_GANG_BLOCK_UNLOCK_CMD               0x9867

   
/* Status Register */
#define MT35XL512ABA1G12_SR_WIP                       ((uint8_t)0x01)        /*!< Write in progress */
#define MT35XL512ABA1G12_SR_WEL                       ((uint8_t)0x02)        /*!< Write enable latch */

/* Flag Status Register */
#define MT35XL512ABA1G12_FSR_PSB                     ((uint8_t)0x04)        /*!< Program suspend bit */
#define MT35XL512ABA1G12_FSR_ESB                     ((uint8_t)0x40)        /*!< Erase suspend bit */
#define MT35XL512ABA1G12_FSR_P_FAIL                  ((uint8_t)0x10)        /*!< Program fail flag */
#define MT35XL512ABA1G12_FSR_E_FAIL                  ((uint8_t)0x20)        /*!< Erase fail flag */
   
#ifdef __cplusplus
}
#endif

#endif /* __MT35XL512ABA1G12_H */