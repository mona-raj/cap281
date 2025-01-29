#include<iostream>
using namespace std;
int main()
{
    int n, reverse;
    cout << "Enter a number : ";
    cin >> n;
    reverse = 0;
    // temporary variable for iteration
    int i = n;
    while (i != 0)
    {
        int lastDigit = i % 10;
        reverse = (reverse * 10) + lastDigit;
        i = i / 10;
    }
    if (n == reverse)
    {
        cout << n << " is a palindrome\n";
    }
    else {
        cout << n << " is not a palindrome\n";
    }
    
    return 0;
}

