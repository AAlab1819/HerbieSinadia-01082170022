Weekly Submission 05
----------------------------
Problem 4 C - Registration System

Submission link: https://codeforces.com/problemset/submission/4/43729800

Explanation:

In this program, the user must input a string (```name```) which will be entered to the database. The program will then check whether the username is unique or already exists in the database.

First, the program will declare the database using ```map```. The key value is ```string``` and integer ```int``` is the mapped input value type. The user must input the number of ```users``` to be registered in the database. After that, the program will go to a ```for``` loop for ```n``` times (```n == users```). In the loop, the user will input the usernames to be registered to the database (variable ```name```). The program will then check for duplicates of the username in the database. If no duplicates were found, the program will print ```OK!``` and set the count for the username by ```1``` (indicating that such username now exists in the database). If a duplicate was found, the program will print out the entered username with the count of said username in the database.

Complexity:

Worst case: ```O(n)```

Average case: ```O(n)```

Best case: ```O(1)```

------------------------------
Problem 115 A - Party

Submission link: https://codeforces.com/contest/115/submission/43791751

Explanation:

First, the user inputs the amount of employees in the company that will be attending the party. The program will initialize array ```i``` which will contain the actual employees. Then, the user inputs the immediate manager of employee ```i```. If the inserted value is ```-1```, the employee does not have an immediate manager.

The program will go to another ```for``` loop in which the program will calculate the amount of groups that can be formed by returning the highest value between the current employee index and the current group count. Print the amount of groups at the end.

Complexity:

Worst case: ```O(2n)```

Average case: ```O(2n)```

Best case: ```O(n)```

----------------------------
Problem 913 B - Christmas Spruce

Submission link: https://codeforces.com/contest/913/submission/43790616

Explanation:

First, the program will initalize the vector array and the variables needed. The user inputs the amount of vertices in the tree. Then the user must input the index of parent ```i```+1 vortex within a ```for``` loop. Then the program will go to another ```for``` loop to check the amount of children in non-leaf vertices. If the current index is empty (indicating that there are no other descendants), add the counter by ```1```. If the counter is less than ```3```, print ```No``` (the tree is not spruce). Otherwise print ```Yes``` if the counter exceeds ```3```(the tree is spruce).

Complexity:

Worst case: ```O(n)```

Average case: ```O(log (n))```

Best case: ```O(1)```
