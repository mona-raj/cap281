#include<iostream>
using namespace std;
int main()
{
    int tableOf, tableUpto;
    cout << "Enter a number: ";
    cin >> tableOf;
    cout << "Enter upto which multiple: ";
    cin >> tableUpto;
    
    for (int i = 1; i <= tableUpto; i++)
    {
        cout << tableOf << " * " << i << " = " << tableOf * i << endl; 
    }
    return 0;
}