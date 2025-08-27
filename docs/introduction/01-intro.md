## What is C++?

C++ is a general-purpose programming language created by Bjarne Stroustrup as an extension of the C programming language. First introduced in 1985, it provides object-oriented features such as classes and inheritance. C++ is widely used in areas like game development, system programming, embedded systems, and high-performance computing.

Being a statically typed language, the type of a variable is determined at compile time. C++ also includes the C++ Standard Library, which offers a rich collection of functions, algorithms, and data structures.

Because C++ builds upon C, most C programs can be compiled and executed using a C++ compiler.

## Code Example

```cpp
#include <iostream>

// Function to add two integers
int add(int a, int b)
{
    return a + b;
}

class Calculator
{
public:
    // A member function to multiply two numbers
    int multiply(int a, int b)
    {
        return a * b;
    }
};

int main()
{
    // Declaring variables

    int x = 5;
    int y = 2;

    // Using the standalone function `add`
    int sum = add(x, y);
    std::cout << "Sum is: " << sum << std::endl;

    // Using the member function `multiply` of the `Calculator` class
    Calculator calc;
    int product = calc.multiply(x, y);
    std::cout << "Product is: " << product << std::endl;

    return 0;
}
```
