/*
 * SWANAND SAPRE
 * Copyright (C) 2018 Amazon.com, Inc. or its affiliates.  All Rights Reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy of
 * this software and associated documentation files (the "Software"), to deal in
 * the Software without restriction, including without limitation the rights to
 * use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
 * the Software, and to permit persons to whom the Software is furnished to do so,
 * subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
 * FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
 * COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
 * IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

/* This file contains configuration settings for the demos. */

#ifndef IOT_CONFIG_H_
#define IOT_CONFIG_H_

/*HTTPS_Client_Download_Demo
 * AWS-CLI COMMAND TO GENERATE THE URL WITH 7-DAYS VALIDITY
 * aws s3 presign s3://firmware-stm/aws_demos.bin --expires-in 604800
 */

//VERSION-FILE
#define IOT_DEMO_HTTPS_PRESIGNED_GET_URL_VER	"https://firmware-stm.s3.us-west-1.amazonaws.com/test_firmware.txt?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIAVDFFGZQ4HQHVVDU5%2F20200516%2Fus-west-1%2Fs3%2Faws4_request&X-Amz-Date=20200516T010236Z&X-Amz-Expires=604800&X-Amz-SignedHeaders=host&X-Amz-Signature=e36a9ad764c7550c614a355ad752f1f3b81482ea3e7fa58d1ec1352c2aa685ce"

//LINK EXPIRES IN 7-DAYS
#define IOT_DEMO_HTTPS_PRESIGNED_GET_URL_BIN	"https://firmware-stm.s3.us-west-1.amazonaws.com/test_firmware.txt?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIAVDFFGZQ4HQHVVDU5%2F20200516%2Fus-west-1%2Fs3%2Faws4_request&X-Amz-Date=20200516T010236Z&X-Amz-Expires=604800&X-Amz-SignedHeaders=host&X-Amz-Signature=e36a9ad764c7550c614a355ad752f1f3b81482ea3e7fa58d1ec1352c2aa685ce"

#define IOT_DEMO_HTTPS_PRESIGNED_PUT_URL    "https://firmware-stm.s3.amazonaws.com/aws_demos.bin?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIAVDFFGZQ4HQHVVDU5%2F20200426%2Fus-west-1%2Fs3%2Faws4_request&X-Amz-Date=20200426T031238Z&X-Amz-Expires=3600&X-Amz-SignedHeaders=host&X-Amz-Signature=bf63b422854b8e4a7bbdce3fe667e5069b1ea631da48f642a6428f023967d60e"

/* MQTT demo configuration. */
#define IOT_DEMO_MQTT_PUBLISH_BURST_COUNT       ( 10 )
#define IOT_DEMO_MQTT_PUBLISH_BURST_SIZE        ( 2 )

/* Shadow demo configuration. The demo publishes periodic Shadow updates and responds
 * to changing Shadows. */
#define AWS_IOT_DEMO_SHADOW_UPDATE_COUNT        ( 20 )   /* Number of updates to publish. */
#define AWS_IOT_DEMO_SHADOW_UPDATE_PERIOD_MS    ( 3000 ) /* Period of Shadow updates. */

/* Library logging configuration. IOT_LOG_LEVEL_GLOBAL provides a global log
 * level for all libraries; the library-specific settings override the global
 * setting. If both the library-specific and global settings are undefined,
 * no logs will be printed. */
#define IOT_LOG_LEVEL_GLOBAL                    IOT_LOG_INFO
#define IOT_LOG_LEVEL_DEMO                      IOT_LOG_INFO
#define IOT_LOG_LEVEL_PLATFORM                  IOT_LOG_NONE
#define IOT_LOG_LEVEL_NETWORK                   IOT_LOG_INFO
#define IOT_LOG_LEVEL_TASKPOOL                  IOT_LOG_NONE
#define IOT_LOG_LEVEL_MQTT                      IOT_LOG_INFO
#define AWS_IOT_LOG_LEVEL_SHADOW                IOT_LOG_INFO
#define AWS_IOT_LOG_LEVEL_DEFENDER              IOT_LOG_INFO
#define IOT_LOG_LEVEL_HTTPS                     IOT_LOG_INFO

/* Platform thread stack size and priority. */
#define IOT_THREAD_DEFAULT_STACK_SIZE           2048
#define IOT_THREAD_DEFAULT_PRIORITY             5

/* Include the common configuration file for FreeRTOS. */
#include "iot_config_common.h"

#endif /* ifndef IOT_CONFIG_H_ */
