#include<iostream>
using namespace std;
int main()
{
    int a,b,tmp;
    cout << "Enter two numbers : " << endl << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;

    //swapping
    tmp = a;
    a = b;
    b = tmp;

    //Displaying
    cout << "After swapping" << endl << "a = " << a << endl << "b = " << b << endl;

    return 0;
}