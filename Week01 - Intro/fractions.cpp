//Weekly Submission 01 - Fractions (by Herbie)
#include <iostream>
using namespace std;

int main()
{
    int num;
    int a = 99;         //placeholder number for the numerator
    int b = 99;         //placeholder number for the denominator
    cin >> num;         //Input number
    
    if (num%2 == 0)     //If the number inserted is even
    {
        a = (num/2)-1;  //numerator < denominator
        b = (num/2)+1;
        if (a%2 == 0)   //If the numerator is even (we're looking for coprime numbers)
        {
            a-=1;
        }
        if (b%2 == 0)   //If the denominator is even (see above - what we need is coprime numbers - both values have differing GCD)
        {
            b+=1;      
        }
    }
    else                //If the number inserted is odd
    {
        a = (num/2);    
        b = a+1;
    }
    cout << a << " " << b;    //Output results
    return 0;
}
