# Week 9 — Pointers

## 📌 Overview

Week 9 introduces pointers in C programming.

The exercise demonstrates how a function can directly modify a variable from another function by passing its memory address.

---

## 📂 Exercise

### 9.1 — Add Money Using Pointer

The program starts with a wallet containing 20 units of money.

The user enters an amount of money to add.

The program then calls:

`add_money_from_wallet(&wallet, income);`

The `&wallet` passes the memory address of the wallet variable to the function.

Inside the function:

`*wallet += money;`

The `*wallet` accesses the original variable through its address and updates its value.

---

## 🔍 Pointer Concept

The basic flow is:

```text
wallet variable
      ↓
   &wallet
      ↓
memory address
      ↓
add_money_from_wallet()
      ↓
     *wallet
      ↓
modify original value
