Weekly Submission 03
----------------------
Problem 148A - Insomnia Cure
Submission link: http://codeforces.com/problemset/submission/148/43068893

Explanation:

In this question, we must make a program that calculates the amount of imaginary dragons injured while the princess is asleep. 

First, I declare five variables:
* ```punched``` = for every ```n```th dragon that got punched in the face
* ```shut``` = for every ```n```th dragon that got their tail shut 
* ```trampled``` = for every ```n```th dragon that got trampled
* ```threatened``` = for every ```n```th dragon that got threatened by the princess
* ```dragons``` = amount of imaginary dragons

Then there's also ```damaged``` which stores the amount of dragons who got rekt by the princess. The program will set the amount of damaged dragons as the same with the amount of dragons, the amount will decrease if a dragon gets away (we'll get to this below)

User input those 5 variables above. Then the program will check for the amount of dragons who got away unscathed.

If either of the 4 damage types (```punched```, ```shut```, ```trampled```, and ```threatened```) hasa value of ```1```, it means that every dragon will get damaged. ```damaged == dragons```

If not, then we check by doing a ```for```loop to check the amount of dragons that got away. If the remainder of ```loop index/(all 4 damage types - seperately``` equals ```0```, then the dragon escapes unharmed which means the amount of damaged dragons is reduced by ```1```. Repeat until all dragons have been checked.

Output the amount of damaged dragons at the end.

Complexity

Best case: The best possible input for the fastest runtime is where at least ```1``` damage type has a value of ```1``` which bypasses the loop check completely. 
    
    T(n) = c1 + c2 + c3 +c4 + c5+ c6 + c7 + c8 + c9+ c10 +c11 + c12 + c13 + c14
            = O(1)

Worst case: If all damage types has a value exceeding ```1``` - check individual dragons by proceeding to the ```for``` loop

    T(n) = O(n^2)
   
