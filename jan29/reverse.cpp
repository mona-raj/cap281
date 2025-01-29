#include<iostream>
using namespace std;
int main()
{
    int n, reverse;
    cout << "Enter a number : ";
    cin >> n;
    reverse = 0;
    while (n != 0)
    {
        int lastDigit = n %10;
        reverse = (reverse * 10) + lastDigit;
        n = n / 10;
    }
    cout << "Reverse = " << reverse << endl;
    
    return 0;
}