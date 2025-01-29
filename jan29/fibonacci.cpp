#include<iostream>
using namespace std;
int main()
{
    int n, fn, sn, nextTerm;
    int i;
    cout << "Enter first digit : ";
    cin >> fn;
    cout << "Enter second digit : ";
    cin >> sn;
    cout << "Enter number of digits in series : ";
    cin >> n;
    cout << fn << "\t" << sn << "\t";
    // since we are printing two numbers before, hence we execute the loop two times less
    for (i = 1; i <= (n-2); i++)    
    {
        nextTerm = fn + sn;
        int tmp = sn;
        sn = nextTerm;
        fn = tmp;
        cout << nextTerm << "\t";
    }
    cout << endl;
    
    return 0;
}