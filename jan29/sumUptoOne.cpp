#include<iostream>
using namespace std;
int main()
{
    int n,sum;
    cout << "Enter a number : ";
    cin >> n;
    sum = 0;
    for (int i = n; i >= 1; i--)
    {
        sum += i;
    }
    cout << sum << endl;
    
    return 0;
}