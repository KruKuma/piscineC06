# piscineC06

42 Piscine C06 exercises.

This repository contains my solutions for the C06 project from the 42 Piscine.  
The project focuses on command-line arguments, `argc`, `argv`, string output, reversing parameters, and sorting program arguments in C.

## Exercises

| Exercise | Name | Status |
|---|---|---|
| ex00 | ft_print_program_name | Done |
| ex01 | ft_print_params | Done |
| ex02 | ft_rev_params | Done |
| ex03 | ft_sort_params | Done |

## Project structure

```txt
piscineC06/
├── ex00/
├── ex01/
├── ex02/
├── ex03/
└── .gitignore
```

Each folder contains the required file for the corresponding exercise.

## Topics covered

- Command-line arguments
- `argc` and `argv`
- Printing program names
- Printing parameters
- Reversing parameter order
- Sorting strings
- String comparison
- String output with `write`
- 42 Norminette formatting

## Compilation

Example compilation:

```sh
cc -Wall -Wextra -Werror ex00/ft_print_program_name.c
```

Example usage:

```sh
./a.out hello world 42
```

For testing, each exercise can be compiled separately.  
Before submitting to 42, unnecessary testing code and unused includes should be removed.

## Notes

This repository is part of my 42 Piscine preparation.  
The goal of C06 is to understand how C programs receive and handle command-line arguments using `argc` and `argv`.

## Author

KruKuma
