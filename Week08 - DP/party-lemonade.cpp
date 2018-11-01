#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
using namespace std;

long long bottle_types;     //Intialize bottle types
long long litres;           //Initialize litres required
long long temp;
long long price[35];        //Initialize price array
long long a;
long long y;
long long answer = 1e18;    //Intialize answer (floating point)

int main()
{
    cin >> bottle_types >> litres;      //Input number of bottle types and litres required
    
    //Input price for a-th bottle
    for(a = 0; a < bottle_types; a++)
    {
        cin >> price[a];
        
        //If valid input
        if(a)
        {
            price[a] = min(price[a-1]*2,price[a]);    //Set minimum by comparing with the previous entry
        }
    }
    
    //Loop to find the cheapest price
    for(a = bottle_types - 1; a >= 0; a--)
    {
        temp = (1<<a);
        y += price[a] * (litres/temp);
        litres %= temp;
        answer = min(answer,y+(litres!=0)*price[a]);      //Set current answer with the minimum value from current answer or current price
    }
    cout << answer;   //Print answer

    return 0;
}
