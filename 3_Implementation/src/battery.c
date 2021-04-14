#include<stdio.h>
#include "header.h"
#include<math.h>

float battery_calc(int c, float i)
{
    float time=(float)c/i;
    printf("For a constant discharge current of %f A, the battery will last for %.2f hours",i,time);
    return time;
}