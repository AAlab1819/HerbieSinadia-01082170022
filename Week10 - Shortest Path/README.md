Weekly Submission 10
-------------------
Problem 601 A – The Two Routes

Submission link: https://codeforces.com/problemset/submission/601/45750474

First, the program will use ```memset``` to (insert memset explanation here). Then, the user inputs the number of towns and number of railways in separate spaces. Then, the program will go to a ```for``` loop to set every individual array values to ```100000000```.  The user inputs the railway between town ```u``` and ```v``` in another ```for``` loop that runs for ```n``` times (```n``` = number of railways). After each input, the program will set the current array index of ```u``` and ```v``` to ```1```.  Set current sum values to ```0```. Then, the program will go to another ```for``` loop to change values on array ```d``` with the values of```y``` coordinates with ```x``` = ```1```. 
Go to another ```for``` loop to set the shortest path by checking each individual railway. Then print the answer by getting the highest from ```sum1``` and ```sum2```.


Problem 20 C – Dijkstra?

Submission link: https://codeforces.com/problemset/submission/20/45772403
First, the user inputs the number of vertices and edges in the path. Then, the program uses ```memset``` to (explain). The program goes to a ```for``` loop where the user inputs edge points and their distance for ```m``` times (```m``` = number of edges, edge number must not be higher than ```n```, the number of vertices). After each input, the program goes to the ```addedge``` function to add the edges into the array. Repeat until the loop is complete.

After that, the program calls the ```Dijkstra``` function to fill the array and determine whether the railway can be passed or not. Pop the vector ```Q``` and fill in suitable vertices until the vector is empty. Return to the main function and print the final answer.

