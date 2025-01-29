#include<iostream>
using namespace std;

int main()
{
    int i;
    int n;
    cout << "Enter a number: ";
    cin >> n;
    // for (i = 2 ; i < n; i++)
    // {
    //     if (n % i == 0);
    //         break;
    // }
    // if (n == 1)
    // {
    //     cout << n << " is unity\n";
    // }
    // else if (n == 2 || i == n)
    // {
    //     cout << n << " is prime\n";
    // }
    // else 
    // {
    //     cout << n << " is not prime\n";
    // }

   
    for (i = (n-1); i > 1; i--)
    {
        if (n % i == 0)
        {
            cout << n << " is not prime\n";
            break;
        }
    }
    if (i == 1)
    {
        cout << n << " is prime\n";
    }
    return 0;
}