#include <iostream>
using namespace std;

int main()
{
    int secretaries;

    int currentcheck = 0;
    int validsessions = 0;
    
    int temp;
    int num;
    int minimum;

    cin >> secretaries;                 //Input amount of secretaries

    int callSession[secretaries];       //Declare array with size matching with the amount of secretaries

    //Input array values
    for (int a = 0; a < secretaries; a++)
    {
        cin >> callSession[a];          //Input call sessions
    }
    
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
    cout << validsessions; //Print results
    
}
