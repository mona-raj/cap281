#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout << "Enter two numbers : " << endl << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;

    a += b;
    b = a - b;
    a = a - b;

    cout << "After swapping" << endl << "a = " << a << endl << "b = " << b << endl;

    return 0;
}