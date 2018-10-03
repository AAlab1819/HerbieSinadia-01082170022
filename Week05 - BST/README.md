Weekly Submission 05
----------------------------
Problem 4 C - Registration System

Submission link: https://codeforces.com/problemset/submission/4/43729800

Explanation:

In this program, the user must input a string (```name```) which will be entered to the database. The program will then check whether the username is unique or already exists in the database.

First, the program will declare the database using ```map```. The key value is ```string``` and integer ```int``` is the mapped input value type. The user must input the number of ```users``` to be registered in the database. After that, the program will go to a ```for``` loop for ```n``` times (```n == users```). In the loop, the user will input the usernames to be registered to the database (variable ```name```). The program will then check for duplicates of the username in the database. If no duplicates were found, the program will print ```OK!``` and set the count for the username by ```1``` (indicating that such username now exists in the database). If a duplicate was found, the program will print out the entered username with the count of said username in the database.

Complexity:

-coming soon-
