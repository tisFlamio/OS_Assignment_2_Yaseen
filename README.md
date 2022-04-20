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

# Input File
As mentioned above, the data.txt file is used for input for the program to run. The .txt file looks like this:

5 3 10 5 7 0 1 0 7 5 3 2 0 0 3 2 2 3 0 2 9 0 2 2 1 1 2 2 2 0 0 2 4 3 3
3 3 2

Which means there are 5 processes, 3 resource types. The first resource type has 10 units, second one has 5 unites, third one has 7 units. The following line means the first process has a allocation of resource (0, 1, 0) and the max need is (7, 5, 3), and so on and so forth. The second line refers to the available resources. 

# Compilation
To compile main.cpp, you may use the following command:

g++ -o main main.cpp

and to run, you may then use the following command:

./main
