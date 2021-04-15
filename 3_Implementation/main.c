#include "header.h"
#include<stdio.h>
#include<math.h>

/**
 * @brief Main function for user interface. Accepts commands based on the user's choice,
 * accepts the required parameters and calls the required functions.
 * 
 * @return int 
 */
int main()
{ 
    int choice=0; // Variable for choice of parameter calculation
    while(choice!=6)
    {
    printf("\nELECTRONICS PARAMTERS CALCULATOR\nYou can calculate the following parameters. More to be added soon!\n");
    printf("1. Filter Parameters\n2. Op Amp Parameters\n3. 555 Timer Parameters\n4. Battery Runtime\n5. Reactance Calculator\n6. Exit the program");
    printf("\n\nEnter your choice\n");
    scanf("%d",&choice);
    if(choice==1)
    {
        filter_param f1;
        error_t result;
        printf("Enter 1 for RC, 2 for RL, and 3 for LC filter\n");
        int fil_choice=0; // Variable for Type of Filter input from user
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
            printf("Please enter the correct option\n");
    }
    else if (choice==2)
    {
        opamp_param o1;
        error_t result;
        int gchoice; // Variable for type of gain input from user
        printf("Enter 1 for Non-Inverting Amplifier or 2 for Inverting Amplifier\n");
        scanf("%d",&gchoice);
        if(gchoice==1 || gchoice==2)
        {
            printf("Enter values of R1 and R2 : \n");
            scanf("%d%d",&o1.r1,&o1.r2);
            result=opamp_calc(&o1,gchoice);
        }
        else
            printf("Please enter correct choice\n");
    }
    else if(choice==3)
    {
        timer_param t1;
        error_t result;
        int tchoice; // Variable for mode of operation input from user
        printf("Enter 1 for Monostable Mode or 2 for Astable Mode\n");
        scanf("%d",&tchoice);
        if(tchoice==1)
        {
            printf("Enter value of R in ohms and C in microfarad\n");
            scanf("%d%d",&t1.r1,&t1.c);
            result=timer_calc(&t1,tchoice);
        }
        else if(tchoice==2)
        {
            printf("Enter values of R1, R2 in ohms and C in microfarads\n");
            scanf("%d%d%d",&t1.r1,&t1.r2,&t1.c);
            result=timer_calc(&t1,tchoice);   
        }
        else
            printf("Please enter correct choice\n");
    }
    else if(choice==4)
    {
        int capacity;
        float current;
        printf("Enter capacity of battery in mAh and discharge current in mA : \n");
        scanf("%d%f",&capacity,&current);
        func_ptr=battery_calc; // function pointer pointing to the source function battery_calc()
        float time=func_ptr(capacity,current);
    }
    else if(choice==5)
    {
        float value;int freq;
        int rchoice; // Variable for capacitive or inductive reactance choice from user
        func_ptr=reactance; // function pointer pointing to source function reactance()
        printf("Enter 1 for capacitive reactance or 2 for inductive reactance\n");
        scanf("%d",&rchoice);
        if(rchoice==1)
        {
            printf("Enter Capacitance in microfarads and frequency in hertz : \n");
            scanf("%f%d",&value,&freq);
            float react=1/(0.000001*func_ptr(freq,value));
            //Multiplying by 10^-6 for microfarads
            printf("Capacitive Reactance : %.2f ohms\n",react);
        }
        else if(rchoice==2)
        {
            printf("Enter Inductance in millihenry and frequency in hertz: \n");
            scanf("%f%d",&value,&freq);
            float react=0.001*func_ptr(freq,value);
            // Multiplying by 10^-3 for millihenry
            printf("Inductive Reactance : %.2f ohms\n",react);
        }
        else
            printf("Please enter correct choice\n");
    }
    else if(choice==6)
    printf("Thank you for using Electronics Calculator!\n");
    else
        printf("Please enter correct option\n");
    }
}