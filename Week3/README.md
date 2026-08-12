# Week 3 — Basic Input, Output & Data Processing

## 📌 Overview

Week 3 focuses on fundamental C programming concepts, including input/output operations, data types, arithmetic calculations, ASCII codes, string manipulation, and formatted output.

The exercises are designed to build a foundation for writing programs that receive input from users, process data, and display meaningful results.

---

## 📂 Exercises

### EX3_01 — ASCII Character

This program receives one alphabet character from the user and displays its ASCII value.

### Concepts
- `char` data type
- `scanf()`
- Character input
- ASCII representation
- Formatted output using `%c` and `%d`

The program demonstrates that a character can also be represented as an integer through its ASCII code.

---

### EX3_02 — Number Formatting & Calculation

This program receives an integer and demonstrates different ways of displaying and calculating the value.

The program:
- Displays the input as an integer
- Displays the value with decimal formatting
- Calculates the square of the number
- Divides the number by 79, 29, and 37
- Displays results with different decimal precision

### Concepts
- Integer and floating-point data types
- Arithmetic operators
- Type conversion
- `printf()` formatting
- Decimal precision

---

### EX3_03 — Fahrenheit to Celsius

This program converts a temperature from Fahrenheit to Celsius.

Formula:

`Celsius = (Fahrenheit - 32) × 5 / 9`

### Concepts
- `float`
- Mathematical formulas
- User input
- Floating-point calculation
- Formatted decimal output

---

### EX3_04 — String Input & Substrings

This program receives a string from the keyboard and extracts the first 7 and 15 characters.

The program uses:
- `fgets()` to receive a string
- `strcspn()` to remove the newline character
- `strncpy()` to copy part of a string

### Concepts
- Character arrays
- Strings in C
- `<string.h>`
- `fgets()`
- `strncpy()`
- String termination using `'\0'`

---

### EX3_05 — Lottery Number Processing

This program receives a lottery number and displays:

- The original number using 6 digits
- The number + 1
- The number - 1
- The first 3 digits
- The last 3 digits

### Concepts
- Integer arithmetic
- Integer division
- Modulo operator `%`
- Number formatting using `%06d` and `%03d`

For example, the program uses:

`number / 1000`

to obtain the first three digits and:

`number % 1000`

to obtain the last three digits.

---

## 🧠 Skills Learned

- Basic C syntax
- Input and output
- Variables and data types
- Arithmetic operations
- Type conversion
- ASCII codes
- String manipulation
- Formatted output
- Integer division and modulo

## 🎯 Learning Outcome

This week established the basic programming foundation required for later topics such as conditional statements, loops, functions, arrays, and structures.
