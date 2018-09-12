#include <iostream>
using namespace std;

//Function to sort dragon strength array and reassign victory bonus to each dragon
void insertionsort(int array1[], int array2[], int amount)
{
   //array1[] = dragonArray[]
   //array2[] = victorybonus[]

   int a;
   int pass;
   int b;
   int c;

   for (a = 1; a < amount; a++)
   {
       pass = array1[a];
       c = array2[a];
       b = a-1;

       //Sort dragon strength array and reinstate victory bonuses to each dragon in the new sorted array
       while (b >= 0 && array1[b] > pass)
       {
           array1[b+1] = array1[b];
           array2[b+1] = array2[b];
           b = b-1;
       }
       array1[b+1] = pass;
       array2[b+1] = c;
   }

}

int main()
{
    int strength;           //Starting player strength
    int dragons;            //Number of dragons

    int wincount = 0;       //Win counter

    cin >> strength >> dragons;

    int dragonArray[dragons];           //Size depends on the number of dragons
    int victorybonus[dragons];

    //Input strength and win bonus for each dragon
    for (int a =0; a <dragons; a++)
    {
        cin >> dragonArray[a] >> victorybonus[a];
    }

    //Sort the array using Insertion Sort
    insertionsort(dragonArray, victorybonus, dragons);

    //Check if the player can win the game
    for (int y = 0; y < dragons; y++)
    {
        //If player strength exceeds dragonArray[y]
        if (strength > dragonArray[y])
        {
            strength = strength + victorybonus[y];          //Add strength with the victory bonus
            wincount++;                                     //Win counter goes up
        }

        //If player strength is less than or equal to dragonArray[y]
        else
        {
            break;          //Lose the game - exit the loop
        }
    }

    //If the win counter equals to the amount of dragons (meaning all dragons are defeated)
    if (wincount == dragons)
    {
        cout << "YES";
    }

    //If the win counter is less than the amount of dragons (player lost)
    else
    {
        cout << "NO";
    }
}
