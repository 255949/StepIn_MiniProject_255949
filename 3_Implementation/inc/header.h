#include<stdio.h>

#ifndef __HEADER_H__
#define __HEADER_H__

typedef struct filter_param
{
    int r;
    int c;
    int l;
    float freq;
}filter_param;

typedef struct opamp_param
{
    int r1;
    int r2;
    float gain;
}opamp_param;

typedef struct timer_param
{
    int r1;
    int r2;
    int c;
}timer_param;

typedef struct battery_param
{
    float voltage;
    float capacity;
}battery_param;

typedef enum error_t
{
    SUCCESS=0,
    ERROR=-1
}error_t;

error_t filer_calc(filter_param f1,int choice);

#endif