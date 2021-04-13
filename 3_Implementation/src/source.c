#include<stdio.h>
#include "header.h"
#include<math.h>

error_t filter_calc(filter_param *f1,int choice)
{
    if(f1==NULL)
        return ERROR;
    else
        {
            if(choice==1)
            {
                f1->freq=1/(2*3.14*f1->r*f1->c*0.000001);
                printf("Cutoff Frequency of RC Filter : %.3f\n",f1->freq);
                return SUCCESS;
            } 
            else if (choice==2)
            {
                f1->freq=1/(2*3.14*sqrt(f1->l*0.001*f1->c*0.000001));
                printf("Cutoff Frequency of LC Filter : %.3f\n",f1->freq);
                return SUCCESS;
            } 
            else if (choice==3)
            {
                f1->freq=f1->r/(2*3.14*f1->l*0.001);
                printf("Cutoff Frequency of RL Filter : %.3f\n",f1->freq);
                return SUCCESS;
            }
            else
            {
                printf("Please enter correct choice");
                return ERROR;
            }
            
        }
}

error_t opamp_calc(opamp_param *o1,int choice)
{
    if(o1==NULL)
        return ERROR;
    else
    {
        if(choice==1)
        {
            o1->gain=(1+(o1->r2/o1->r1));
            printf("Non Inverting Gain : %.2f\n",o1->gain);
            return SUCCESS;
        }
        else if(choice==2)
        {
            o1->gain=o1->r2/o1->r1;
            printf("Inverting Gain : -%.2f\n",o1->gain);
            return SUCCESS;
        }
        else
        {
            printf("Please enter correct choice");
            return ERROR;
        }

    }

}

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

float battery_calc(int c, float i)
{
    float time=(float)c/i;
    printf("For a constant discharge current of %f A, the battery will last for %f hours",i,time);
    return time;
}

float reactance(int freq, float val)
{
    float reac=2*3.14*freq*val;
    return reac;
}
