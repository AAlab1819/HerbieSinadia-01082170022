#include <iostream>
#include <vector>
#include <cstring>
#include <map>
#include <algorithm>

using namespace std;

int main()
{
    map <string, int> system;           //Declare user database
    int users;                          //Declare number of users

	string name;                        //Declare username
    cin >> users;                       //Input amount of users

    //Loop to register users in the system
    for (int a = 0; a < users; a++)
    {
        cin >> name;        //Input username

        //If username is not yet taken
        if (system.count(name) == 0)
        {
            cout << "OK" << endl;           //Print "OK!"
            system[name] = 1;               //Add number of said username
        }

        //If the username is already taken/exists in the database
        else
        {
            cout << name << system[name] << endl;       //Output username + number of duplicates
            system[name] += 1;                          //Add duplicate/same username count by 1
        }
    }
    return 0;
}
