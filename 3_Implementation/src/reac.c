#include<stdio.h>
#include "header.h"
#include<math.h>

float reactance(int freq, float val)
{
    float reac=2*3.14*freq*val;
    return reac;
}
