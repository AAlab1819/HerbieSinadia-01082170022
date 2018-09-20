#include <iostream>
#include <set>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int stage;			    //Number of levels
    int littleX;        //Little X levels
    int littleY;        //Little Y levels
	
    cin >> stage;			  //Input number of levels
 
    set<int> PlayerSet;		//Declare set
	
	  //Input loop
    for(int i = 0; i < 2; i++)
    {
        cin >> littleX;			//Input little X level
		
		    //Second input loop for little Y
        for(int j = 0; j < littleX; j++)
        {
            cin >> littleY;
            PlayerSet.insert(littleY);
        }
    }
	
	  //Check if all levels can be passed by checking set size
    if(PlayerSet.size() == stage)
	{
        cout<<"I become the guy.";
	}
	
	  //If PlayerSet.size() is lower than levels
    else
	{
        cout<<"Oh, my keyboard!";
	}
	
	return 0;
}
