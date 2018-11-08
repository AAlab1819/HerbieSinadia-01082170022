Weekly Submission 09
--------------------
Dollars
First, the program will initialize two arrays: ```coins``` and ```arr```. (Explain what both are for). The program uses the ```memset``` command to set all values of array ```arr``` to ```0```. Then the program will set the first entry of array ```arr``` as ```1```. Then, the program enters a ```for``` loop in which the program will determine the possibilities of forming money and store them in the array.
The user goes to a ```while``` loop in which they enter the number and then print out how much the inserted money can be formed by checking the ```n```th index of array ```arr```. (```n``` = input)

Complexity:

Best case: ```O(1)```

Average case: ```O(n^2+n)```

Worst case: ```O(n^2+2n)```

Supersale

First, the user must input the amount of test cases. Then the program will go to a ```while``` loop in which the user inputs the weight and price of objects and determine how much objects can be carried by each person. Then, the user inputs the number of people in the group. The program will run a ```while``` loop where the user inputs the maximum weight of ```i```th member of the family. Once the loop completes, the program will output the current answer by adding it with the array which contains all possibilities based on the previous input. Repeat for ```T``` times.
Complexity:

Best case: ```O(2)```

Average case: ```O(2n^2)```

Worst case: ```O(2n^2)```

