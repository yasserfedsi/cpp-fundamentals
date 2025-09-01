# Loops in C++

Loops are an essential concept in programming that allow you to execute a block of code repeatedly until a specific condition is met. In C++, there are three main types of loops: **for**, **while**, and **do-while**.

## For Loop

A for loop is used when you know the number of times you want to traverse through a block of code. It consists of an initialization statement, a condition, and an increment/decrement operation.

**Syntax:**

```cpp
int main()
{
    std::cout << "For loop:" << std::endl;
    for (int i = 0; i < 5; ++i)
    {
        std::cout << "Iteration " << i << std::endl;
    }
    return 0;
}

```

**Example (Executed Output):**

```
Iteration: 0
Iteration: 1
Iteration: 2
Iteration: 3
Iteration: 4
```

## While Loop

A while loop runs as long as a specified condition is true. The loop checks for the condition before entering the body of the loop.

**Syntax:**

```cpp
int main()
{
    std::cout << "\nWhile loop:" << std::endl;
    int j = 0;
    while (j < 5)
    {
        std::cout << "Iteration " << j << std::endl;
        j++;
    }
    return 0;
}

```

**Example (Executed Output):**

```
Iteration: 0
Iteration: 1
Iteration: 2
Iteration: 3
Iteration: 4
```

## Do-While Loop

A do-while loop is similar to a while loop, with the key difference being that the loop body is executed at least once, even when the condition is false.

**Syntax:**

```cpp
int main()
{
    std::cout << "\nDo-while loop:" << std::endl;
    int k = 0;
    do
    {
        std::cout << "Iteration " << k << std::endl;
        k++;
    } while (k < 5);

    return 0;
}

```

**Example (Executed Output):**

```
Iteration: 0
Iteration: 1
Iteration: 2
Iteration: 3
Iteration: 4
```

## Summary

Loops are an integral part of C++ programming that allow you to execute a block of code multiple times. The three types of loops in C++ are **for**, **while**, and **do-while**. Each type has its own specific use case and can be chosen depending on the desired behavior.

Visit the following resources to learn more:
