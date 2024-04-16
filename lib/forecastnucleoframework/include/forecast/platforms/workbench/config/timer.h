#ifndef CONFIG_TIMER_H
#define CONFIG_TIMER_H

#define TICKER_HW_TIMER TIM7
#define TICKER_HW_TIMER_IRQn TIM7_IRQn
#define TICKER_CLOCK_FREQ 90000000

#define ENABLE_TICKER __HAL_RCC_TIM7_CLK_ENABLE

#endif // CONFIG_TIMER_H