# Memory Maps & Analysis Report

## Program 1: stack_example.c

### Overview

This program demonstrates stack memory using two functions: `main()` and
`function()`. Both functions contain local integer variables. No dynamic
memory allocation is performed, so there is no heap allocation in this
program.

The program prints the values and runtime addresses of the local variables.

### Step-by-Step Memory Maps

#### Step 1: Entering main()

When execution reaches the declaration of `x` in `main()`, an automatic
local variable named `x` exists in the stack frame of `main()`.

Stack:

```text
main() stack frame
+---------------------------+
| x                         |
| value: uninitialized      |
| address: 0x7fffbfa16414  |
+---------------------------+