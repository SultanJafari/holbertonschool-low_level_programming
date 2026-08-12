#### Project Description: Doubly Linked Lists

This project is a core part of the C programming curriculum at **Holberton / ALX**. It focuses on building and managing advanced data structures, specifically **Doubly Linked Lists**, which differ from singly linked lists by having each node contain two pointers: one pointing to the next node (`next`) and another pointing to the previous node (`prev`).

---

### Project Files and Implemented Functions:

* **`lists.h`**: The primary header file containing the structure definition (`dlistint_t`) and the prototypes for all functions used in the project.
* **`0-print_dlistint.c`**: Prints all elements of a doubly linked list and returns the number of nodes.
* **`1-dlistint_len.c`**: Counts and returns the total number of elements in a doubly linked list.
* **`2-add_dnodeint.c`**: Adds a new node at the **beginning** of a doubly linked list, carefully updating the `head` and `prev` pointers.
* **`3-add_dnodeint_end.c`**: Adds a new node at the **end** of a doubly linked list.
* **`4-free_dlistint.c`**: Frees the memory allocated for all nodes in the list to prevent memory leaks.
* **`5-get_dnodeint.c`**: Returns the specific node at a given index.
* **`6-sum_dlistint.c`**: Calculates and returns the sum of all data (`n`) stored in the doubly linked list.
* **`7-insert_dnodeint.c`**: Inserts a new node at a given position or index.
* **`8-delete_dnodeint.c`**: Deletes the node at a specific index, properly reconnects adjacent nodes, and frees the deleted node's memory.

---

### Learning Objectives:

1. Master advanced pointer manipulation and dynamic memory management (`malloc` and `free`).
2. Understand the mechanics of bidirectional node linking (forward and backward traversal).
3. Handle edge cases effectively, such as empty lists or insertions/deletions at the very beginning or end.
