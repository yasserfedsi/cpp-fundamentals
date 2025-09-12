# C++ Control Flow Statements

This guide covers three important control flow statements in C++:

- **if-else**
- **switch**
- **goto**

---

## 1. `if-else` Statement

The `if-else` statement is used for decision making. It lets your program choose between two or more paths based on conditions.

### Syntax:

```cpp
if (condition) {
    // code runs if condition is true
} else {
    // code runs if condition is false
}
```

### Example:

```cpp
#include <iostream>
using namespace std;

int main() {
    int age = 18;

    if (age >= 18) {
        cout << "You are an adult." << endl;
    } else {
        cout << "You are a minor." << endl;
    }

    return 0;
}
```

---

## 2. `switch` Statement

The `switch` statement is used when you want to choose between multiple options based on the value of a variable.

### Syntax:

```cpp
switch (expression) {
    case value1:
        // code if expression == value1
        break;
    case value2:
        // code if expression == value2
        break;
    default:
        // code if no case matches
}
```

### Example:

```cpp
#include <iostream>
using namespace std;

int main() {
    int day = 3;

    switch (day) {
        case 1: cout << "Monday"; break;
        case 2: cout << "Tuesday"; break;
        case 3: cout << "Wednesday"; break;
        case 4: cout << "Thursday"; break;
        case 5: cout << "Friday"; break;
        case 6: cout << "Saturday"; break;
        case 7: cout << "Sunday"; break;
        default: cout << "Invalid day"; break;
    }

    return 0;
}
```

---

## 3. `goto` Statement

The `goto` statement lets you jump to a labeled part of the program. It is generally discouraged, but can be useful in special cases.

### Syntax:

```cpp
goto label;
...
label:
    // code to run
```

### Example:

```cpp
#include <iostream>
using namespace std;

int main() {
    int n = 1;

start:
    cout << "Number: " << n << endl;
    n++;

    if (n <= 5) {
        goto start;  // jump back to label
    }

    cout << "Loop finished!" << endl;
    return 0;
}
```

---

## 📌 Key Notes

- Use **if-else** for simple conditions.
- Use **switch** when you have many discrete values to check.
- Use **goto** sparingly; prefer loops (`for`, `while`) for clarity.

---

Now you know how to control the flow of your C++ programs!
