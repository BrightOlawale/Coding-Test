# Coding test 1

## Overview
This progranm returns fibonacci sequence based on the Addition, subtraction, multiplication, and division of the previous two numbers. The fibonacci sequence is a series of numbers where a number is the addition of the last two numbers, starting with 0, and 1. The sequence looks like this: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, etc. for example if the input for the fibonacci calculator is 5, the returned value is the 5th number in the sequence, which is 3. The program is written in C and the fibonnaci fuction is implemented using Dynamic Programming. 

## Development Environment
The development environment for this code follows a modular structure, consisting of three files: `fibbo.h`, `fibbo.c`, and `main.c`.

+ `fibbo.h` contains the function prototypes, type definitions, and header file inclusions necessary for the Fibonacci calculations and mathematical operations.
+ `fibbo.c` implements the actual functions for addition, subtraction, multiplication, division, and Fibonacci calculations.
+ `main.c` is the entry point of the program, where test cases are executed to showcase the functionality of the implemented functions.
You can modify and extend the code by adding new functions or test cases within these files.

## Cloning the Repository
Before compiling the code, you can clone the repository to obtain a local copy of the codebase. Follow the steps below:

1. Open a terminal or command prompt.

2. Change the current directory to the desired location where you want to clone the repository.

3. Execute the following command to clone the repository:

    ```shell
    git clone https://github.com/BrightOlawale/Coding-Test.git
    ```

## Compilation
To compile the code, you can use the `gcc` compiler. Follow the steps below:

1. Open a terminal or command prompt.

2. Navigate to the directory where you cloned the repository.

3. Execute the following command to compile the code:
  
      ```shell
      gcc -w fibbo.c main.c -o fibbo
      ```
    This command uses the GCC compiler (gcc) to compile fibbo.c and main.c together and generates an executable file named fibbo. The -w flag is used to turn off warnings during compilation.

## Execution
Once the code is successfully compiled, you can run the program using the following steps:

1. In the terminal or command prompt, ensure you are still in the directory containing the compiled executable (`fibbo.exe`).

2. Execute the following command:

    ```shell
    ./fibbo
    ```
    This command executes the compiled executable file and displays the output on the terminal or command prompt.

3. The program will perform various mathematical calculations, including Fibonacci calculations and other operations defined in the code.

Please note that the code provided includes additional test cases to demonstrate the functionality of the implemented functions.

