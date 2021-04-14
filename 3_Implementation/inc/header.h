#include<stdio.h>

#ifndef __HEADER_H__
#define __HEADER_H__
/**
 * @brief Structure for storing filter parameters
 * R- Resistance
 * C- Capacitance
 * L- Inductance
 * freq - To store calclulated cutoff Frequency
 */
typedef struct filter_param
{
    int r;
    int c;
    int l;
    float freq;
}filter_param;

/**
 * @brief Structure for storing OpAmp Paramters
 * R1 and R2 - Resistances required for configuration
 * gain - To store calculated gain
 */
typedef struct opamp_param
{
    int r1;
    int r2;
    float gain;
}opamp_param;

/**
 * @brief Structure for storing 555 Timer parameters
 * R1,R2 and C - Resistors and Capacitor required for configuration into Astable or Monostable Mode
 * freq - To store frequency of generated square wave in Astable mode and time period of pulse in Monostable mode
 */
typedef struct timer_param
{
    int r1;
    int r2;
    int c;
    float freq;
}timer_param;

/*typedef struct battery_param
{
    float voltage;
    float capacity;
}battery_param;*/

/**
 * @brief enum for returning successful pass of a function
 * 
 */
typedef enum error_t
{
    SUCCESS=0,
    ERROR=-1
}error_t;

/**
 * @brief Function for calculation of cutoff frequency
 * 
 * @param f1 Structure with filter parameters
 * @param choice choice of RC, LR or LC Filter
 * @return error_t Returns SUCCESS OR ERROR
 */
error_t filter_calc(filter_param *f1,int choice);

/**
 * @brief Function for gain calculation for opamp
 * 
 * @param o1 Structure with opamp parameters
 * @param choice choice of Inverting or Non Inverting gain
 * @return error_t Returns SUCCESS OR ERROR
 */
error_t opamp_calc(opamp_param *o1,int choice);

/**
 * @brief Function for timer frequency and duty cycle calculation
 * 
 * @param t1 Structure with timer parameters
 * @param choice Choice of Astable or Monostable operation
 * @return error_t Returns SUCCESS OR ERROR
 */
error_t  timer_calc(timer_param *t1,int choice);

/**
 * @brief Battery Runtime calculation function
 * 
 * @param c Capacity of battery
 * @param i Discharge current
 * @return float Returns runtime value
 */
float battery_calc(int c, float i);

/**
 * @brief Reactance calculation function
 * 
 * @param freq Frequency
 * @param val Capacitance or Inductance
 * @return float Returns value of reactance
 */
float reactance(int freq, float val);

#endif