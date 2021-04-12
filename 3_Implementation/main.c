#include "header.h"
#include<stdio.h>
#include<math.h>

int main()
{
    printf("ELECTRONICS PARAMTERS CALCULATOR\n");
    printf("Enter you choice\n");
    int choice=0;
    scanf("%d",&choice);
    while(choice!=5)
    {
    if(choice==1)
    {
        filter_param f1;
        error_t result;
        printf("Enter 1 for RC, 2 for RL, and 3 for LC filter\n");
        int fil_choice=0;
        scanf("%d",&fil_choice);
        if(fil_choice==1)
        {
            printf("Enter Values of R and C :\n");
            scanf("%d%d",&f1.r,&f1.c);
            result=filter_calc(&f1,fil_choice);
        }
        else if(fil_choice==2)
        {
            printf("Enter Values of R and L :\n");
            scanf("%d%d",&f1.r,&f1.l);
            result=filter_calc(&f1,fil_choice);
        }
        else if(fil_choice==3)
        {
            printf("Enter Values of L and C :\n");
            scanf("%d%d",&f1.l,&f1.c);
            result=filter_calc(&f1,fil_choice);
        }
        else
            printf("Please enter the correct option");
    }
    else if (choice==2)
    {
        opamp_param o1;
        error_t result;
        int gchoice;
        printf("Enter 1 for Non-Inverting Amplifier or 2 for Inverting Amplifier\n");
        scanf("%d",&gchoice);
        printf("Enter values of R1 and R2 : \n");
        scanf("%d%d",o1.r1,o1.r2);
        result=opamp_calc(&o1,gchoice);
    }
    else if(choice==3)
    {
        timer_param t1;
        error_t result;
        int tchoice;
        printf("Enter 1 for Monostable Mode or 2 for Astable Mode\n");
        scanf("%d",&tchoice);
        if(tchoice==1)
        {
            printf("Enter R and C values\n");
            scanf("%d%d",&t1.r1,&t1.c);
            result=timer_calc(&t1,tchoice);
        }
        else
        {
            printf("Enter R1, R2 and C values\n");
            scanf("%d%d%d",&t1.r1,&t1.r2,&t1.c);
            result=imer_calc(&t1,tchoice);   
        }
    }
    else if(choice==4)
    {
        
    }
    }
}