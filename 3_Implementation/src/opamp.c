#include<stdio.h>
#include "header.h"
#include<math.h>

/**
 * @brief Function for gain calculation for opamp
 * 
 * @param o1 Structure with opamp parameters
 * @param choice choice of Inverting or Non Inverting gain
 * @return error_t Returns SUCCESS OR ERROR
 */
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
            printf("Please enter correct choice\n");
            return ERROR;
        }

    }

}