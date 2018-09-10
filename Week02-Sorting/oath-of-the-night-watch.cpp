#include <iostream>
using namespace std;

//Function to merge back array after splitting them in fuction "mergesort"
void mergeback (long long *arr, long long low, long long high, long long mid)
{
    long long a;
    long long b;
    long long c;
    long long d[high-low+1];          //Temporary array

    a = low;            //Lower part
    c = 0;              //Index for checking
    b = mid+1;          //Higher part

    //Merge the two parts to the temporary array d[]
    while (a <= mid && b <= high)
    {
        if (arr[a] < arr[b])
        {
            d[c] = arr[a];
            c++;
            a++;
        }
        else
        {
            d[c] = arr[b];
            c++;
            b++;
        }
    }

    //Insert values from i to mid into d[]
    while (a <= mid)
    {
        d[c] = arr[a];
        c++;
        a++;
    }

    //Insert values from mid to high into d[]
    while (b <= high)
    {
        d[c] = arr[b];
        c++;
        b++;
    }

    //Construct sorted array based on d[]
    for (a = low; a <= high; a++)
    {
        arr[a] = d[a-low];
    }
}

//Function to split arrays (tree)
void mergesort(long long *arr, long long low, long long high)
{
    long long mid;
    if (low < high)
    {
        mid = (low+high)/2;                 //Declare middle part (will be split)

        //Split the array until there is no more to be split
        mergesort(arr, low, mid);
        mergesort(arr, mid+1, high);

        
        mergeback(arr, low, high, mid);         //Merge the array back
    }
}

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
    
    cin >> stewards;
     
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
    
    mergesort(stewArray,0,stewards-1);          //Sort the array using merge sort
    
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
