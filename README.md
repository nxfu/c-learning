# C Learning Repository

A personal, progressive journey through the C programming language.

Every lesson is a small, self-contained program that introduces one concept, and every practice program combines concepts from the lessons that came before it. The repository is kept deliberately simple: no build system, no frameworks, just single files that can be compiled and run one at a time.

For what has been covered so far and what comes next, see [ROADMAP.md](ROADMAP.md).

## Folders

Lesson folders are numbered in the order they are meant to be studied:

| Folder | Topic |
| --- | --- |
| [`01_basics/`](01_basics) | Program structure, data types, variables, `printf`, `scanf`, `fgets` |
| [`02_operators/`](02_operators) | Arithmetic, relational, logical, assignment, ternary, casting, and bitwise |
| [`03_control_flow/`](03_control_flow) | `if`, `else if`, `else`, nested `if`, and `switch` |
| [`04_loops/`](04_loops) | `for`, `while`, `do-while`, nested loops, `break`, and `continue` |
| [`05_functions/`](05_functions) | Declarations, parameters, return values, `void`, scope, and recursion |
| [`06_arrays_and_strings/`](06_arrays_and_strings) | Arrays, strings, arrays in functions, and command-line arguments |
| [`07_user_defined_types/`](07_user_defined_types) | `enum`, `typedef`, `struct`, and `union` |
| [`11_headers/`](11_headers) | Standard library headers and custom headers |
| [`99_programs/`](99_programs) | Practice programs, from beginner exercises to a small project |

## Repository structure

Every file, in the order it is meant to be read. Click a section to expand it.

<details>
<summary><strong>01_basics</strong> — first programs, values, and input/output</summary>

| File | What it covers |
| --- | --- |
| [`hello_world.c`](01_basics/hello_world.c) | The shape of a C program: `#include`, `main`, and `return 0` |
| [`variables.c`](01_basics/variables.c) | Declaring, initializing, reassigning, and `const` |
| [`data_types.c`](01_basics/data_types.c) | `char`, `int`, `float`, `double`, `bool`, `void`, and their sizes |
| [`printf.c`](01_basics/printf.c) | Format specifiers (`%d`, `%f`, `%c`, `%s`) and escape sequences |
| [`scanf.c`](01_basics/scanf.c) | Reading numbers, the `&` operator, and checking the return value |
| [`fgets.c`](01_basics/fgets.c) | Reading a full line of text safely and removing the newline |

</details>

<details>
<summary><strong>02_operators</strong> — working with values</summary>

| File | What it covers |
| --- | --- |
| [`arithmetic.c`](02_operators/arithmetic.c) | `+ - * / %`, `++`, `--`, and integer vs. decimal division |
| [`type_casting.c`](02_operators/type_casting.c) | `(float)` casts, implicit conversion, and what gets lost |
| [`assignment.c`](02_operators/assignment.c) | `=` and the compound forms `+= -= *= /= %=` |
| [`relational.c`](02_operators/relational.c) | `== != > < >= <=`, and why `==` is not `=` |
| [`logical.c`](02_operators/logical.c) | `&&`, `\|\|`, `!`, and how C treats 0 as false |
| [`ternary.c`](02_operators/ternary.c) | `condition ? value_if_true : value_if_false` |
| [`bitwise.c`](02_operators/bitwise.c) | `&`, `\|`, `^`, `~`, `<<`, `>>` working on individual bits |

</details>

<details>
<summary><strong>03_control_flow</strong> — making decisions</summary>

| File | What it covers |
| --- | --- |
| [`if_else.c`](03_control_flow/if_else.c) | `if`, `else if`, and `else` |
| [`nested_if.c`](03_control_flow/nested_if.c) | An `if` inside another `if`, applied to a discount |
| [`switches.c`](03_control_flow/switches.c) | `switch`, `case`, `break`, `default`, and when to prefer it over `else if` |

</details>

<details>
<summary><strong>04_loops</strong> — repeating work</summary>

| File | What it covers |
| --- | --- |
| [`for_loop.c`](04_loops/for_loop.c) | Initialization, condition, and final-expression in one statement |
| [`while_loop.c`](04_loops/while_loop.c) | Repeating while a condition holds, and avoiding infinite loops |
| [`do_while_loop.c`](04_loops/do_while_loop.c) | Running the body once before testing the condition |
| [`nested_loops.c`](04_loops/nested_loops.c) | Rows and columns, printing a multiplication table |
| [`break_continue.c`](04_loops/break_continue.c) | Leaving a loop early and skipping a single repetition |

</details>

<details>
<summary><strong>05_functions</strong> — reusable blocks of code</summary>

| File | What it covers |
| --- | --- |
| [`void_function.c`](05_functions/void_function.c) | A function that acts but returns nothing, plus prototypes |
| [`add_function.c`](05_functions/add_function.c) | Parameters, arguments, and returning a result |
| [`return_function.c`](05_functions/return_function.c) | Several functions combined with a menu (`square` and `cube`) |
| [`variable_scope.c`](05_functions/variable_scope.c) | Local vs. global variables, shadowing, and block scope |
| [`recursion.c`](05_functions/recursion.c) | A function calling itself, with a base and a recursive case |

</details>

<details>
<summary><strong>06_arrays_and_strings</strong> — collections of values</summary>

| File | What it covers |
| --- | --- |
| [`1d_array.c`](06_arrays_and_strings/1d_array.c) | Indexing from 0, changing elements, length with `sizeof` |
| [`2d_array.c`](06_arrays_and_strings/2d_array.c) | Rows and columns, visited with nested loops |
| [`arrays_and_functions.c`](06_arrays_and_strings/arrays_and_functions.c) | Passing an array to a function, and why it is not copied |
| [`strings.c`](06_arrays_and_strings/strings.c) | Character arrays and the null terminator (the `<string.h>` functions are in `11_headers/string.c`) |
| [`command_line_arguments.c`](06_arrays_and_strings/command_line_arguments.c) | `argc` and `argv`, reading values given when the program starts |

</details>

<details>
<summary><strong>07_user_defined_types</strong> — making your own types</summary>

| File | What it covers |
| --- | --- |
| [`enum.c`](07_user_defined_types/enum.c) | Naming integer constants, and default vs. explicit values |
| [`typedef.c`](07_user_defined_types/typedef.c) | Giving an existing type a second, clearer name |
| [`structs.c`](07_user_defined_types/structs.c) | Grouping related values into a record, and arrays of structs |
| [`unions.c`](07_user_defined_types/unions.c) | Sharing one memory location between members, and tracking which one is set |

</details>

<details>
<summary><strong>11_headers</strong> — the standard library and your own headers</summary>

| File | What it covers |
| --- | --- |
| [`stdbool.c`](11_headers/stdbool.c) | `bool`, `true`, and `false` from `<stdbool.h>` |
| [`string.c`](11_headers/string.c) | `strlen`, `strcpy`, `strcat`, `strcmp` from `<string.h>` |
| [`ctype.c`](11_headers/ctype.c) | `isalpha`, `isdigit`, `toupper`, `tolower` from `<ctype.h>` |
| [`math.c`](11_headers/math.c) | `sqrt`, `pow`, `round`, `ceil`, `floor`, `fabs` from `<math.h>` |
| [`stdlib.c`](11_headers/stdlib.c) | `atoi`, `atof`, `abs`, `rand`, `srand` from `<stdlib.h>` |
| [`time.c`](11_headers/time.c) | `time_t`, `time`, `ctime`, `difftime` from `<time.h>` |
| [`unistd.c`](11_headers/unistd.c) | `sleep` and `getpid` from `<unistd.h>` — Linux and macOS only |
| [`windows.c`](11_headers/windows.c) | `Sleep` from `<windows.h>` — Windows only |
| [`custom_headers.h`](11_headers/custom_headers.h) | Include guards, shared constants, function declarations |
| [`custom_headers.c`](11_headers/custom_headers.c) | Using that header and defining the functions it declares |

</details>

<details>
<summary><strong>99_programs</strong> — practice programs</summary>

<details>
<summary><code>01_beginner/</code> — conditions and simple input</summary>

| File | What it practises |
| --- | --- |
| [`even_odd.c`](99_programs/01_beginner/even_odd.c) | The modulus operator with `if-else` |
| [`age_check.c`](99_programs/01_beginner/age_check.c) | A function returning a yes/no result, with text input |
| [`age_group.c`](99_programs/01_beginner/age_group.c) | An `else if` chain ordered so every range is reachable |
| [`greatest_number.c`](99_programs/01_beginner/greatest_number.c) | Comparing three values |
| [`triangle_type.c`](99_programs/01_beginner/triangle_type.c) | Logical operators plus validity checks |
| [`traffic_light.c`](99_programs/01_beginner/traffic_light.c) | An `enum` driving a `switch` |

</details>

<details>
<summary><code>02_mathematical/</code> — formulas</summary>

| File | What it practises |
| --- | --- |
| [`circle_sphere.c`](99_programs/02_mathematical/circle_sphere.c) | `const`, `double` precision, area and volume |
| [`compound_interest.c`](99_programs/02_mathematical/compound_interest.c) | `pow` from `<math.h>` and validated input |

</details>

<details>
<summary><code>03_calculators_and_converters/</code> — menus and branching</summary>

| File | What it practises |
| --- | --- |
| [`calculator.c`](99_programs/03_calculators_and_converters/calculator.c) | A `switch` on an operator character, guarding division by zero |
| [`calculator_switch.c`](99_programs/03_calculators_and_converters/calculator_switch.c) | The same idea driven by a numbered menu instead |
| [`temperature_converter.c`](99_programs/03_calculators_and_converters/temperature_converter.c) | Two-way conversion and operator precedence in formulas |
| [`weight_converter.c`](99_programs/03_calculators_and_converters/weight_converter.c) | Two-way conversion driven by a numeric choice |
| [`cart_value.c`](99_programs/03_calculators_and_converters/cart_value.c) | Mixing `fgets` text input with numeric input |

</details>

<details>
<summary><code>04_loops_and_logic/</code> — loops in practice</summary>

| File | What it practises |
| --- | --- |
| [`loop_till_n.c`](99_programs/04_loops_and_logic/loop_till_n.c) | Counting up to a number the user chooses |
| [`rows_and_columns.c`](99_programs/04_loops_and_logic/rows_and_columns.c) | Nested loops drawing a grid of symbols |
| [`countdown.c`](99_programs/04_loops_and_logic/countdown.c) | A `do-while` countdown with a pause — Windows only |
| [`random_number.c`](99_programs/04_loops_and_logic/random_number.c) | `rand` and `srand` within a range |

</details>

<details>
<summary><code>05_games/</code> — interactive programs</summary>

| File | What it practises |
| --- | --- |
| [`guess_number.c`](99_programs/05_games/guess_number.c) | A loop with feedback, a try counter, and invalid-input recovery |
| [`quiz_game.c`](99_programs/05_games/quiz_game.c) | Arrays of questions, options, and answers |
| [`rock_paper_scissors.c`](99_programs/05_games/rock_paper_scissors.c) | Several functions working together with random choices |

</details>

<details>
<summary><code>06_projects/</code> — putting it together</summary>

| File | What it practises |
| --- | --- |
| [`bank_account.c`](99_programs/06_projects/bank_account.c) | A menu loop, functions, a running balance, and validation |

</details>

</details>

<details>
<summary><strong>Root files</strong></summary>

| File | Purpose |
| --- | --- |
| [`main.c`](main.c) | A scratch file used for quick experiments |
| [`README.md`](README.md) | This file |
| [`ROADMAP.md`](ROADMAP.md) | Progress so far and the topics planned next |

</details>

## How each lesson file is written

Lesson files follow the same layout so they can be read in any order:

```c
#include <stdio.h>

// INTRO:
// A short explanation of the concept and the important members of its category.

// SYNTAX:
// A generic template using placeholders, not the variable names of this program.

int main(void) {
    // A small, runnable example of the concept.
    return 0;
}
```

The `SYNTAX` block shows the general pattern with placeholder names such as `variable` or `condition`, while the code below it uses real, meaningful names.

## Building and running

Any single file with a `main` function can be compiled on its own with GCC:

```sh
gcc 01_basics/hello_world.c -o hello_world
./hello_world
```

Keeping warnings on while learning is recommended:

```sh
gcc -Wall -Wextra 01_basics/hello_world.c -o hello_world
```

A few files need extra care:

- Programs that use `<math.h>` need the math library on Linux and macOS: `gcc 11_headers/math.c -o math -lm`
- `11_headers/unistd.c` only compiles on Linux and macOS.
- `11_headers/windows.c` and `99_programs/04_loops_and_logic/countdown.c` only compile on Windows.
- `11_headers/custom_headers.c` includes `custom_headers.h` from the same folder, so no extra compiler flags are needed.

## Contributing and reuse

This is a personal learning repository, so the code favours clarity over cleverness and deliberately avoids techniques that have not been reached yet in the roadmap. Corrections, clearer explanations, and bug reports are welcome. If you are learning C yourself, feel free to work through the folders in order and use the practice programs as exercises.
