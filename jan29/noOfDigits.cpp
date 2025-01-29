#include <iostream>
using namespace std;
int main()
{
    int n, count;
    cout << "Enter a number : ";
    cin >> n;
    count = 0;
    while (n != 0)
    {
        count++;
        n = n / 10;
    }
    cout << "No of Digits = " << count << endl;

    return 0;
}