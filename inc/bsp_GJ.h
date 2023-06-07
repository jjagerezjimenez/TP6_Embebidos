#ifndef BSP_GJ_H
#define BSP_GJ_H

#include "chip.h"
#include <stdbool.h>
#include "digital_GJ.h"
#include <stdint.h>





typedef struct board_s {

    DigitalOutput_t Buzzer;

    DigitalInput_t  Set_time;
    DigitalInput_t  Set_alarm;
    DigitalInput_t  decrementar;
    DigitalInput_t  incrementar;
    DigitalInput_t  Aceptar;
    DigitalInput_t  Cancelar;

} const * const board_t;


board_t BoardCreate(void);

#endif