#include<iostream>
using namespace std;
int main()
{
    string name;
    int age;
    float cgpa;
    char grade;

    //Getting data
    // cout << "Enter name, age, cgpa, grade : ";
    // cin >> name >> age >> cgpa >> grade;

    cout << "Enter name : ";
    cin >> name;
    cout << "Enter age : ";
    cin >> age;
    cout << "Enter cgpa : ";
    cin >> cgpa;
    cout << "Enter grade : ";
    cin >> grade;

    //Displaying data
    cout << endl << "Data entered is : " << endl << "Name : " << name << endl << "Age : " << age << endl << "CGPA : " << cgpa << endl << "Grade : " << grade << endl;
    return 0;
}