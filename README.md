*This project has been created as part of the 42 curriculum by aakhiyat.*

# Libft

## Description

Libft is an individual project from the 42 curriculum. The goal is to create a personal C library by reimplementing several functions from the standard C library and developing additional utility functions.

The project focuses on understanding how C works internally, particularly memory management, pointers, strings, and linked lists.

The result is a static library called `libft.a`, which can be reused in future C projects.

### Objectives

- Understand and manipulate pointers.
- Learn dynamic memory allocation and deallocation.
- Reimplement standard C library functions.
- Work with strings and memory manipulation.
- Understand singly linked lists.
- Learn how to create and use static libraries.
- Improve problem-solving and debugging skills.

## Instructions

### Requirements

- C compiler (`cc` or `gcc`).
- GNU Make.
- Unix-like operating system.

### Compilation

Clone the repository:

```bash
git clone <repository-url>
cd libft
```

Compile the library:

```bash
make
```

### Makefile Commands

| Command | Description |
|---|---|
| `make` | Compiles the library (Parts 1, 2 and 3). |
| `make clean` | Removes object files (`.o`). |
| `make fclean` | Removes object files and `libft.a`. |
| `make re` | Recompiles the library from scratch. |

### Using the Library

Include the header in your C source file:

```c
#include "libft.h"
```

Compile your program with the library:

```bash
cc main.c -L. -lft -o program
```

Run the program:

```bash
./program
```

## Functions

### Part 1 — Libc Functions

Reimplementations of standard C library functions.

**Character Classification and Conversion**

- `ft_isalpha`
- `ft_isdigit`
- `ft_isalnum`
- `ft_isascii`
- `ft_isprint`
- `ft_toupper`
- `ft_tolower`

**String Functions**

- `ft_strlen`
- `ft_strchr`
- `ft_strrchr`
- `ft_strncmp`
- `ft_strlcpy`
- `ft_strlcat`
- `ft_strnstr`
- `ft_atoi`

**Memory Functions**

- `ft_memset`
- `ft_bzero`
- `ft_memcpy`
- `ft_memmove`
- `ft_memchr`
- `ft_memcmp`
- `ft_calloc`
- `ft_strdup`

### Part 2 — Additional Functions

Additional functions created to manipulate strings, manage memory, and write data to file descriptors.

**String Manipulation**

- `ft_substr`
- `ft_strjoin`
- `ft_strtrim`
- `ft_split`
- `ft_itoa`
- `ft_strmapi`
- `ft_striteri`

**File Descriptor Output**

- `ft_putchar_fd`
- `ft_putstr_fd`
- `ft_putendl_fd`
- `ft_putnbr_fd`

### Part 3 — Linked Lists

Implementation of singly linked list manipulation functions using the `t_list` structure.

- `ft_lstnew`
- `ft_lstadd_front`
- `ft_lstsize`
- `ft_lstlast`
- `ft_lstadd_back`
- `ft_lstdelone`
- `ft_lstclear`
- `ft_lstiter`
- `ft_lstmap`

## Resources

### Documentation and References

- [42 Libft Subject](https://cdn.intra.42.fr/pdf/pdf/227634/en.subject.pdf)
- [cppreference — C Library](https://en.cppreference.com/w/c/header)
- [GNU C Library Documentation](https://www.gnu.org/software/libc/manual/)
- [Linux Manual Pages](https://man7.org/linux/man-pages/)
- [C Programming — Memory Management](https://en.cppreference.com/w/c/memory)

### AI Usage

AI tools, particularly ChatGPT, were used as educational and debugging assistance throughout the development of this project.

They were used for:

- Understanding C programming concepts, including pointers, memory allocation, and linked lists.
- Explaining the behavior and requirements of standard C library functions.
- Identifying logical errors and debugging implementation issues.
- Exploring edge cases and creating test scenarios.
- Understanding compiler errors and Norminette requirements.
- Clarifying the behavior of functions and their interactions.

AI was used as a learning resource to support the development process. The implementation, testing, and final decisions regarding the code were handled by the student.

## Author

**aakhiyat**

42 Student