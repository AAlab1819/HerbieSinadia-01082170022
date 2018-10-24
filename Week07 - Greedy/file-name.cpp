#include <iostream>
using namespace std;

int main()
{
    int num;                  //Initialize number of characters
    int name_check = 0;       //Initialize counter for number of consecutive 'x' in the string
    int sum = 0;              //Intialize sum of x that needs to be removed so that x = 2

    cin >> num;               //Input number of characters 

    char input[num];          //Initialize string array (as char) with size = num

    cin >> input;             //Input the string
    
    //Loop to check each individual character in the array
    for (int b = 0; b < num; b++)
    {
        //If the current character is 'x'
        if (input[b] == 'x')
        {
            name_check++;     //Increment name check counter
        }
        
        //If there are 3 or more consecutive 'x' and the current character is not 'x'
        if (input[b] != 'x' && name_check >= 3)
        {
            sum += name_check - 2;      //Add the total number of consecutive 'x' - 2 to the sum
            name_check = 0;             //Reset name check counter
        }
        
        //If there are less than 3 consecutive 'x' and the current character is not 'x'
        if (input[b] != 'x' && name_check < 3)
        {
            name_check = 0;             //Reset name check counter
        }
    }
    
    //If there are 3 or more consecutive x when the loop ends
    if (name_check >= 3)
    {
        sum += name_check -2;     //Add the total number of consecutive 'x' - 2 to the sum
    }

    cout << sum;        //Print the number of 'x' characters that needs to be removed 

    return 0;
}
