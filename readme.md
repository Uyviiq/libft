# Libft

Libft is the first project in the 1337/42 Common Core curriculum. The goal is to create a personal C library by reimplementing useful standard C library functions and developing additional utilities.

## Features

- **Character checks:** `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`
- **String manipulation:** `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, and more
- **Memory management:** `ft_memset`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_calloc`, and more
- **Conversions:** `ft_atoi`, `ft_itoa`
- **Output functions:** Functions for writing characters, strings, and numbers to file descriptors
- **Linked lists:** Creation, insertion, deletion, iteration, and manipulation of linked-list nodes
- **Additional utilities:** String splitting, trimming, joining, mapping, and other helper functions

## Compilation

Clone the repository and enter the project directory:

```bash
git clone https://github.com/Uyviiq/libft
cd libft
```

Compile the library using Make:

```bash
make
```

This generates the static library `libft.a`.

To remove object files:

```bash
make clean
```

To remove all generated files:

```bash
make fclean
```

To recompile the library:

```bash
make re
```

## Usage

Include the library header in your C source file:

```c
#include "libft.h"
```

Compile your program with the library:

```bash
cc main.c -L./include ./lib/libft.a -o program
```

## Learning Objectives

- Strengthen C programming fundamentals.
- Understand pointers, memory allocation, and memory manipulation.
- Practice string processing and type conversions.
- Learn to work with structures and linked lists.
- Build and manage a static library using a Makefile.

## Author

Developed as part of the 1337/42 Common Core curriculum.
