# TEST PLAN:

## Table no: High level test plan

| **Test_ID** | **Description**                                                     | **Exp I/P**                                                    | **Exp O/P**                 | **Actual O/P** | **Type of Test**   |
|---------|-----------------------------------------------------------------|------------------------------------------------------------|-------------------------|------------|----------------|
| H_01    | Test function calculating the cutoff frequency of filter        | Structure with Filter parameters and choice of filter      | Cutoff Frequency        | SUCCESS    | Scenario Based |
| H_02    | Test function calculating the gain for opamp                    | Structure with OpAmp parameters and choice of gain         | Gain                    | SUCCESS    | Scenario Based |
| H_03    | Test function calculating frequency and duty cycle of 555 timer | Structure with Timer characteristics and mode of operation | Frequency or Time delay | SUCCESS    | Scenario Based |
| H_04    | Test function calculating battery runtime                       | Capacity of Battery and discharge current                  | Runtime                 | float time | Scenario Based |
| H_05    | Test function calculating reactance                             | Frequency of operation and Capacitance/Inductance          | Reactance               | float reac |                |

## Table no: Low level test plan

| **Test ID** | **Description**                                                | **Exp I/P**                               | **Exp O/P** | **Actual O/P** | **Type of test** |
|-------------|----------------------------------------------------------------|-------------------------------------------|-------------|----------------|------------------|
| L_01        | To check success of filter_calc function for RC filter         | Pointer to structure and choice of filter | SUCCESS     | SUCCESS        | Scenario Based   |
| L_02        | To check value of cutoff freq for RC filter                    | Structure member - frequency              | 7.238       | 7.238          | Scenario Based   |
| L_03        | To check success of filter_calc function for LC filter         | Pointer to structure and choice of filter | SUCCESS     | SUCCESS        | Scenario Based   |
| L_04        | To check value of cutoff freq for LC filter                    | Structure member - frequency              | 33.949      | 33.949         | Scenario Based   |
| L_05        | To check success of filter_calc function for RL filter         | Pointer to structure and choice of filter | SUCCESS     | SUCCESS        | Scenario Based   |
| L_06        | To check value of cutoff freq for RL filter                    | Structure member - frequency              | 79.618      | 79.618         | Scenario Based   |
| L_07        | To check failure of filter_calc function for wrong input       | Pointer to structure and choice of filter | ERROR       | ERROR          | Scenario Based   |
| L_08        | To check success of opamp_calc function for Non inverting gain | Pointer to structure and choice of gain   | SUCCESS     | SUCCESS        | Scenario Based   |
| L_09        | To check gain of non inverting opamp                           | Structure member - gain                   | 6.00        | 6.00           | Scenario Based   |
| L_10        | To check success of opamp_calc function for Inverting gain     | Pointer to structure and choice of gain   | SUCCESS     | SUCCESS        | Scenario Based   |
| L_11        | To check gain of inverting opamp                               | Structure member - gain                   | 2.33        | 2.33           | Scenario Based   |
| L_12        | To check failure of opamp_calc function for wrong input        | Pointer to structure and choice of gain   | ERROR       | ERROR          | Scenario Based   |
| L_13        | To check success of timer_calc function for Monostable Mode    | Pointer to structure and choice of mode   | SUCCESS     | SUCCESS        | Scenario Based   |
| L_14        | To check time delay calculated                                 | Structure member - freq                   | 0.242       | 0.242          | Scenario Based   |
| L_15        | To check success of timer_calc function for Astable Mode       | Pointer to structure and choice of mode   | SUCCESS     | SUCCESS        | Scenario Based   |
| L_16        | To check frequency and duty cycle calculated                   | Structure member - freq                   | 4.373       | 4.373          | Scenario Based   |
| L_17        | To check failure of timer_calc function for wrong input        | Pointer to structure and choice of mode   | ERROR       | ERROR          | Scenario Based   |
| L_18        | To find battery runtime for given inputs                       | Battery capacity and discharge current    | 3030.30     | 3030.30        | Scenario Based   |
| L_19        | To find battery runtime for given inputs                       | Battery capacity and discharge current    | 333.33      | 333.33         | Scenario Based   |
| L_20        | To find reactance of capacitor                                 | Frequency of operation and capacitance    | 69080       | 69080          | Scenario Based   |
| L_21        | To find reactance of inductor                                  | Frequency of operation and inductance     | 125600      | 125600         | Scenario Based   |