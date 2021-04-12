#include<stdio.h>
#include "header.h"
#include<math.h>

error_t filer_calc(filter_param f1,int choice)
{
    if(f1==NULL)
        return ERROR;
    else
        {
            if(choice==1)
            {
                f1.freq=1/(2*3.14*f1.r*f1.c);
                printf("Cutoff Frequency of RC Filter : %.3f\n",f1.freq);
            } 
            else if (choice==2)
            {
                f1.freq=1/(2*3.14*sqrt(f1.l*f1.c));
                printf("Cutoff Frequency of LC Filter : %.3f\n",f1.freq);
            } 
            else if (choice==3)
            {
                f1.freq=f1.r/(2*3.14*f1.l);
                printf("Cutoff Frequency of RL Filter : %.3f\n",f1.freq);
            }
            return SUCCESS;
        }
}

error_t opamp_calc(opamp_param o1,int choice)
{
    if(o1==NULL)
        return ERROR;
    else
    {
        if(choice==1)
        {
            o1.gain=(1+(o1.r2/o1.r1));
            printf("Non Inverting Gain : %.2f\n",o1.gain);
        }
        else
        {
            o1.gain=(1+(o1.r2/o1.r1));
            printf("Inverting Gain : -%.2f\n",o1.gain);
        }
        return SUCCESS;
    }

}

error_t  timer_calc(timer_param t1,)
