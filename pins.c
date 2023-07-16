/**
 * pins.cpp
 * @version 2023
 **/

#include "pins.h"
#include <avr/io.h>

//Create a mapping 1:1 with arduino'pins

Pin _pins[] = {
  {// 0
    .r_ddr=&DDRE,
    .r_port=&PORTE,
    .r_pin=&PINE,
    .pin=0,
    .tccr=0,
    .ocr=0,
    .mask=0,    
  },
  {// 1
    .r_ddr=&DDRE,
    .r_port=&PORTE,
    .r_pin=&PINE,
    .pin=1,
    .tccr=0,
    .ocr=0,
    .mask=0,
  },
  {// 2
    .r_ddr=&DDRE,
    .r_port=&PORTE,
    .r_pin=&PINE,
    .pin=4,
    .tccr=0,
    .ocr=0,
    .mask=0,
  },
  {// 3
    .r_ddr=&DDRE,
    .r_port=&PORTE,
    .r_pin=&PINE,
    .pin=5,
    .tccr=0,
    .ocr=0,
    .mask=0,
  },
  {// 4
    .r_ddr=&DDRG,
    .r_port=&PORTG,
    .r_pin=&PING,
    .pin=5,
    .tccr=&TCCR0A,
    .ocr=&OCR0B,
    .mask=(1<<COM0B1),
  },
  {// 5
    .r_ddr=&DDRE,
    .r_port=&PORTE,
    .r_pin=&PINE,
    .pin=3,
    .tccr=0,
    .ocr=0,
    .mask=0,
  },
  {// 6
    .r_ddr=&DDRH,
    .r_port=&PORTH,
    .r_pin=&PINH,
    .pin=3,
    .tccr=0,
    .ocr=0,
    .mask=0,
  },
  {// 7
    .r_ddr=&DDRH,
    .r_port=&PORTH,
    .r_pin=&PINH,
    .pin=4,
    .tccr=0,
    .ocr=0,
    .mask=0,
  },
  {// 8
    .r_ddr=&DDRH,
    .r_port=&PORTH,
    .r_pin=&PINH,
    .pin=5,
    .tccr=0,
    .ocr=0,
    .mask=0,
  },
  {// 9
    .r_ddr=&DDRH,
    .r_port=&PORTH,
    .r_pin=&PINH,
    .pin=6,
    .tccr=&TCCR2A,
    .ocr=&OCR2B,
    .mask=1<<COM2B1,
  },
  {// 10
    .r_ddr=&DDRB,
    .r_port=&PORTB,
    .r_pin=&PINB,
    .pin=4,
    .tccr=&TCCR2A,
    .ocr=&OCR2A,
    .mask=1<<COM2A1,
  },
  {// 11
    .r_ddr=&DDRB,
    .r_port=&PORTB,
    .r_pin=&PINB,
    .pin=5,
    .tccr=0,
    .ocr=0,
    .mask=0,
  },
  {// 12
    .r_ddr=&DDRB,
    .r_port=&PORTB,
    .r_pin=&PINB,
    .pin=6,
    .tccr=0,
    .ocr=0,
    .mask=0,
  },
  {// 13
    .r_ddr=&DDRB,
    .r_port=&PORTB,
    .r_pin=&PINB,
    .pin=7,
    .tccr=&TCCR0A,
    .ocr=&OCR0A,
    .mask=(1<<COM0A1),
  }
};