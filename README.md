
# <h1 align="center">School 42 printf()</h1>

This repository contains all files for the __printf__ project from School 1337 Coding School cursus. The project consist in duplicate the [`printf()`](https://es.wikipedia.org/wiki/Printf) function, part of the `stdio.h` library.

<h2 align="center">
	<a href="#about">About</a>
	<span> · </span>
	<a href="#index">Index</a>
	<span> · </span>
	<a href="#requirements">Requirements</a>
	<span> · </span>
	<a href="#instructions">Instructions</a>
</h2>

## About
This project consists in duplicate the behavior of the C function `printf()`. It is not necessary to implement the buffer management of the original function. It must handle the following parameters:

- `char` type variables.
- `string` type variables.
- `int` type variables.
- `unsigned int` type variables.
- hexadecimal `int` type variables (uppercase and lowercase).
- `pointer` type variables.


### Structure
The main obstacles during the execution of the project have been: handling a variable number of parameters and the function `ft_printf()` returning an `int`.

#### `va_list`
To deal with the variable number of parameters entered, the macros `va_list`, `va_start`, `va_arg` and `va_end` have been used. The `ft_printf()` function calls the `ft_fotmat()` function when it finds the `%` sign among the entered parameters, then it checks the next character in the string to call one of the functions that print the different variable types. To use this macro, the libraryt `<stdarg.h>` is included in the `ft_printf.h`.

## Requirements
The functions are written in __C language__ and need the `gcc` compiler, with `<stdlib.h>`, `<stdarg.h>` and `<unistd.h>` standard libraries to run.

## Instructions

### 1. Compiling the archives

To compile the proiect, go to its path and run:

For __mandatory__ functions:
```
$ make
```
### 2. Cleaning all binary (.o) and executable files (.a)

To delete all files generated with make, go to the path and run:
```
$ make fclean
```

### 3. Using it in your code

To use this project in your code, simply include this header:
```
#include "ft_printf.h"
```
