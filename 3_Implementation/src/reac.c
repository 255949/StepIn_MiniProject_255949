#include<stdio.h>
#include "header.h"
#include<math.h>

/**
 * @brief Reactance calculation function
 * 
 * @param freq Frequency
 * @param val Capacitance or Inductance
 * @return float Returns value of reactance
 */
float reactance(int freq, float val)
{
    float reac=2*3.14*freq*val;
    return reac;
}
