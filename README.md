# OS_Assignment_2_Yaseen
Contains Assignment code for Fall 2022 Operating Systems class at Kent State University, completed by Yaseen Shaikh. 

# Overview
This assignment simulates the Banker's Algorithm for resource allocation and deadlock avoidance, in C++. 
The main.cpp file reads in process and resource data from data.txt and:
  - Allocates resources
  - Determines the order in which processes are safe

# Dependencies
The standard namespace is used in this assignment, as well as iostream. In addition the code was developed in a Linux environment, but that is not necessarily to run the code. 

In addition, a properly formatted input file is required. Provided in this repository is the data.txt file, which contains properly formatted input data for the program to run correctly. 

# Compilation
To compile main.cpp, you may use the following command:

g++ -o main main.cpp

and to run, you may then use the following command:

./main
