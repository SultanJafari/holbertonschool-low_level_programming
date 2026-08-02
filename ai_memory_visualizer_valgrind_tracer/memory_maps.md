# Memory Maps

## 1. stack_example.c

### Execution Point 1: main()

Stack:
+----------------------+
| main()               |
| local variable: x    |
| address: 0x...       |
+----------------------+

Heap:
No heap allocation.

### Execution Point 2: function call

Stack:
+----------------------+
| function()           |
| local variable: ...  |
+----------------------+
| main()               |
| x                    |
+----------------------+

The function's local variables exist only while its stack frame
is active.

### Lifetime

- `x` is created when `main()` starts.
- `x` remains valid until `main()` returns.
- The local variable inside `function()` becomes invalid when
  `function()` returns.
