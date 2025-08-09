# Roadmap

This file tracks what has been learned so far and what comes next. The repository itself is the source of truth: a topic is marked complete once it has a working example committed, and the folders for topics that have not been reached yet are simply not there.

Legend: `[x]` complete · `[ ]` not started

The sections below are grouped by folder, which is also the order the topics were learned in. The practice programs in `99_programs/` are the one thing that does not follow it, because they are grouped by the kind of program they are rather than by what they need; see [Learning order](README.md#learning-order) for which lesson each of them depends on.

## Completed

### 01 — Basics

- [x] Program structure: `#include`, `main`, statements, and `return 0`
- [x] Variables, initialization, and `const`
- [x] Data types: `char`, `int`, `float`, `double`, `bool`, and `void`
- [x] Output with `printf`, format specifiers, and escape sequences
- [x] Input with `scanf`, and checking its return value
- [x] Reading lines of text with `fgets`

### 02 — Operators

- [x] Arithmetic: `+`, `-`, `*`, `/`, `%`, `++`, `--`
- [x] Assignment: `=`, `+=`, `-=`, `*=`, `/=`, `%=`
- [x] Relational: `==`, `!=`, `>`, `<`, `>=`, `<=`
- [x] Logical: `&&`, `||`, `!`
- [x] Ternary: `condition ? value_if_true : value_if_false`
- [x] Type casting, and integer vs. floating-point division
- [x] Bitwise: `&`, `|`, `^`, `~`, `<<`, `>>`

### 03 — Control flow

- [x] `if`, `if-else`, and `else if`
- [x] Nested `if`
- [x] `switch`, `case`, `break`, and `default`

### 04 — Loops

- [x] `for`
- [x] `while`
- [x] `do-while`
- [x] Nested loops
- [x] `break` and `continue`

### 05 — Functions

- [x] Declarations (prototypes), definitions, and calls
- [x] Parameters and arguments
- [x] Return values
- [x] `void` functions
- [x] Variable scope: local, global, and block scope
- [x] Recursion, with a base case and a recursive case

### 06 — Arrays and strings

- [x] One-dimensional arrays, indexing, and length with `sizeof`
- [x] Two-dimensional arrays with nested loops
- [x] Passing arrays to functions
- [x] Strings as character arrays, and the null terminator
- [x] Command-line arguments: `int main(int argc, char *argv[])`

### 07 — User-defined types

- [x] `enum`
- [x] `typedef`
- [x] `struct`: members, the dot operator, and arrays of structs
- [x] `union`: sharing one memory location, and how it differs from a struct

### 11 — Headers

- [x] `stdbool.h` — `bool`, `true`, `false`
- [x] `string.h` — `strlen`, `strcpy`, `strcat`, `strcmp`
- [x] `ctype.h` — `isalpha`, `isdigit`, `toupper`, `tolower`
- [x] `math.h` — `sqrt`, `pow`, `round`, `ceil`, `floor`, `fabs`
- [x] `stdlib.h` — `atoi`, `atof`, `abs`, `rand`, `srand`
- [x] `time.h` — `time_t`, `time`, `ctime`, `difftime`
- [x] `unistd.h` and `windows.h` — pausing a program on each platform
- [x] Custom headers — include guards, shared constants, and declarations

## Next up

These are the planned topics, in the order they should be learned. Each folder will appear in the repository as its topic is worked through.

### 08 — Pointers

- [ ] Addresses, the `&` and `*` operators, and `NULL`
- [ ] Pointers and arrays, including pointer arithmetic
- [ ] Passing pointers to functions to modify the caller's variables

### 09 — Memory management

- [ ] `malloc` and checking for `NULL`
- [ ] `calloc`
- [ ] `realloc`
- [ ] `free`, memory leaks, and dangling pointers

### 10 — File handling

- [ ] `fopen` modes (`"r"`, `"w"`, `"a"`) and checking for `NULL`
- [ ] Writing with `fprintf` and `fputs`
- [ ] Reading with `fgets` and `fscanf`
- [ ] Closing a file with `fclose`

### 11 — Headers

- [ ] Split a program across two source files and compile them together (`gcc main.c helper.c -o program`)
