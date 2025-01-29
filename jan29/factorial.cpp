#include<iostream>
using namespace std;
int main()
{
    int n, factorial;
    cout << "Enter a number : ";
    cin >> n;
    factorial = 1;
    for (int i = n; i >= 1; i--)
    {
        factorial *= i;
    }
    cout << factorial << endl;
    
    return 0;
}