#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int stones;       //Initialize number of stones
	cin >> stones;    //Input number of stones
  
   //Initialize price arrays
	long long price1[stones];     
	long long price2[stones];
  
  //Loop to input price of stones
	for(int i = 0; i < stones; i++)
	{
		cin >> price1[i];
		price2[i] = price1[i];
	}

	sort(price2,price2+stones);     //Sort the stone prices using STL sort
	int k = 0;
  
  //Loop to add second price array with first price array
	for(int i=1;i<stones;i++)
	{
		price1[i] += price1[i-1];
		price2[i] += price2[i-1];
	}
	int questions,ask1,ask2,ask3;     //Initialize questions

	cin >> questions;       //Input number of questions
  
  //Loop to input questions and determine cheapest number of stones
	while(questions--)
	{
		cin >> ask1 >> ask2 >> ask3;      //Input three questions
    
		if(ask1 == 1)
		{
			cout << price1[ask3-1] - ((ask2-2>=0)? price1[ask2-2]:0)<<endl;     //Print answer
		}

		else
		{
			cout << price2[ask3-1] - ((ask2 - 2 >= 0)? price2[ask2-2]:0)<<endl;     //Print answer
		}
	}
	return 0;
}
