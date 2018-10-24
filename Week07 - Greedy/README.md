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

- coming soon :) -
