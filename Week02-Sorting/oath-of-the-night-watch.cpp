#include <iostream>
using namespace std;

int main()
{
    long long stewards;               //Number of stewards

    long long maxvalue = 0;           //Initialize maximum strength
    long long minvalue = -100;        //Initialize minimum strength (-100)

    int minvalueset = 0;              //To check whether the minimum value has been set
    int validcount = 0;               //Valid stewards

    long long temp;
    long long num;
    long long minimum;

    bool timelimit = false;           //If false, sort array

    cin >> stewards;                  //Input number of stewards

    if (stewards > 1000)
    {
        timelimit = true;             //If stewards exceed 1000, bypass sorting (to avoid time limit issues)
    }

    long long stewArray[stewards];    //Declare array of steward strength based on the number of stewards


    //Input looping
    for (int b = 0; b < stewards; b++)
    {
        cin >> stewArray[b];

        //If inserted strength is higher than the current max value
        if (stewArray[b] > maxvalue)
        {
            maxvalue = stewArray[b];            //Set inserted value as the maximum value
        }

        //If the minimum value remains at -100 (not set yet)
        if (minvalue == -100)
        {
            minvalueset = 1;                    //Minimum value set
            minvalue = stewArray[b];            //Minimum value is now the current inserted value (first number inserted)
        }

        //If the minimum value has been set & inserted number lower than the min value
        if (minvalue > 0 && stewArray[b] < minvalue)
        {
            minvalue = stewArray[b];            //Set current value as the minimum value
        }
    }

    //If the number of stewards is less than 1000
    if (timelimit == false)
    {
        //Sorting process
        for (int f = 0; f < stewards-1; f++)
        {
            minimum = stewArray[f];
            num = f;

            for (int g = f+1; g < stewards; g++)
            {
                if (minimum > stewArray[g])
                {
                    minimum = stewArray[g];
                    num = g;
                }
            }
            temp = stewArray[f];
            stewArray[f] = stewArray[num];
            stewArray[num] = temp;
        }
    }

    cout << endl;

    //Checking whether each steward can be supported or not
    for (int y = 0; y < stewards; y++)
    {
        //If the current steward's strength is between the weakest steward and the strongest steward
        if (stewArray[y] > minvalue && stewArray[y] < maxvalue)
        {
            validcount++;           //Add valid count (he/she can be supported)
        }
    }
    cout << validcount;         //Print results

    return 0;
}
