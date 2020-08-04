/*
 * main.h
 *
 *  Created on: Jun 25, 2020
 *      Author: VRUnleashed
 */

#ifndef INC_MAIN_H_
#define INC_MAIN_H_

#include "stm32f401xx_gpio_driver.h"

#define GPIOA_PIN_5      5

#define LED_GREEN        GPIOA_PIN_5

#define GPIO_BUTTON_PIN  13

void led_init(void);

void led_turn_on(GPIO_TypeDef *GPIOx,uint32_t pin_no);

void led_turn_off(GPIO_TypeDef *GPIOx,uint32_t pin_no);

void led_toggle(GPIO_TypeDef *GPIOx,uint32_t pin_no);

void EXTI15_10_IRQHandler(void);

#endif /* INC_MAIN_H_ */
