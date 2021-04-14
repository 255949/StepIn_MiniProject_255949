# Requirements
## Introduction
 - The electronics parameters calculator is a useful utility for electronics hobbyists and professionals alike. By enetering the required parameters, the user will be able to directly get access to a lot of information regarding selection of passive components for projects, complex values required for inductors and capacitors, life of a battery, etc.
 - By working on this project I was able to revise all important concepts of C Programming while also designing a tool that would prove helpful to a lot of electronics enthusiasts.

## Research
### Importance of Electronics Utilities
- Designing electronic circuits is a fun process but there is a lot of math involved in it as well. The usual microntrollers come with prebuilt PCBs that are basically plug and play, but for anyone looking to design their own hardware from scratch, the numerous calculations required can become a hassle.
- Any system requires a large number of passive components and even specialized ICs need to be provided with the proper passive attachments in order to function properly.
- New electronics hobbyists can find the complex calculations involving frequencies, reactances and minute values overwhelming.
- By utilizing such resources, people can simply input their requirements and get the desired values of the parameters that they are trying to find.

### Cost
- The cost of the project mostly depends on the time spent by the developers to write the code for implementing the functions
- The monetary cost is minimal
- Applications of the values calculated by the utility can be in a number of fields and areas which can have costs ranging from low for small projects to high for larger and more complex applications.

### Features
- Modular program which can be easily modified to include new functions and parts
- Simple command line interaction with user, can be developed further for more attractive graphical interface
- Easy to utilize commands and output can be used directly in real world applications

## Defining Our System
<img src="/1_Requirements/System_Architecture.png">

- The program creates multiple functions for calculation of different parameters
- Usage of pointers, structures and function pointers
- Depending on need, more functions can be easily implemented

## SWOT Analysis
<img src="/1_Requirements/SWOT_Analysis.png">

# 4W&#39;s and 1&#39;H

## Who:

* Any electronics enthusiast, hobbyists or student.

## What:

* The mathematical complexity of electronics design can be reduced by such a utility. The paramaters calculated can be easily used for real world implementation.

## When:

* Anyone who is new to electronics design faces these issues in the beginning, and even later the utility can be used for convenience.

## Where:

* Colleges where student are beginning to learn design concepts, smaller industries to calculate more complex parameters.

## How:

* Wrong implementation of the utility can result in wrong output which can severely affect the real world project or system.

# Detail requirements
## High Level Requirements:
| ID   | Description                                                       | Category  | Status      |
|------|-------------------------------------------------------------------|-----------|-------------|
| HR01 | Accept User Choice                                                | Technical | Implemented |
| HR02 | User should be able to Filter Parameters                          | Technical | Implemented |
| HR03 | User should be able to OpAmp Parameters                           | Technical | Implemeted  |
| HR03 | User should be able to frequency and Duty cycle of 555 Timer      | Technical | Implemented |
| HR04 | User should be able to find Battery run time                      | Technical | Implemented |
| HR05 | User should be able to find reactance of inductors and capacitors | Technical | Implemented |
| HR06 | Add more functions                                                | Technical | Future      |
| HR06 | Add Graphical User Interface                                      | Technical | Future      |

##  Low level Requirements:
| ID   | Description                                                              | HLR ID | Status      |
|------|--------------------------------------------------------------------------|--------|-------------|
| LR01 | Display options for User                                                 | HR01   | Implemented |
| LR02 | Accept user choice                                                       | HR01   | Implemented |
| LR03 | Accept type of Filter from user - RC, RL or LC                           | HR02   | Implemented |
| LR04 | For RC filter, accept values of R and C                                  | HR02   | Implemented |
| LR05 | For RL filter, accept values of R and L                                  | HR02   | Implemented |
| LR06 | For LC filter, accept values of L and C                                  | HR02   | Implemented |
| LR07 | Accept choice for Inverting or Non-Inverting Gain for Opamp              | HR03   | Implemented |
| LR08 | Input values of configuration resistors R1 and R2                        | HR03   | Implemented |
| LR09 | Accept choice of mode of operation of 555 timer- Astable or Monostable   | HR04   | Implemented |
| LR10 | Accept values of R and C for Monostable mode of operation                | HR04   | Implemented |
| LR11 | Accept values of R1,R2 and C for Astable mode of operation               | HR04   | Implemented |
| LR12 | Accept Battery capacity and discharge current                            | HR05   | Implemented |
| LR13 | Accept Frequency and Capacitance/Inductance for Reactance calculation    | HR05   | Implemented |
| LR14 | Come up with ideas for more functions required by electronic enthusiasts | HR06   | Future      |