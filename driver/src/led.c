#include "led.h"

void led_on(void)
{
	LED = 0;
}

void led_off(void)
{
	LED = 0xff;
}