#ifndef __LED_H
#define __LED_H
#include <reg52.h>

#define PZ 1

#if PZ

#define LED P2
sbit LED3 = P2^0;
sbit LED5 = P2^1;
sbit LED7 = P2^2;
sbit LED9 = P2^3;
sbit LED11 = P2^4;
sbit LED13 = P2^5;
sbit LED15 = P2^6;
sbit LED16 = P2^7;

#else

#define LED P2
sbit LED3 = P2^0;
sbit LED5 = P2^1;
sbit LED7 = P2^2;
sbit LED9 = P2^3;
sbit LED11 = P2^4;
sbit LED13 = P2^5;
sbit LED15 = P2^6;
sbit LED16 = P2^7;

#endif

void led_on(void);
void led_off(void);


#endif