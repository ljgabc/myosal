/**
 * @file osal_hal.h
 * @author ljgabc
 * @brief OSAL移植需要实现的函数
 * @version 0.1
 * @date 2024-11-27
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#pragma once

#include "osal.h"

/**
 * @brief 禁用中断，并返回中断寄存器状态
 * 
 * @return hal_reg_t 中断寄存器状态
 */
hal_reg_t hal_enter_critical(void);

/**
 * @brief 恢复中断状态
 * 
 */
void hal_exit_critical(hal_reg_t cpu_sr);

