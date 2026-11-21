# OS-3: Memory Management

Practical exploration of C data types, memory allocation, and operating system memory management.

## Overview

This project explores how C programming language data types use memory and how an operating system manages memory through different memory segments. Practical programs are implemented and executed in a Linux environment to understand fundamental memory management concepts.

## Objectives

- Understand the memory sizes of different C data types.
- Explore the `sizeof()` operator in C.
- Identify different memory segments used by a running process.
- Understand stack and heap memory allocation.
- Examine variable addresses using pointers.
- Understand how the operating system organizes process memory.

## Laboratory Tasks

### Lab 1: Data Type Size Exploration

**Objective:** To observe the memory size occupied by different C data types using the `sizeof()` operator.

**Data types covered:**
- char
- int
- float
- double
- long
- unsigned int
- long long

**Key Learning:** Different data types occupy different amounts of memory depending on the system architecture and data model.

### Lab 2: Memory Segment Address Mapping

**Objective:** To investigate how variables are stored in different memory segments.

**Memory segments covered:**
- Text Segment
- Data Segment
- BSS Segment
- Heap
- Stack

**Key Learning:** Understand how global, local, static, and dynamically allocated variables are organized in process memory.

## Technologies and Tools

- Programming Language: C
- Operating System: Ubuntu Linux
- Compiler: GCC
- Environment: Docker
- Code Editor: Nano
- Version Control: GitHub

## Repository Structure

```text
OS-3-Memory-Management/
│
├── README.md
│
├── Source-Code/
│   ├── data_type_sizes.c
│   ├── memory_segments.c
│   └── pointer_heap.c
│
├── Screenshots/
│
└── Technical-Documentation/
    └── Lab-Report.md
```

## Learning Outcomes

After completing these laboratory exercises, the project aims to demonstrate:

- Understanding of memory allocation for C data types.
- Practical use of the `sizeof()` operator.
- Knowledge of process memory organization.
- Understanding of stack and heap memory.
- Ability to inspect variable addresses using pointers.
- Basic understanding of operating system memory management.

## Author

**Durga Shob**

BSc (Hons) Ethical Hacking and Cyber Security

## Project Status

In Progress
