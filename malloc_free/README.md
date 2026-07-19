# 0x0a. C - malloc, free

## Description
This project focuses on the fundamentals of **dynamic memory allocation** in the C programming language. It explores how to manage memory on the heap using `malloc` and `free`, and highlights the difference between automatic and dynamic allocation.

## Learning Objectives
*   Understand the difference between automatic and dynamic memory allocation.
*   Learn the correct usage of `malloc` and `free`.
*   Master the use of `valgrind` to detect and prevent memory leaks.

## Task 0: Create Array
*   **File**: `0-create_array.c`
*   **Description**: A function that creates an array of characters and initializes it with a specific character.
*   **Prototype**: `char *create_array(unsigned int size, char c);`
*   **Logic**:
    *   Returns `NULL` if `size` is 0.
    *   Uses `malloc` to allocate memory for the array.
    *   Initializes each element with the provided character `c`.

## Requirements
*   **Editors**: `vi`, `vim`, `emacs`.
*   **Compilation**: Ubuntu 20.04 LTS using `gcc` with flags: `-Wall -Werror -Wextra -pedantic -std=gnu89`.
*   **Style**: Adheres to the Betty coding style.
*   **Constraints**: No global variables, no more than 5 functions per file, and only `malloc`, `free`, and `_putchar` are allowed.

## Author
*   **Sultan Yahya Jaafari**
