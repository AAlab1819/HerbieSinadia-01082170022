#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <cstdlib>
using namespace std;

int main()
{
    
	int lanterns;				//Declare number of lanterns
	int street_length;			//Declare length of street
	int point;					//Declare lantern positions
	
    cin >> lanterns >> street_length;			//Input amount of lanterns and street length
	
    int array[lanterns];		//Declare array with size = number of lanterns
	
	//Input lanterns at i-th point
    for (int i = 0; i < lanterns; i++)
	{
        cin >> array[i];
	}
	
    sort(array, array + lanterns);			//Sort array using STD sort 
	
    point = max(array[0], street_length - array[lanterns - 1]) * 2;			//Initialize diameter
	
	//Set diamater with the strongest light
    for (int i = 0; i < lanterns - 1; i++)
	{
        point = max(point, array[i + 1] - array[i]);
	}

    cout.precision(20);			//Set value digit precision
	
    cout << fixed << point / 2.0 << endl;			//Output radius to light the street with fixated floating point values) 
	
    return 0;
	
}
