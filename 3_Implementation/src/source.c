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
                filter_param.freq=1/(2*3.14*filter_param.r*filter_param.c);
                printf("Cutoff Frequency of RC Filter : %.3f\n",filter_param.freq);
            } 
            else if (choice==2)
            {
                filter_param.freq=1/(2*3.14*sqrt(filter_param.l*filter_param.c));
                printf("Cutoff Frequency of LC Filter : %.3f\n",filter_param.freq);
            } 
            else if (choice==3)
            {
                filter_param.freq=filter_param.r/(2*3.14*filter_param.l);
                printf("Cutoff Frequency of RL Filter : %.3f\n",filter_param.freq);
            }
            return SUCCESS;
        }
}

error_t 
