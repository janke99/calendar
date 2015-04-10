#ifndef __MPU6050_H
#define __MPU6050_H
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


#define PRINT_ACCEL     (0x01)
#define PRINT_GYRO      (0x02)
#define PRINT_QUAT      (0x04)

#define ACCEL_ON        (0x01)
#define GYRO_ON         (0x02)

#define MOTION          (0)
#define NO_MOTION       (1)

/* Starting sampling rate. */
#define DEFAULT_MPU_HZ  (200)



#define q30  1073741824.0

static  unsigned short inv_row_2_scale(const signed char *row);
static  unsigned short inv_orientation_matrix_to_scalar(const signed char *mtx);
static void run_self_test(void);

extern void mpu6050_dmp_init(void);
extern void Mpu6050Dmp_Get(float *buf);

#endif

