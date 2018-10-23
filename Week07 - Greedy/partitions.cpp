#include <iostream>
using namespace std;

int main()
{
    int num;                    //Initialize variable for amount of numbers
    int input;                  //Initialize input variable
    int partition1 = 0;         //Initialize partition 1 (positive integers)
    int partition2 = 0;         //Initialize partition 2 (negative integers)

    cin >> num;                 //Input amount of numbers
  
    //Loop to input each individual value
    for (int a = 0; a < num; a++)
    {
        cin >> input;         //Input number to be inserted to a partition
        
        //If the inserted number is negative
        if (input < 0)
        {
            partition2 += input;      //Add the number with the current sum of partition 2
        }
        
        //If the inserted number is positive
        else
        {
            partition1 += input;      //Add the number with the current sum of partition 1
        }
    }

    cout << partition1 - partition2;      //Print B - C (partition2-partition1)

    return 0;
}

//B - (-C) = B + C
