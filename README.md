# C Pointer and Function Pointer Examples

This repository contains a comprehensive collection of C code examples demonstrating fundamental and advanced concepts of pointers and function pointers. The examples are organized by lecture topics and include both runnable programs and code fragments.

## Overview

These examples cover:
- Basic pointer operations (&, * operators)
- Pointer arithmetic
- Call-by-reference vs call-by-value
- Const pointers
- Void pointers
- Arrays and pointer relationships
- Function pointers
- Advanced pointer concepts

## Repository Structure

The code is organized into two main sections:

### Section 1: Runnable Programs
Complete, compilable programs that demonstrate specific concepts. Each program includes:
- A description of what it demonstrates
- The complete source code
- Comments explaining key concepts

### Section 2: Code Fragments
Snippets and partial code examples showing specific syntax or patterns without complete program context.

## Topics Covered

### Lecture 2: Pointer Basics
- Memory addresses with `&` operator
- Dereferencing with `*` operator
- Pointer arithmetic with different data types
- Call-by-reference vs call-by-value function calls
- Const pointer variations
- Void pointers and type casting

### Lecture 3: Pointers and Arrays
- Array indexing equivalence (`arr[i] == *(arr+i)`)
- Using pointers to traverse arrays
- Negative array indexing
- Passing arrays to functions (call-by-reference)
- Efficient array access patterns

### Lecture 4: Function Pointers
- Function names as memory addresses
- Declaring and using function pointers
- Passing function pointers as parameters
- Returning function pointers from functions

## Compilation and Execution

All runnable programs can be compiled with any C compiler (gcc, clang, etc.):

```bash
# Compile a specific program
gcc -o program_name source_file.c

# Run the compiled program
./program_name
