# printf Function Implementation

This C program implements a simplified version of the `printf` function. The `printf` function in C is used to print formatted output to the standard output (usually the console).

## File Structure

- `main.h`: Header file containing function prototypes and necessary library includes.
- `printf.c`: Source file containing the implementation of the `_printf` function.
- `main.c`: Example usage of the `_printf` function.

## Compilation

To compile the program, use a C compiler such as GCC:

```bash
gcc main.c printf.c -o my_printf
```
## Usage
In your C code, include the main.h header file, and you can use the _printf function to print formatted output. The _printf function supports the following format specifiers:

| Symbol | Operation |
|--|--|
| `c` | Prints character |
| `s` | Prints string |
| `%` | Prints modulus operator |
| `d` | Prints integer |
| `i` | Also prints integer |
| `h` | Converts from decimal and prints lowercase hexadecimal |
| `H` | Converts from decimal and prints lowercase hexadecimal |
| `r` | Reverses and prints string |
| `R` | Encodes and prints string using `rot13` |

