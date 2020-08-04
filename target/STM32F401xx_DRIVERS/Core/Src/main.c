/*
 * main.c
 *
 *  Created on: Jun 25, 2020
 *      Author: VRUnleashed
 */

#include <stdint.h>
#include "main.h"
#include "stm32f401xx_gpio_driver.h"

void led_init(void) {
	gpio_pin_conf_t led_pin_conf;

	_HAL_RCC_GPIOA_CLK_ENABLE();

	led_pin_conf.pin = LED_GREEN;
	led_pin_conf.mode = GPIO_PIN_OUTPUT_MODE;
	led_pin_conf.op_type = GPIO_PIN_OP_TYPE_PUSHPULL;
	led_pin_conf.speed = GPIO_PIN_SPEED_MEDIUM;
	led_pin_conf.pull = GPIO_PIN_NO_PULL_PUSH;

	hal_gpio_init(GPIOA, &led_pin_conf);

}


void led_turn_on(GPIO_TypeDef *GPIOx,uint32_t pin_no) {
	hal_gpio_write_to_pin(GPIOx, pin_no, 1);
}


void led_turn_off(GPIO_TypeDef *GPIOx,uint32_t pin_no) {
	hal_gpio_write_to_pin(GPIOx, pin_no, 0);
}


void led_toggle(GPIO_TypeDef *GPIOx,uint32_t pin_no) {
	if(hal_gpio_read_from_pin(GPIOx, pin_no))
		hal_gpio_write_to_pin(GPIOx, pin_no, 0);
	else
		hal_gpio_write_to_pin(GPIOx, pin_no, 1);
}


int main(void) {
	//uint32_t i;

	led_init();

	_HAL_RCC_GPIOC_CLK_ENABLE();
	hal_gpio_configure_interrupt(GPIO_BUTTON_PIN, INT_RISING_EDGE);
	hal_gpio_enable_interrupt(GPIO_BUTTON_PIN, EXTI15_10_IRQn);

	/*while(1) {
		led_turn_on(GPIOA, LED_GREEN);
		for(i = 0; i < 300000; i++);

		led_turn_off(GPIOA, LED_GREEN);
		for(i = 0; i < 300000; i++);
	}*/
}


void EXTI15_10_IRQHandler(void) {
	hal_gpio_clear_interrupt(GPIO_BUTTON_PIN);
	led_toggle(GPIOA, LED_GREEN);
}
