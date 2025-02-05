#include<iostream>
using namespace std;

int main() 
{
    int n;
    bool isPrime = false;
    cout << "Enter a number: ";
    cin >> n;
    
    if ( n > 1) {
        isPrime = true;
        for ( int i = 2 ; i < n ; i++)
        {
            if ( n % i == 0)
            {
                isPrime = false;
                break;
            }
        }
    }

    cout << n << " is " << (isPrime ? "prime" : "not prime") << endl;

    return 0;
}