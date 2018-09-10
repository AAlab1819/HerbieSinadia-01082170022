#include <iostream>
using namespace std;

int main()
{
    int secretaries;                //Number of secretaries

    int currentcheck = 0;           //Duplicate counter
    int validsessions = 0;          //Number of call sessions between two secretaries
    
    int temp;                       //Temporary number (used in sorting)
    int num;                        //Used in sorting
    int minimum;                    //Minimum value used in sorting

    cin >> secretaries;                 //Input amount of secretaries

    int callSession[secretaries];       //Declare array with size matching with the amount of secretaries

    //Input array values
    for (int a = 0; a < secretaries; a++)
    {
        cin >> callSession[a];          //Input call sessions
    }
    
    //Sort the array using Selection Sort
    for (int f = 0; f < secretaries-1; f++)
    {
        minimum = callSession[f];
        num = f;

        for (int g = f+1; g < secretaries; g++)
        {
            if (minimum > callSession[g])
            {
                minimum = callSession[g];
                num = g;
            }
        }
            temp = callSession[f];
            callSession[f] = callSession[num];
            callSession[num] = temp;
    }
    
    //Check for valid call sessions
    for (int i = 0; i < secretaries-1; i++)
    {
        //Set the current duplicate counter to 0 for each pass of the i loop
        currentcheck = 0;

        for (int j = i+1; j < secretaries; j++)
        {
            if (callSession[i] == callSession[j])
            {
                if (callSession[i] > 0)
                {
                    validsessions++;
                    currentcheck++;
                }
            }
        }
        //If the amount of callSession[i] exceeds 2 (conference calls)
        if (currentcheck > 1)
        {
            validsessions = -1;
            break;          //Exit loop
        }
        //else keep going
    }
    cout << validsessions;          //Print results
    
}
