/**
 * @file osal_types.h
 * @author ljgabc
 * @brief OSAL通用类型定义
 * @version 0.1
 * @date 2024-11-27
 *
 * @copyright Copyright (c) 2024
 *
 */
#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#include "hal_types.h"
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// generic status return
typedef uint8_t status_t;

#define FALSE 0
#define TRUE 1

/*** Generic Status Return Values ***/
#define SUCCESS 0x00
#define FAILURE 0x01
#define INVALIDPARAMETER 0x02
#define INVALID_TASK 0x03
#define MSG_BUFFER_NOT_AVAIL 0x04
#define INVALID_MSG_POINTER 0x05
#define INVALID_EVENT_ID 0x06
#define INVALID_INTERRUPT_ID 0x07
#define NO_TIMER_AVAIL 0x08
#define NV_ITEM_UNINIT 0x09
#define NV_OPER_FAILED 0x0A
#define INVALID_MEM_SIZE 0x0B
#define NV_BAD_ITEM_LEN 0x0C
#define NV_INVALID_DATA 0x0D

/*** NV Error Mask ***/
#define NV_NIB_INIT_FAILURE 0x01
#define NV_ADDR_MGR_INIT_FAILURE 0x02
#define NV_ASSOC_INIT_FAILURE 0x04
#define NV_BIND_TBL_INIT_FAILURE 0x08
#define NV_GRPS_INIT_FAILURE 0x10
#define NV_SEC_MGR_FAILURE 0x20

// A message is waiting event
#define SYS_EVENT_MSG 0x8000

#ifdef __cplusplus
}
#endif
