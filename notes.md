## Basics
### I/O
```cpp
#include<iostream>
int main()
{
    std::cout << "Hello world\n";
    return 0;
}
```

::  scope resolution operator

To avoid using ::, we use -- using namespace std
```cpp
#include<iostream>
using namespace std;
int main()
{
    cout << "Hello world\n";
    return 0;
}
```

* Instead of using '\n' we can use endl 
* Use multiple << | cin << a << b | to append 

```cpp
    //Getting data
    cout << "Enter name : ";
    cin >> name;
    cout << "Enter age : ";
    cin >> age;

    //Displaying data
    cout << endl << "Data entered is : " << endl << "Name : " << name << endl << "Age : " << age << endl;
```

### Common Problems
1. swap using tmp
    ```cpp
    tmp = a;
    a = b;
    b = tmp;
    ```

2. swap without tmp
    ```cpp
    a += b;
    b = a - b;
    a = a - b;
    ```