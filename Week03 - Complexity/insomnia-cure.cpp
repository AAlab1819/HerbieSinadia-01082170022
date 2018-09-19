#include <iostream>
using namespace std;

int main()
{
    //Declare integers for each damage types
    int punched;
    int shut;
    int trampled;
    int threatened;

    //Declare amount of dragons
    int dragons;

    //Declare counter for damage dragons
    int damaged = 0;

    //Input nth dragon for each damage type + amount of dragons at the end
    cin >> punched;
    cin >> shut;
    cin >> trampled;
    cin >> threatened;
    cin >> dragons;

    //Set initial damage counter to the amount of dragons
    damaged = dragons;

    //If every 1st dragon got hit with a damage type (all dragons got damaged)
    if(punched == 1 || shut == 1 || trampled== 1 || threatened == 1)
    {
        damaged += 0;
    }

    //If every nth dragon got hit with a damage type (n > 1)
    else
    {
        for(int index = 1; index <= dragons; index++)
        {
            //If i-th dragon got away unharmed
            if((index%punched != 0) && (index%shut != 0) && (index%trampled != 0) && (index%threatened != 0))
            {
                damaged--;              //Reduce damage counter
            }
        }
    }

    //Print amount of damaged dragons
    cout << damaged;

    return 0;
}
