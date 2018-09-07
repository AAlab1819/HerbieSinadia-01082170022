//WORK IN PROGRESS - NEED TO IMPLEMENT SORTING AND FIX TIME LIMIT EXCEEDED PROBLEM ON CODEFORCES

#include <iostream>
using namespace std;

int main()
{
    long long stewards;
    long long maxvalue = 0;
    long long minvalue = 0;
    int minvalueset = 0;
    int validcount = 0;
    cin >> stewards;
    long long stewArray[stewards];
    for (int b = 0; b < stewards; b++)
    {
        cin >> stewArray[b];
        if (stewArray[b] > maxvalue)
        {
            maxvalue = stewArray[b];
        }
        if (minvalue == 0)
        {
            minvalueset = 1;
            minvalue = stewArray[b];
        }
        if (minvalue > 0 && stewArray[b] < minvalue)
        {
            minvalue = stewArray[b];
        }

    }
 
    for (int y = 0; y < stewards; y++)
    {
        if (stewArray[y] > minvalue && stewArray[y] < maxvalue)
        {
            validcount++;
        }
    }
    cout << endl;
    cout << validcount;

    return 0;
}
