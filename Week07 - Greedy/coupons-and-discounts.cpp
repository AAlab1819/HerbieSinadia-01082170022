#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int sessions;           //Initialize number of training sessions
	int temp;               //Intialize teams
	int check = 0;          //Initialize checker variable

	cin >> sessions;        //Input number of training sessions

    //Loop to input number of teams in the a-th session and determmine final output
	for (int a = 0; a < sessions; a++)
	{
		cin >> temp;        //Input number of teams

        //If the team cannot be supported
		if(0 > (temp -= check))
        {
            break;      //Exit the loop
        }

		check = temp % 2;
	}
	cout <<(check?"NO":"YES");      //Print final output

	return 0;
}
