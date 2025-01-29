// workers
// week
// 8hr -15
// >8hr -20

#include <iostream>
using namespace std;
int main()
{
    int noOfEmployee, hoursInDay, salaryOfDay, totalSalary;
    string name, dayOfWeek;
    

    cout << "Enter no of employees : ";
    cin >> noOfEmployee;
    for (int i = 1; i <= noOfEmployee; i++)
    {
        cout << "Welcome. Enter name : ";
        cin >> name;
        hoursInDay = 0;
        salaryOfDay = 0;
        totalSalary = 0;
        for (int j = 1; j <= 5; j++)
        {

            dayOfWeek = (j == 1) ? "Monday" : ((j == 2) ? "Tuesday" : ((j == 3) ? "Wednesday" : (j == 4) ? "Thursday" : "Friday"));

            // switch (j)
            // {
            // case 1:
            //     dayOfWeek = "Monday ";
            //     break;
            // case 2:
            //     dayOfWeek = "Tuesday ";
            //     break;
            // case 3:
            //     dayOfWeek = "Wednesday ";
            //     break;
            // case 4:
            //     dayOfWeek = "Thurdsay ";
            //     break;
            // case 5:
            //     dayOfWeek = "Friday ";
            //     break;
            // default:
            //     break;
            // }

            cout << "No of hours worked on " << dayOfWeek;
            cin >> hoursInDay;

            // calculating salary for an employee
            if (hoursInDay <= 8)
            {
                salaryOfDay = hoursInDay * 15;
            }
            else
            {
                salaryOfDay = (8 * 15) + ((hoursInDay - 8) * 20);
            }

            totalSalary += salaryOfDay;
        }

        // displaying salary of employee
        cout << "Name : " << name << endl << "Salary : " << totalSalary << endl;
    }

    return 0;
}