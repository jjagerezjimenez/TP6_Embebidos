#include <stdint.h>
#include <stdbool.h>

#ifndef INSTANCIAS_GPIO
#define INSTANCIAS_GPIO 4
#endif

#ifndef DIGITAL_GJ_H
#define DIGITAL_GJ_H             //Buscar referencia del digital de los videos (hueco clases 11 y 12)



typedef struct DigitalInput_s *DigitalInput_t;
typedef struct DigitalOutput_s *DigitalOutput_t;


DigitalOutput_t DigitalInput_Ocupado(void);

DigitalInput_t DigitalInput_Create(uint8_t port,uint8_t inverted , uint8_t pin);  //eror uint_8


bool DigitalInput_GetState(DigitalInput_t Input);


bool DigitalInput_HasChange(DigitalInput_t Input);


bool DigitalInput_HasActivate(DigitalInput_t Input);


bool DigitalInput_HasDesactivate(DigitalInput_t Input);


DigitalOutput_t DigitalOutput_Ocupado(void);

DigitalOutput_t DigitalOutput_Create(uint8_t port, uint8_t pin);


void DigitalOutput_Activate(DigitalOutput_t Output);


void DigitalOutput_Desactivate(DigitalOutput_t Output);


void DigitalOutput_Toggle(DigitalOutput_t Output);


#endif