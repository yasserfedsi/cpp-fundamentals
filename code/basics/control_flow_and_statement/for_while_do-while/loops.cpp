#include <iostream>

int main()
{
    std::cout << "For loop:" << std::endl;
    for (int i = 0; i < 5; ++i)
    {
        std::cout << "Iteration " << i << std::endl;
    }

    std::cout << "\nWhile loop:" << std::endl;
    int j = 0;
    while (j < 5)
    {
        std::cout << "Iteration " << j << std::endl;
        j++;
    }

    std::cout << "\nDo-while loop:" << std::endl;
    int k = 0;
    do
    {
        std::cout << "Iteration " << k << std::endl;
        k++;
    } while (k < 5);

    return 0;
}
