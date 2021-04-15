#include<stdio.h>
#include "header.h"
#include<math.h>

/**
 * @brief Battery Runtime calculation function
 * 
 * @param c Capacity of battery
 * @param i Discharge current
 * @return float Returns runtime value
 */
float battery_calc(int c, float i)
{
    float time=(float)c/i;
    printf("For a constant discharge current of %.2f A, the battery will last for %.2f hours\n",i,time);
    return time;
}