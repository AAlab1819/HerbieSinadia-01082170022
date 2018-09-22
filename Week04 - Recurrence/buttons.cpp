#include <iostream>
using namespace std;

int main()
{
	int buttons;              //Number of buttons
	int tries = 0;            //Number of tries (starts at 0)
	int FINAL_TOTAL = 0;      //Final total

	cin >> buttons;           //Input number of buttons
	
  //Loop to test the worst case when n buttons have been pressed
	for (int a = 0; a <= buttons-1; a++)
	{
	    tries = tries + ((buttons - a) * a);      //Add amount of tries for when n buttons have been pressed
	}
	
	FINAL_TOTAL = tries + buttons;        //Add amount of tries with the amount of buttons
	
	cout << FINAL_TOTAL;                  //Print results
	  
	return 0;
}
