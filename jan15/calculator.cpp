#include <iostream>
using namespace std;
int main()
{
    int a, b;
    char o;
    cout << "Enter two numbers : " << endl
         << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "Enter operator {+,-,*,/,%} : ";
    cin >> o;

    switch (o)
    {
    case '+':
        cout << a << o << b << " = " << a + b << endl;
        break;
    case '-':
        cout << a << o << b << " = " << a - b << endl;
        break;
    case '*':
        cout << a << o << b << " = " << a * b << endl;
        break;
    case '/':
        cout << a << o << b << " = " << (float)a / b << endl;
        break;
    case '%':
        cout << a << o << b << " = " << a % b << endl;
        break;
    default:
        cout << "Invalid operator" << endl;
        break;
    }

    return 0;
}