# Valgrind Analysis Report

## Program 1: valgrind_example.c

### Overview

This program intentionally contains several memory-safety problems so that Valgrind can detect them.

The program allocates an array for three integers:

```c
array = malloc(3 * sizeof(int));
