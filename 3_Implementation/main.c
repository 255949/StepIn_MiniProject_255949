#include "header.h"
#include<stdio.h>
#include<math.h>

int main()
{
    printf("ELECTRONICS PARAMTERS CALCULATOR\n");
    int choice=0;
    while(choice!=6)
    {
    printf("Enter you choice\n");
    scanf("%d",&choice);
    if(choice==1)
    {
        filter_param f1;
        error_t result;
        printf("Enter 1 for RC, 2 for RL, and 3 for LC filter\n");
        int fil_choice=0;
        scanf("%d",&fil_choice);
        if(fil_choice==1)
        {
            printf("Enter Values of R in ohms and C in microfarad:\n");
            scanf("%d%d",&f1.r,&f1.c);
            result=filter_calc(&f1,fil_choice);
        }
        else if(fil_choice==2)
        {
            printf("Enter Values of L in millihenry and C in microfarad:\n");
            scanf("%d%d",&f1.l,&f1.c);
            result=filter_calc(&f1,fil_choice);
        }
        else if(fil_choice==3)
        {
            printf("Enter Values of R in ohms and L in millihenry :\n");
            scanf("%d%d",&f1.r,&f1.l);
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
        scanf("%d%d",&o1.r1,&o1.r2);
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
            printf("Enter value of R in ohms and C in microfarad\n");
            scanf("%d%d",&t1.r1,&t1.c);
            result=timer_calc(&t1,tchoice);
        }
        else
        {
            printf("Enter values of R1, R2 in ohms and C in microfarads\n");
            scanf("%d%d%d",&t1.r1,&t1.r2,&t1.c);
            result=timer_calc(&t1,tchoice);   
        }
    }
    else if(choice==4)
    {
        int capacity;
        float current;
        printf("Enter capacity of battery in mAh and discharge current in mA : \n");
        scanf("%d%f",&capacity,&current);
        float time=battery_calc(capacity,current);
    }
    else if(choice==5)
    {
        float value;int freq;
        int rchoice;
        printf("Enter 1 for capacitive reactance or 2 for inductive reactance");
        scanf("%d",&rchoice);
        if(rchoice==1)
        {
            printf("Enter Capacitance and frequency: \n");
            scanf("%f%d",&value,&freq);
            float result=1/reactance(freq,value);
            printf("Capacitive Reactance : %f",result);
        }
        else
        {
            printf("Enter Inductance and frequency: \n");
            scanf("%f%d",&value,&freq);
            float result=reactance(freq,value);
            printf("Inductive Reactance : %f",result);
        }
    }
    else if(choice==6)
    printf("Thank you\n");
    else
        printf("Please enter correct option\n");
    }
}