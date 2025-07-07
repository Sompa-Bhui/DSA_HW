## 🔗 Linked List – Overview

### 📘 What is a Linked List?

A **Linked List** is a linear data structure where elements (nodes) are connected using pointers. Each node contains:

- **Data** – The value stored.
- **Pointer** – Reference to the next node (and/or previous node depending on the type).

Unlike arrays, linked lists do not require contiguous memory allocation, allowing dynamic memory management and efficient insertions/deletions.

---

### 📂 Types of Linked Lists

1. **Singly Linked List**
   - Nodes are connected in one direction.
   - Each node points to the next node.
   - Traversal is one-way (forward).

2. **Doubly Linked List**
   - Nodes have two pointers: `next` and `prev`.
   - Supports forward and backward traversal.

3. **Circular Linked List**
   - The last node points back to the first.
   - Can be singly or doubly circular.

4. **Doubly Circular Linked List**
   - Combines doubly and circular linked list features.
   - `next` of last node → first node  
     `prev` of first node → last node

---

### 📌 Why Use Linked Lists?

- Dynamic size (no fixed capacity like arrays)
- Efficient insertions/deletions (especially at the beginning/middle)
- Used in data structures like stacks, queues, graphs, hash maps, etc.


