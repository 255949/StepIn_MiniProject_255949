# TEST PLAN:

## Table no: High level test plan

| **Test_ID** | **Description**                                                     | **Exp I/P**                                                    | **Exp O/P**                 | **Actual Out** | **Type of Test**   |
|---------|-----------------------------------------------------------------|------------------------------------------------------------|-------------------------|------------|----------------|
| H_01    | Test function calculating the cutoff frequency of filter        | Structure with Filter parameters and choice of filter      | Cutoff Frequency        | SUCCESS    | Scenario Based |
| H_02    | Test function calculating the gain for opamp                    | Structure with OpAmp parameters and choice of gain         | Gain                    | SUCCESS    | Scenario Based |
| H_03    | Test function calculating frequency and duty cycle of 555 timer | Structure with Timer characteristics and mode of operation | Frequency or Time delay | SUCCESS    | Scenario Based |
| H_04    | Test function calculating battery runtime                       | Capacity of Battery and discharge current                  | Runtime                 | float time | Scenario Based |
| H_-5    | Test function calculating reactance                             | Frequency of operation and Capacitance/Inductance          | Reactance               | float reac |                |

## Table no: Low level test plan

| **Test ID** | **Description**                                              | **Exp IN** | **Exp OUT** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  L_01       |--------------------------------------------------------------|  ------------|-------------|----------------|Requirement based |
|  L_02       |--------------------------------------------------------------|  ------------|-------------|----------------|Scenario based    |
|  L_03       |--------------------------------------------------------------|  ------------|-------------|----------------|Boundary based    |