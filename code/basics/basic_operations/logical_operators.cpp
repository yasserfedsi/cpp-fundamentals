#include <iostream>

// Initializing variables
int a = 5;
int b = 10;

int main()
{
    // AND Operator (&&)
    if (a > 0 && b > 0)
    {
        // Both a and b are positive
        std::cout << "Both a and b are positive." << std::endl;
    }

    // OR Operator (||)
    if (a > 0 || b > 0)
    {
        std::cout << "At least one of a or b is positive." << std::endl;
    }

    // NOT Operator (!)
    if (!(a < 0))
    {
        std::cout << "a is not negative." << std::endl;
    }

    // Let's create something more complex
    if (!(a < 0 && b < 0) && (a > 0 || b > 0))
    {
        std::cout << "At least one of a or b is positive, and neither is negative." << std::endl;
    }
    return 0;
}