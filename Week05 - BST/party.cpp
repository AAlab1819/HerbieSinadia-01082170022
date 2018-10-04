#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int employees;             //Declare number of employees
    int answer = 0;            //Declare final answer/output
    int counter = 0;

    cin >> employees;          //Input number of employees

    int i[employees + 9];

    /*
    EmployeeA is superior to EmployeeB if:
        1. A is manager of B
        2. C is manager of B which has A as his/her manager
    i[f] will denote manager of i-th employee
    */

    for(int f = 1 ; f <= employees ;f++)
    {
        cin >> i[f];            //Enter employee manager
    }

    //Check for valid groups that can be formed
    for(int f = 1 ; f <= employees ;f++)
    {
        counter = 0;        //Set default counter to 0
        int q = i[f];       //Set q to the current employee in current index

        //While current employee in index has no immediate manager(s)
        while(q != -1)
        {
            q = i[q];       //No immediate manager
            counter++;
        }

        answer = max(answer , counter);         //Set amount of valid groups
    }

    cout << answer+1;           //Print amount of valid groups
    return 0;
}
