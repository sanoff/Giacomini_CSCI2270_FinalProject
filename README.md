# Giacomini_CSCI2270_FinalProject

## Project Summary

This program is designed to act as a task list using a linked list as the running structure behind it. By using a linked list the program creates only as many data types the user gives it, maximizing memory in return. The user can either insert the new task by appending it to the end or traversing through the list to the position they desire. The program also incoporates a bubble sorting algorithm to sort the list from shortest to longest and vice versa by minutes. Once a task or the set of tasks has been completed, they can be deleted. This program stores information using a struct with the title being a string and the time in minutes as an int. 

## How to Run

User can clone repo using "git clone https://github.com/suveck/Giacomini_CSCI2270_FinalProject.git" and will receive 4 files:

  1) README.md 
  
  2) ToDoList.cpp 
  
  3) ToDoList.h 
  
  4) main.cpp 
  
The user will open up the ToDoList.cpp, ToDoList.h, and main.cpp and compile these files pulling up the terminal. Inside the terminal, the user will notice 10 options that they can choose from. It must be noted that the list must be hand built using the first two commands. The first command will add the task to the end of the list whilst the second will place in appropriate position. After the user has created their set of tasks, they can manipulate these tasks with the other eight functions. As noted above, the user can sort their list, display the shortest or longest task, and additionally delete tasks when they have been completed. Furthermore, after each function has been executed, the user must select option three to see the present status of the list. 

## Dependancies

The standard C++ library is used including iostream. 

## System Requirements

This program has only been tested on Linus with Code::Blocks operating systems. 

## Group Members

Landon Ledbetter

Kyle Giacomini

## Contributors 

N/A

## Open Issues/Bugs

1. As of yet there is no input tester to check for integer validity on expected integer inputs.
2. minor memory leak in the deleteAllInstances meathod.
3. current implementation of string input only allows for 1 space character.
