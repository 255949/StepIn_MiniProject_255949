#include "header.h"
#include<stdio.h>
#include<math.h>

int main()
{
    printf("ELECTRONICS PARAMTERS CALCULATOR\n");
    printf("Enter you choice\n");
    int choice;
    scanf("%d",&n);
    if(choice==1)
    {
        filter_param f1;
        printf("Enter 1 for RC, 2 for RL, and 3 for LC filter");
        int fil_choice=0;
        scanf("%d",&fil_choice);
        if(fil_choice==1)
        {
            printf("Enter Values of R and C");
            scanf("%d%d",&f1.r,&f1.c);
            filter_calc(f1,fil_choice);
        }
    }
}