# Simple C++ Console Calculator

## 📌 Description
This is a simple console-based calculator written in C++ that performs basic arithmetic operations: **addition** and **subtraction**.
The program uses an `enum` to represent operations and handles exceptions for invalid input or incorrect operator selection.

## 🚀 Features
- Addition of two numbers  
- Subtraction of two numbers  
- Displays a list of available operations  
- Handles invalid input (e.g., when the user enters a non-numeric value)  
- Handles errors when the selected operator does not exist  

## 📂 Project Structure

```

project/ │ ├── Calculator.h      # Header file with the Operators enum and Calculate function prototype ├── Calculator.cpp    # Implementation of the Calculate function ├── main.cpp          # Program entry point └── README.md         # Documentation

````

> ⚠ Note: In your code, the file is named `Calcualtor.h` (typo). It's recommended to rename it to `Calculator.h` for clarity.

## 🛠 Compilation & Run

### Compile with g++:
```bash
g++ main.cpp Calculator.cpp -o calculator
````

### Run:

```bash
./calculator
```

## 📋 Example Output

```
Enter first value: 5
Enter second value: 3
Select operator:
1. Sum
2. Sub
1
Result: 8
```

## ⚠ Possible Errors

- **Invalid input! Please enter a number.** — occurs if a non-numeric value is entered.
- **Error: Invalid operator** — occurs if the selected operator number is not in the list.

## 💡 Ideas for Improvement

- Add multiplication and division
- Add division-by-zero checks
- Support operator input as symbols (`+`, `-`)
- Use `double` instead of `float` for higher precision
