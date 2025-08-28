# Arithmetic Operators in C++

Arithmetic operators are used to perform basic mathematical operations on variables such as integers and floating-point numbers.

---

## List of Arithmetic Operators

| Operator | Description               | Example |
| -------- | ------------------------- | ------- |
| `+`      | Addition                  | `a + b` |
| `-`      | Subtraction               | `a - b` |
| `*`      | Multiplication            | `a * b` |
| `/`      | Division                  | `a / b` |
| `%`      | Modulus (remainder)       | `a % b` |
| `++`     | Increment (increase by 1) | `++a`   |
| `--`     | Decrement (decrease by 1) | `--a`   |

---

## Code Example

```cpp
#include <iostream>

// Initialize variables
int a = 15;
int b = 10;

// Perform arithmetic operations
int sum = a + b;
int difference = a - b;
int product = a * b;
int quotient = a / b;
float floatQuotient = float(a) / float(b);
int modulus = a % b;

// Demonstrate increment and decrement
int incrementX = ++a;
int incrementY = ++b;
int incrementZ = incrementX + incrementY;

int decrementX = --a;
int decrementY = --b;
int decrementZ = decrementX - decrementY;

int main() {
    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Difference: " << difference << std::endl;
    std::cout << "Product: " << product << std::endl;
    std::cout << "Quotient: " << quotient << std::endl;
    std::cout << "Float Quotient: " << floatQuotient << std::endl;
    std::cout << "Modulus: " << modulus << std::endl;
    std::cout << "Increment X: " << incrementX << std::endl;
    std::cout << "Increment Y: " << incrementY << std::endl;
    std::cout << "Increment Z: " << incrementZ << std::endl;
    std::cout << "Decrement X: " << decrementX << std::endl;
    std::cout << "Decrement Y: " << decrementY << std::endl;
    std::cout << "Decrement Z: " << decrementZ << std::endl;
    return 0;
}
```

# Logical Operators in C++

Logical operators are used to evaluate expressions and combine conditions. They return a **boolean value** — either `true (1)` or `false (0)`.

---

## List of Logical Operators

| Operator | Description                                         | Example            |
|----------|-----------------------------------------------------|--------------------|
| `&&`     | Logical AND → true only if both conditions are true | `(a > 0 && b > 0)` |
| `\|\|`     | Logical OR → true if at least one condition is true | `(a > 0 \|\| b > 0)` |
| `!`      | Logical NOT → inverts the truth value               | `!(a < 0)`         |
---

## Code Example

```cpp
#include <iostream>

// Initialize variables
int a = 5;
int b = 10;

int main()
{
    // AND Operator (&&)
    if (a > 0 && b > 0) {
        std::cout << "Both a and b are positive." << std::endl;
    }

    // OR Operator (||)
    if (a > 0 || b > 0) {
        std::cout << "At least one of a or b is positive." << std::endl;
    }

    // NOT Operator (!)
    if (!(a < 0)) {
        std::cout << "a is not negative." << std::endl;
    }

    // Combining multiple logical operators
    if (!(a < 0 && b < 0) && (a > 0 || b > 0)) {
        std::cout << "At least one of a or b is positive, and neither is negative." << std::endl;
    }

    return 0;
}
```
