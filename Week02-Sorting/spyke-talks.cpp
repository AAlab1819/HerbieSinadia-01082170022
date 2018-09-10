#include <iostream>
using namespace std;

//Function to merge back array after splitting them in fuction "mergesort"
void mergeback (int *arr, int low, int high, int mid)
{
    int a;
    int b;
    int c;
    int d[high-low+1];          //Temporary array

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
void mergesort(int *arr, int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = (low+high)/2;                 //Declare middle part (will be split)

        //Split the array until there is no more to be split
        mergesort(arr, low, mid);
        mergesort(arr, mid+1, high);

        
        mergeback(arr, low, high, mid);         //Merge the array back
    }
}

//Main function
int main()
{
    int secretaries;

    int currentcheck = 0;
    int validsessions = 0;

    cin >> secretaries;                 //Input amount of secretaries

    int callSession[secretaries];       //Declare array with size matching with the amount of secretaries

    //Input array values
    for (int a = 0; a < secretaries; a++)
    {
        cin >> callSession[a];          //Input call sessions
    }

    mergesort(callSession,0,secretaries-1);             //Sort the array using merge sort

    cout << endl;

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
    cout << validsessions;              //Print results
}
