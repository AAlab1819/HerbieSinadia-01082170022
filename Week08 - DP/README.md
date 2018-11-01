Weekly Submission 08
---------------------
Problem 913 C - Party Lemonade

Submission link: https://codeforces.com/problemset/submission/913/45163652

First, the user inputs the number of bottle types and litres required. Then, the program will go to a loop where the user inputs the price of ```a```th bottle and determine the cheapest by comparing it with the previous entry. Then, the program will go to another loop to determine the final answer. The program will set a temporary value and add value of ```y``` by calculating current price index with litres/temp. Get the current answer counter by getting the lowest number between the current answer with the current price selection sequence. Then, print the final answer.

Complexity:

Best case: ```O(1)```

Average case: ```O(n)```

Worst case: ```O(n)```

------------------------
Problem 433 B - Kuriyama Mirai's Stones

Submission link: https://codeforces.com/contest/433/submission/45163798

First, the user will input the number of stones. Then, the program will initialize two arrays to store the prices of each stone. Then, the program will go to a loop where the user will input the price of ```i```-th stone. Store the entered price in the two arrays, and then sort the second array using STL sort. Then, the program will go to another loop to change each individual entry in both arrays by adding them with the previous stone price. AFter that, the program will initialize ```4``` variables: ```questions```, ```ask1```, ```ask2```, ```ask3```. The user wil input the number of ```questions``` before the program goes to another loop (running for ```n``` times where ```n``` = ```questions```) where the user inputs ```3``` questions and print the answers accordingly until the loop ends.

Complexity:

Best case: ```O(1)```

Average case: ```O(n)```

Worst case: ```O(n)```
