#ifndef _MPU_COMPAT_HPP_
#define _MPU_COMPAT_HPP_

/*******************************************************************************
 * MPU device config definition
 ******************************************************************************/
#ifdef CONFIG_MPU9250
	#define CONFIG_MPU6500
#elif defined CONFIG_MPU9150
	#define CONFIG_MPU6050
#elif defined CONFIG_MPU6000
	#define CONFIG_MPU6050
#elif defined CONFIG_MPU6555
	#define CONFIG_MPU6500
#elif defined CONFIG_MPU9255
	#define CONFIG_MPU9250
	#define CONFIG_MPU6500
#endif
 

#endif