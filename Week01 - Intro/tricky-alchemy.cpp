//Weekly Submission 01 - Tricky Alchemy (by Herbie)
#include <iostream>

using namespace std;

int main()
{
    long long yellow_CRYSTALS = 0;      //Declare yellow crystals (default = 0)
    long long blue_CRYSTALS= 0;         //Declare blue crystals (default = 0)

    long long yellow_BALLS = 0;         //Declare yellow balls
    long long green_BALLS = 0;          //Declare green balls
    long long blue_BALLS = 0;           //Declare blue balls

    long long ballcounter1 = 0;         //Yellow Crystals needed
    long long ballcounter2 = 0;         //Blue Crystals needed

    long long remaining = 0;            //Remaining Crystals (if needed)

    cin >> yellow_CRYSTALS >> blue_CRYSTALS;          //Input amount of crystals Grisha possesses
    cin >> yellow_BALLS >> green_BALLS >> blue_BALLS;  // Input amount of balls Grisha wants to make

    if (yellow_CRYSTALS < (2*yellow_BALLS + green_BALLS))      //Check if the amount of yellow crystals is insufficient to fulfill amount of yellow and green balls to be made
    {
        ballcounter1 += (2*yellow_BALLS + green_BALLS) - yellow_CRYSTALS;          //Find remaining yellow crystals required
    }
    if (blue_CRYSTALS < (3*blue_BALLS + green_BALLS))          //Check if the amount of blue crystals in insufficient to fulfill amount of blue and green balls to be made
    {
        ballcounter2 = (3*blue_BALLS + green_BALLS) - blue_CRYSTALS;       //Find remaining blue crystals required
    }
    remaining = ballcounter1 + ballcounter2;        //Sum of missing yellow and blue crystals
    cout << remaining;         //Print remaining crystals Grisha has to acquire

    return 0;
}
