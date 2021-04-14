#include<stdio.h>
#include "header.h"
#include<math.h>

/**
 * @brief Structure for storing 555 Timer parameters
 * R1,R2 and C - Resistors and Capacitor required for configuration into Astable or Monostable Mode
 * freq - To store frequency of generated square wave in Astable mode and time period of pulse in Monostable mode
 */
error_t  timer_calc(timer_param *t1,int choice)
{
    if(t1==NULL)
        return ERROR;
    else
    {
        if(choice==1)
        {
            t1->freq=1.098*t1->r1*t1->c*0.000001;
            printf("Pulse Time : %.3f\n",t1->freq);
        }
        else
        {
            float duty=(t1->r1+t1->r2)/(t1->r1+2*t1->r2);
            t1->freq=1/(0.693*t1->c*0.000001*(t1->r1+t1->r2));
            printf("Duty Cycle : %.3f\n",duty);
            printf("Frequency of pulse : %.3f\n",t1->freq);
        }
        return SUCCESS;
    }
}