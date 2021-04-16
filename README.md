# Electronics Parameters Calculator with SDLC

<img src="/1_Requirements/Electronics Parameters Calculator.png">


| Build                                                                                       | Code Quality | Unity | [Git Inspector](using github.io option) |
|---------------------------------------------------------------------------------------------|--------------|-------|-----------------------------------------|
| [![C/C++ Build CI](https://github.com/255949/StepIn_MiniProject_255949/actions/workflows/c-cpp.yml/badge.svg)](https://github.com/255949/StepIn_MiniProject_255949/actions/workflows/c-cpp.yml) | [![Static Check](https://github.com/255949/StepIn_MiniProject_255949/actions/workflows/cppcheck.yml/badge.svg)](  https://github.com/255949/StepIn_MiniProject_255949/actions/workflows/cppcheck.yml)[![Dynamic Check](https://github.com/255949/StepIn_MiniProject_255949/actions/workflows/dynamic_quality.yml/badge.svg)](  https://github.com/255949/StepIn_MiniProject_255949/actions/workflows/dynamic_quality.yml)[![Coverage](https://github.com/255949/StepIn_MiniProject_255949/actions/workflows/coverage.yml/badge.svg)](  https://github.com/255949/StepIn_MiniProject_255949/actions/workflows/coverage.yml) [![Codacy Badge](https://app.codacy.com/project/badge/Grade/42d51a7f07224e83be3421c54bceea6a)](https://www.codacy.com/gh/255949/StepIn_MiniProject_255949/dashboard?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=255949/StepIn_MiniProject_255949&amp;utm_campaign=Badge_Grade)     | [![Unity Test](https://github.com/255949/StepIn_MiniProject_255949/actions/workflows/unity.yml/badge.svg)](https://github.com/255949/StepIn_MiniProject_255949/actions/workflows/unity.yml)       |[![GitInspector](https://github.com/255949/StepIn_MiniProject_255949/actions/workflows/gitinspector.yml/badge.svg)](https://github.com/255949/StepIn_MiniProject_255949/actions/workflows/gitinspector.yml)                                         |


## Folder Structure
Folder             | Description
-------------------| -----------------------------------------
`1_Requirements`   | Documents detailing requirements and research
`2_Design`         | Documents specifying design details
`3_Implementation` | All code and documentation
`4_Test_plan`      | Documents with test plans and procedures

## Contributors List and Summary

PS No. |  Name   |    Features    | Issuess Raised |Issues Resolved|No Test Cases|Test Case Pass
-------|---------|----------------|----------------|---------------|-------------|--------------
255949 | Ayushman Ranu  | Function Implementation, Diagrams and Comments    | 0    | 0  | 21   | 21       

## Challenges Faced and How Was It Overcome

| ID | Problem                                     | Solution                                                      |
|----|---------------------------------------------|---------------------------------------------------------------|
| 1. | Unity Test Case Failing                     | Incorrect Makefile command, changing the code fixed the error |
| 2. | Problem during function call with structure | Pointer to structure fixed the error                          |
| 3. | Functions returning very small values led to 0 being displayed on output | Changed function to return larger values and edited the calculation part |

## Learning Resources
1. Futureskills Learning Resources
2. [C Code Visualizer](http://pythontutor.com/c.html#mode=edit)
3. Electronics Devices and Circuits by R.L Boylestad