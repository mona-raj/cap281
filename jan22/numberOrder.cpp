#include<iostream>
using namespace std;
int main()
{
    int a, b, c, max, min, mid;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    // max = (a>=b) ? ((a>=c) ? a : c) : ((b>=c) ? b : c);
    // min = (a<=b) ? ((a<=c) ? a : c) : ((b<=c) ? b : c);
    // mid = (a<=b) ? ((a>=c) ? a : c) : ((b>=c) ? b : c);
    // cout << "Max = " << max << "\nMin = " << min << "\nMid = " << mid << "\n";
    if ((a>=b && a<=c) || (a>=c && a<=b))
       mid =a;
    else if ((b>=a && b<=c) || (b>=c && b<=a))
        mid = b;
    else
        mid =c;
    cout << " middle number = " << mid << endl;
    return 0;
}