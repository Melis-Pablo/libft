# Libft

## 📚 Overview

Libft is my own implementation of a C standard library featuring essential functions used throughout the 42 curriculum. This project marks the foundation of my programming journey at 42 School, where I built each function from scratch to deeply understand memory management, string manipulation, and data structures in C.

## 🔧 Features

### String Manipulation
- Character classification (`ft_isalpha`, `ft_isdigit`, `ft_isalnum`, etc.)
- String examination (`ft_strlen`, `ft_strchr`, `ft_strrchr`, etc.)
- String transformation (`ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, etc.)

### Memory Management
- Memory allocation (`ft_calloc`)
- Memory operations (`ft_memset`, `ft_memcpy`, `ft_memmove`, etc.)

### Conversion Functions
- String to integer conversion (`ft_atoi`)
- Integer to string conversion (`ft_itoa`)

### File Operations
- Character and string output (`ft_putchar_fd`, `ft_putstr_fd`, etc.)

### Linked List Management (Bonus Part)
- List creation and manipulation (`ft_lstnew`, `ft_lstadd_front`, `ft_lstadd_back`, etc.)
- List traversal (`ft_lstsize`, `ft_lstlast`, `ft_lstiter`, etc.)
- List cleaning (`ft_lstdelone`, `ft_lstclear`)

## 📋 Implementation Details

The library is divided into three main sections:

1. **Libc Functions**: Reimplementations of standard C library functions.
2. **Additional Functions**: Useful functions not present in the standard library.
3. **Bonus Functions**: Advanced functions for linked list manipulation.

All functions are implemented with a focus on:
- Memory efficiency
- Error handling
- Norm compliance (42 School's coding standards)
- Clear, maintainable code

## 🚀 Usage

### Compilation

The library can be compiled using the provided Makefile:

```bash
# Clone the repository
git clone https://github.com/Melis-Pablo/libft.git
cd libft

# Compile mandatory functions
make

# Compile with bonus functions
make bonus

# Clean object files
make clean

# Clean object files and library
make fclean

# Rebuild the library
make re
```

### Integration

To use this library in your projects:

1. Include the header file in your C source:
   ```c
   #include "libft.h"
   ```

2. Compile your program with the library:
   ```bash
   cc -Wall -Wextra -Werror your_program.c -L. -lft -o your_program
   ```

### Example Usage

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    // String manipulation example
    char *original = "Hello, 42 School!";
    char *substring = ft_substr(original, 7, 2);
    printf("Original: %s\nSubstring: %s\n", original, substring);
    free(substring);

    // Linked list example (when compiled with bonus)
    t_list *list = NULL;
    t_list *node1 = ft_lstnew("First Node");
    t_list *node2 = ft_lstnew("Second Node");

    ft_lstadd_back(&list, node1);
    ft_lstadd_back(&list, node2);

    printf("\nList content:\n");
    ft_lstiter(list, (void (*)(void *))printf);

    ft_lstclear(&list, NULL);

    return (0);
}
```

## 📝 Learning Outcomes

Through this project, I developed a deeper understanding of:

- Low-level memory operations in C
- Pointer manipulation and memory allocation
- String handling without standard library functions
- Linked list implementation and management
- Creating clean, reusable code components
- Makefile creation and proper project structure

## 🔍 Function Reference

For a complete reference of all functions and their specifications, please see the [libft.md](libft.md) file.

## ⚠️ Notes

- This library was developed according to 42 School's curriculum requirements.
- All functions comply with the 42 Norm coding standards.
- Memory management has been carefully implemented to prevent leaks.

---

*This project is part of the 42 School Common Core curriculum.*