# Week 7 — Functions & String Processing

## 📌 Overview

Week 7 focuses on functions and modular programming.

The exercises demonstrate how large problems can be divided into smaller reusable functions, improving code organization and readability.

---

## 📂 Exercises

### 7.1 — Find Maximum Using Function

The program receives four integers and finds the maximum value using a reusable function called `findmax()`.

The function compares two values and returns the larger one.

The function is then reused to find the maximum of four values.

### Concepts
- Functions
- Function declaration
- Function parameters
- Return values
- Ternary operator
- Modular programming

---

### 7.2 — Price Calculation

The program receives two item prices and two percentage values.

The `calculate()` function calculates the final price:

`Final Price = Price + (Price × Percentage / 100)`

The program then compares the two final prices.

### Concepts
- Functions
- Floating-point calculation
- Function parameters
- Return values
- Comparison

---

### 7.3 — Convert String Number to Integer

The program receives two numbers as strings and converts them into integers manually using `char_to_int()`.

The conversion works by processing each digit:

`result = result × 10 + digit`

The program then adds the two converted numbers.

### Concepts
- Character arrays
- String processing
- Functions
- ASCII character conversion
- Mathematical number construction

---

### 7.4 — String Case Conversion

The program receives a sentence and generates three versions:

- Capital → all uppercase
- Small → all lowercase
- Title → first letter of each word uppercase

The program uses functions from `<ctype.h>` such as:

- `toupper()`
- `tolower()`
- `isspace()`

### Concepts
- String processing
- Character functions
- `<ctype.h>`
- `<string.h>`
- Loops
- State tracking

---

### 7.5 — ID Card Generator

The program receives a name, age, and job, then passes the information to `print_id_card()`.

The function formats the information as a simple text-based ID card.

### Concepts
- Functions
- Character arrays
- Function parameters
- Formatted output
- String formatting

---

## 🧠 Skills Learned

- Function declaration
- Function parameters
- Return values
- Modular programming
- String processing
- Character manipulation
- Reusable code

## 🎯 Learning Outcome

Week 7 demonstrates how functions can make programs more organized, reusable, and easier to maintain.
