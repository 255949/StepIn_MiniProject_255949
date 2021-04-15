#include<stdio.h>
#include "header.h"
#include<math.h>

/**
 * @brief Function for calculation of cutoff frequency
 * 
 * @param f1 Structure with filter parameters
 * @param choice choice of RC, LR or LC Filter
 * @return error_t Returns SUCCESS OR ERROR
 */
error_t filter_calc(filter_param *f1,int choice)
{
    if(f1==NULL)
        return ERROR;
    else
        {
            if(choice==1)
            {
                f1->freq=1/(2*3.14*f1->r*f1->c*0.000001);
                printf("Cutoff Frequency of RC Filter : %.3f Hz\n",f1->freq);
                return SUCCESS;
            } 
            else if (choice==2)
            {
                f1->freq=1/(2*3.14*sqrt(f1->l*0.001*f1->c*0.000001));
                printf("Cutoff Frequency of LC Filter : %.3f Hz\n",f1->freq);
                return SUCCESS;
            } 
            else if (choice==3)
            {
                f1->freq=f1->r/(2*3.14*f1->l*0.001);
                printf("Cutoff Frequency of RL Filter : %.3f Hz\n",f1->freq);
                return SUCCESS;
            }
            else
            {
                printf("Please enter correct choice");
                return ERROR;
            }
            
        }
}







