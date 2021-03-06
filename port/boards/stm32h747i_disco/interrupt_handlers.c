/*
 * Copyright (C) 2020 Shotaro Uchida <fantom@xmaker.mx>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "common.h"

void NMI_Handler(void)
{
}

void HardFault_Handler(void)
{
	/* Go to infinite loop when Memory Manage exception occurs */
	while (1)
	;
}

void MemManage_Handler(void)
{
	/* Go to infinite loop when Memory Manage exception occurs */
	while (1)
	;
}

void BusFault_Handler(void)
{
	/* Go to infinite loop when Bus Fault exception occurs */
	while (1)
		;
}

void UsageFault_Handler(void)
{
	/* Go to infinite loop when Usage Fault exception occurs */
	while (1)
		;
}

void SVC_Handler(void)
{
}

void DebugMon_Handler(void)
{
}

void PendSV_Handler(void)
{
}

void SysTick_Handler(void)
{
	HAL_IncTick();
}

void EXTI2_IRQHandler(void)
{
	BSP_JOY_IRQHandler(JOY1, JOY_SEL);
}

void EXTI3_IRQHandler(void)
{
	BSP_JOY_IRQHandler(JOY1, JOY_DOWN);
}

void EXTI4_IRQHandler(void)
{
	BSP_JOY_IRQHandler(JOY1, JOY_LEFT);
}

void EXTI9_5_IRQHandler(void)
{
	BSP_JOY_IRQHandler(JOY1, JOY_RIGHT);
	BSP_JOY_IRQHandler(JOY1, JOY_UP);
}

void EXTI15_10_IRQHandler(void)
{
	BSP_PB_IRQHandler(BUTTON_WAKEUP);
}

void MDMA_IRQHandler(void)
{
	BSP_SDRAM_IRQHandler(0);
}

void SDMMC1_IRQHandler(void)
{
	BSP_SD_IRQHandler(0);
}