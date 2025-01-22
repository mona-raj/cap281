#include<iostream>
using namespace std;
int main()
{
    int marks;
    char grade;
    cout << "Enter marks: ";
    cin >> marks;
    int tensDigit = marks / 10;
    switch(tensDigit)
    {
        case 10 :
        case 9 :
            grade = 'A';
            break;
        case 8 :
            grade = 'B';
            break;
        case 7 :
            grade = 'C';
            break;
        case 6 :
            grade = 'D';
            break;
        case 5 :
            grade = 'E';
            break;
        default :
            grade = 'F';
            break;
    }
    cout << "Grade is " <<  grade << endl;
    return 0;
}