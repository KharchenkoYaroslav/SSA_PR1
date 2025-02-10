# Bit Inversion Utility

This repository is a student educational project. The provided code is a solution to the task described below. It is recommended to run this code on Linux systems.

## Task Description  
Write a function that inverts the bits of an unsigned 8-bit integer `x` and stores the result in `y`. The result should be printed in both binary and decimal forms. Additionally, implement the ability to invert only a specific range of bits, given as function parameters.  

### Example:  
**Input:** `x = 10101010` (binary)  
**Output:** `inverted = 01010101` (binary), `85` (decimal)  

## Code Explanation  

The program consists of a function `invertBits()` that takes three parameters:  
- `x`: an unsigned 8-bit integer (0–255)  
- `start`: the starting bit position for inversion (0–7)  
- `end`: the ending bit position for inversion (0–7)  

If the start or end positions are out of range or if the start position is greater than the end, the function prints an error message and returns the original value. Otherwise, it inverts the bits between the specified range using bitwise XOR (`^`).

The `printBinary()` function prints the binary representation of a given 8-bit integer.

## Technologies Used  

- **C Language** — [C Documentation](https://en.cppreference.com/w/c)  
- **GCC (GNU Compiler Collection)** — [GCC Official Website](https://gcc.gnu.org/)  
- **Linux OS** — [Linux Documentation](https://www.kernel.org/doc/html/latest/)
  
## How to Run  

1. Download a file invert_bits
2. Open a terminal and navigate to the directory containing the file.  
3. Run the program:
./invert_bits

You can also download a program file, invert_bits.c compile and run it.

