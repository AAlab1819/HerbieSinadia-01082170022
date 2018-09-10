Weekly Submission 02 
--------------------------
Problem 768A - Oath of the Night's Watch

Submission link: http://codeforces.com/contest/768/submission/42664485

Sorting method used: Selection Sort

The problem asks us to input the amount of stewards, followed by their strength which later outputs how many stewards that can be supported (they must have a steward with a lower strength and higher strength than them).

My program will ask users to input the amount of stewards. Then, the user must input the strength for the ```n```th steward in a loop for ```m``` times (```m``` = number of stewards, ```m``` = loop index - starts from ```0```). The strength values are stored in an array.

If the amount of stewards exceed ```1000```, we set the ```timelimit``` boolean variable to ```true``` and bypass the sorting section entirely to avoid time limit issues within Codeforces.

If the number of stewards doesn't exceed ```1000```, the program will then sort the values stored in the array using selection sort.

After that, we check whether each individual steward can be supported or not. The program will perform a ```for``` loop and check whether ```n```'th steward's strength is between the minimum value and the maximum value (```n``` = current loop index - starts from ```0```). If yes, the valid count will go up. The number of supported stewards is less than the number of stewards since the minimum value and the maximum value each doesn't have a value higher/lower than them.

Once the program goes through the entire array, the program will print out the amount of stewards that can be supported (```validcount```).

Additional notes
* I used ```long long``` to declare the variables because once again Codeforces uses really long numbers to test the program
* The number ```1000``` as the limit of the number of stewards that can be sorted based on their strength is chosen as I feel that ```1000``` is a really high number to sort each individual values before the runtime exceeds the time limit. This is just an estimate as I don't know the minimum value of stewards to be sorted.

--------------------------
Problem 291A - Spyke Talks

Submission link: http://codeforces.com/problemset/submission/291/42728335

Sorting method used: Merge Sort

In this program, we are asked to input the amount of secretaries (array length) and their respective Spyke VoIP call session. We print out how much secretaries are calling each other (in pairs - sharing same call session). Output is ```-1``` if there are more than two secretaries sharing the same call session.

My program sorts the array using Merge Sort. First, the program goes to the ```mergesort``` function to split the arrays in half until each array holds exactly ```1``` number. Then the program will proceed to the ```mergeback``` function to sort and merge the array back.

There are two important variables for the following steps:
* ```currentcheck``` = To determine the number of values in ```callSession[j]``` that matches the initial checking value      (```callSession[i]```)

* ```validsessions``` = The amount of valid call sessions (exactly ```2``` amount of ```callSession[i]```)

After that, the program will check each individual array values for matching call sessions. I used two ```for``` loops, first one (index ```i```) is to set the current value to be checked and second one (index ```j```) is to traverse the rest of the array to find duplicates. If a duplicate is found, ```currentcheck``` and ```validsessions``` goes up by 1. Repeat until loop ```j``` has completed in traversing the rest of the array.

By the end of loop ```j```, the program will check if ```currentcheck``` amounts to ```1``` or not. If ```currentcheck``` exceeds ```1``` (meaning there are more than one duplicate of ```callSession[i]```), the program will set ```validsessions``` to ```-1``` and exit the loop using ```break```. If ```currentcheck``` equals to ```1``` or ```0```, nothing happens and the loop will proceed. When index ```i``` goes up, the ```currentcheck``` counter will be reset to ```0```.

Once the program checked the entire array, the program will output the amount of pairs in the same call session (output ```-1``` if there are secretaries in a conference call with each other - ```callSession[i]``` shares more than one duplicate in the array)

--------------------------
Problem 230A - Dragons

Coming soon :)

