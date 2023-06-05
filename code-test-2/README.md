## Coding test 2

### Overview
This repository contains three C files implementing the same piecewise recurrence relation F(n) = F(n-3) + F(n-2) with different approaches. The goal is to compare the functions and discuss the advantages and disadvantages of each method.

## Development Environment
This directory contains three files: `first_method.c`, `second_method.c`, and `third_method.c`. These file contain the implementations of the functions for the first, second, and third methods respectively and can be compiled and executed independently. The `main.c` file is used to test the functions and compare the results. You can modify and extend the code by adding new functions or test cases within these files.

## Differences between the three approaches

### `first_method.c`
This file contains a recursive implementation of the piecewise recurrence relation. The function `recursiveFunction` takes an unsigned integer `n` as input and recursively calculates the value of F(n) using the given recurrence relation. The base cases are handled for n = 0, 1, and 2.

Advantages:

- Simple and intuitive implementation that directly reflects the recurrence relation.
- Easy to understand and reason about.

Disadvantages:

- Inefficient for larger values of n due to the redundant function calls. It recalculates the same values multiple times, leading to exponential time complexity.
- Recursive calls can lead to stack overflow errors for large values of n.

Time Complexity: Exponential (O(2^n))
Space Complexity: Linear (O(n)) due to the recursive stack usage.

### `second_method.c`
This file contains an iterative implementation of the piecewise recurrence relation using dynamic programming. The function `dynamicProgram` takes an unsigned integer `n` as input and iteratively calculates the value of F(n) using a memoization array. The array `memArray` is initialized with base cases and then filled in a loop from 3 to n.

Advantages:

- Efficient and faster than the recursive approach. Avoids redundant function calls by iteratively calculating and updating values in a loop.
- Uses dynamic programming with memoization to store previously computed values, reducing redundant calculations.
- Linear time complexity O(n) since each value is calculated once.

Disadvantages:

- Requires additional space to store the memoization array, which grows with the input size.
- The memoization array may occupy more memory than necessary if n is much smaller than the allocated array size.

Time Complexity: Linear (O(n))
Space Complexity: Linear (O(n))

### `third_method.c`
This file contains another implementation of the piecewise recurrence relation using dynamic programming and memoization. The function `memoizerFunction` takes an integer `n` as input and recursively calculates the value of F(n) using the given recurrence relation, similar to the first method. It also utilizes a static memoization array `memoizer` to store previously computed values.

Advantages:

- Efficient like the iterative approach but with a clearer implementation.
- Uses dynamic programming with memoization to avoid redundant calculations.
- Recursive implementation allows for easy understanding and readability.

Disadvantages:

- Requires additional space to store the memoization array, which is limited to a fixed size (1000 in this case).
- The fixed size of the memoization array limits the range of valid inputs and may lead to incorrect results or buffer overflows if n exceeds the array size.

Time Complexity: Linear (O(n))
Space Complexity: Constant (O(1)) for the static memoization array, but limited to a fixed size.

## Compilation and Execution
The code can be compiled and executed using the following commands:

```shell
gcc -w first_method.c -o first_method
./first_method
```

```shell
gcc -w second_method.c -o second_method
./second_method
```

```shell
gcc -w third_method.c -o third_method
./third_method
```

