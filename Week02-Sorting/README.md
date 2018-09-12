Weekly Submission 02 
--------------------------
Problem 768A - Oath of the Night's Watch

Submission link: http://codeforces.com/problemset/submission/768/42733168

Sorting method used: Merge Sort

The problem asks us to input the amount of stewards, followed by their strength which later outputs how many stewards that can be supported (they must have a steward with a lower strength and higher strength than them).

My program will ask users to input the amount of stewards. Then, the user must input the strength for the ```n```th steward in a loop for ```m``` times (```m``` = number of stewards, ```m``` = loop index - starts from ```0```). The strength values are stored in an array.

Then the program sorts the array using Merge Sort.

After that, we check whether each individual steward can be supported or not. The program will perform a ```for``` loop and check whether ```n```'th steward's strength is between the minimum value and the maximum value (```n``` = current loop index - starts from ```0```). If yes, the valid count will go up. The number of supported stewards is less than the number of stewards since the minimum value and the maximum value each doesn't have a value higher/lower than them.

Once the program goes through the entire array, the program will print out the amount of stewards that can be supported (```validcount```).

Additional notes
* I used ```long long``` to declare the variables because once again Codeforces uses really long numbers to test the program

--------------------------
Problem 291A - Spyke Talks

Submission link: http://codeforces.com/problemset/submission/291/42733361

Sorting method used: Selection Sort

In this program, we are asked to input the amount of secretaries (array length) and their respective Spyke VoIP call session. We print out how much secretaries are calling each other (in pairs - sharing same call session). Output is ```-1``` if there are more than two secretaries sharing the same call session.

My program sorts the array using Selection Sort.

There are two important variables for the following steps:
* ```currentcheck``` = To determine the number of values in ```callSession[j]``` that matches the initial checking value      (```callSession[i]```)

* ```validsessions``` = The amount of valid call sessions (exactly ```2``` amount of ```callSession[i]```)

After that, the program will check each individual array values for matching call sessions. I used two ```for``` loops, first one (index ```i```) is to set the current value to be checked and second one (index ```j```) is to traverse the rest of the array to find duplicates. If a duplicate is found, ```currentcheck``` and ```validsessions``` goes up by 1. Repeat until loop ```j``` has completed in traversing the rest of the array.

By the end of loop ```j```, the program will check if ```currentcheck``` amounts to ```1``` or not. If ```currentcheck``` exceeds ```1``` (meaning there are more than one duplicate of ```callSession[i]```), the program will set ```validsessions``` to ```-1``` and exit the loop using ```break```. If ```currentcheck``` equals to ```1``` or ```0```, nothing happens and the loop will proceed. When index ```i``` goes up, the ```currentcheck``` counter will be reset to ```0```.

Once the program checked the entire array, the program will output the amount of pairs in the same call session (output ```-1``` if there are secretaries in a conference call with each other - ```callSession[i]``` shares more than one duplicate in the array)

--------------------------
Problem 230A - Dragons

Submission link: http://codeforces.com/problemset/submission/230/42802597

Sorting method: Insertion Sort

In this question, we are tasked to create a program in which we simulate a player with user-generated stats (```strength```) against a set nunber of dragons determined by the user (```dragons```). Each dragon have their own strength and bonus which will increase the player's strength should they are able to defeat the dragon (```victorybonus```). The program will print either ```YES``` or ```NO``` depending on the amount of dragons defeated (```YES``` for all, ```NO``` for ```1``` or more dragons unable to be defeated by the player).

First, we input the default player strength followed by the number of dragons. The program will then generate two arrays, ```dragonArray```(to store dragon strength) and ```victorybonus``` (to store strength bonus should the dragon be successfully defeated). The size of those two arrays are based on ```dragons```.

The user can input each dragon's strength and win bonus within a ```for``` loop that will run for ```n``` times (```n``` = ```dragons```). The program will then go to the Insertion Sort function and sort ```dragonArray[]``` based on their strength and append their win bonuses to each individual dragon in the new array (if we don't, the order of victory bonuses remains the same while the order of dragons changes, meaning that each dragon now holds a completely different victory bonus to the one user inputs).

After that, the program checks whether the player can defeat ```y```th dragon in a ```for``` loop (```y``` being the loop index). If the player's strength exceeds the current dragon's strength (```strength > dragonArray[y]```), we add the victory bonus to the current player strength, increase the win counter ```wincount``` and repeat (facing off the player with ```dragonArray[y+1]```). If the player's strength is less than or equal to the current dragon's strength (```strength <= dragonArray[y]```), the game is impossible to be won and the program exits the ```for``` loop using ```break```.

At the end, the program will check the amount of wins to verify whether the game can be won or not. If ```wincount``` equals to ```dragons``` (all dragons can be defeated), print ```YES```. Otherwise, print ```NO```.

