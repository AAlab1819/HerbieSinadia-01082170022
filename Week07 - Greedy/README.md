Weekly Submission 07
-----------------
Problem 946 A - Partitions

Submission link: https://codeforces.com/contest/946/submission/44727830

First, the user must input the amount of numbers. Then, the user enters a number in a loop which runs for ```n``` times (```n``` = amount of numbers from the first input). After each input, the program will check whether the inserted value is a positive or negative integer. If the number is positive, add the sum of partition 1 with the inserted value. If the number is negatuve, add the sum of partition 2 with the inserted value. Once the loop is complete, print the result of ```partition1 - partition2```.

Additional notes:

* Empty partitions are allowed. To make things easier, I use partition 1 for positive integers and partition 2 for negative integers
* ```B - (- C) == B + C```
* Using only negative values for partition 2 (```C```) will make the sum of partition 2 = ```- (-C) == C```. Get the sum of partition 1 and partition 2 to print out the maximum value of ```B - C```

Complexity:

Best case: ```O(1)```

Average case: ```O(n)```

Worst case: ```O(n)```
  
-------------------
Problem 978 B - File Name

Submission link: https://codeforces.com/problemset/submission/978/44770485

The user must first input the number of characters in the string (```num```). Then, the program will intialize an array of characters ```char input[]``` with the size of ```num```. The user will then input the string in which every individual character will be stored sequentially in the array. Then, the program will check each individual character in a ```for``` loop.

If the current character in the array index is ```x```, increase the ```name_check``` counter by ```1```. If the current character is not ```x```, reset the ```name_check``` counter and add the sum of ```x``` that needs to be removed by ```name_check - 2``` (if the count of consecutive ```x``` is equal to or more than ```3```. Repeat until the loop ends. If there are ```3``` or more consecutive ```x``` when the loop ends (as in, the last character in the array is ```x```, which means the program cannot add it when the loop ends), the program will insert the sum of ```x - 2``` once the loop ends. Finally, the program will print the sum.

Additional notes:

* ```sum += name_check - 2``` because we are looking for the minimum number of ```x``` that needs to be removed so that no ```xxx``` or longer is present in the string. ```2``` is the threshold of accepted consecutive ```x``` in the string, so we reduce the ```name_check``` counter by ```2``` so that we can get the minimum number of ```x``` that needs to be removed in the current sequence of ```x```.

```xxx -> 3 - 2 == 1``` only ```1``` ```x``` needs to be removed so that the number of ```x``` is ```2```

```xxxx -> 4 - 2 == 2```  only ```2``` ```x``` needs to be removed so that the number of ```x``` is ```2```

```xxxxxxxxxx -> 10 - 2 == 8```   only ```8``` ```x``` needs to be removed so that the number of ```x``` is ```2```
* If the current character is not ```x``` and the number of consecutive ```x``` is less than ```3```, the program will simply reset the ```name_check``` counter.

Complexity

Best case: ```O(1)```

Average case: ```O(n)```

Worst case: ```O(2n)```

-----------------
Problem 731 B - Coupons and Discounts

Submission link: https://codeforces.com/contest/731/submission/44844064

First, the user must input the number of training sessions. Then, the program will go to a loop which runs for ```n``` times (```n``` = number of training sessions). In each loop, the user must inpu.t the number of teams that will be present on the ```n```th day. Then, the program will check if they are eligible for discounts or not. If the result of ```teams - check``` is less than ```0```(negative), break the loop and print ```NO```. Else, get the new check number by getting the remainder of ```teams/2```. Print ```YES``` if the loop completes succesfully.

Complexity:

Best case: ```O(1)```

Average case: ```O(n)```

Worst case: ```O(n)```

