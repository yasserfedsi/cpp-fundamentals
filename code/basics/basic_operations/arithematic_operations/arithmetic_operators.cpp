#include <iostream>

// Initialize variables
int a = 15;
int b = 10;

// Addition Operator
int sum = a + b;

// Substraction Operator
int difference = a - b;

// Multiplication Operator
int product = a * b;

// Division Operator
int quotient = a / b;
float floatQuotient = float(a) / float(b);

// Modulus Operator
int modulus = a % b;

// Increment Operator
int incrementX = ++a;
int incrementY = ++b;
int incrementZ = incrementX + incrementY;

// Decrement Operator
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