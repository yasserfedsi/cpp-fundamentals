#include <iostream>

int main()
{
    int n = 1;

start:
    std::cout << "Number: " << n << std::endl;
    n++;

    if (n <= 5)
    {
        goto start;
    }

    std::cout << "Loop finished!" << std::endl;
    return 0;
}