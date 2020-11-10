#include "flash_svcall.h"
#include "flash_svcall_int.h"
#include "spi_flash_int.h"

void do_spi_flash_program_svcall(uint32_t offset,uint8_t *data,uint16_t length,bool quad);
void do_spi_flash_sector_erase_svcall(uint32_t addr);
void do_spi_flash_fast_read_svcall(uint32_t offset, uint8_t * data, uint16_t length);
void do_spi_flash_quad_io_read_svcall(uint32_t offset, uint8_t * data, uint16_t length);
void do_spi_flash_chip_erase_svcall(void);
void do_spi_flash_erase_security_area_svcall(uint8_t idx);
void do_spi_flash_program_security_area_svcall(uint8_t idx, uint16_t addr, uint8_t * data, uint16_t length);
void do_spi_flash_read_security_area_svcall(uint8_t idx, uint16_t addr, uint8_t * data, uint16_t length);

#define FLASH_EXECUTE_WITH_RETVAL(return_val,op,...) \
    do{\
        if(GLOBAL_INT_MASK_STATUS())\
        {\
            return_val = op(__VA_ARGS__);\
        }else\
        {\
            return_val = op##_svcall(__VA_ARGS__);\
        }\
    }while(0)

#define FLASH_EXECUTE_NO_RETVAL(op,...) \
    do{\
        if(GLOBAL_INT_MASK_STATUS())\
        {\
            op(__VA_ARGS__);\
        }else\
        {\
            op##_svcall(__VA_ARGS__);\
        }\
    }while(0)

void spi_flash_program_operation(uint32_t offset,uint8_t *data,uint16_t length,bool quad)
{
    FLASH_EXECUTE_NO_RETVAL(do_spi_flash_program,offset,data,length,quad);
}

void spi_flash_sector_erase_operation(uint32_t offset)
{
    FLASH_EXECUTE_NO_RETVAL(do_spi_flash_sector_erase,offset);
}

void spi_flash_fast_read_operation(uint32_t offset, uint8_t * data, uint16_t length)
{
    FLASH_EXECUTE_NO_RETVAL(do_spi_flash_fast_read, offset, data, length);
}

void spi_flash_quad_io_read_operation(uint32_t offset, uint8_t * data, uint16_t length)
{
    FLASH_EXECUTE_NO_RETVAL(do_spi_flash_quad_io_read, offset, data, length);
}

void spi_flash_chip_erase_operation()
{
    FLASH_EXECUTE_NO_RETVAL(do_spi_flash_chip_erase);
}

void spi_flash_erase_security_area_operation(uint8_t idx)
{
    FLASH_EXECUTE_NO_RETVAL(do_spi_flash_erase_security_area,idx);
}

void spi_flash_program_security_area_operation(uint8_t idx, uint16_t addr, uint8_t * data, uint16_t length)
{
    FLASH_EXECUTE_NO_RETVAL(do_spi_flash_program_security_area, idx,addr,data,length);
}

void spi_flash_read_security_area_operation(uint8_t idx, uint16_t addr, uint8_t * data, uint16_t length)
{
    FLASH_EXECUTE_NO_RETVAL(do_spi_flash_read_security_area, idx,addr,data,length);
}
