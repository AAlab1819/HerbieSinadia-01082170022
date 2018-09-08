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
Problem 230A - Dragons

Coming soon :)

