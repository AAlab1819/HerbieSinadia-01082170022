Weekly Submission 06
------------------
Find the running median
First, the user must input the number of integers in the data stream. Then the program will declare a multi set with integer data type. The user will then input each individual data which will be inserted to the database. Use max heap to form the database. If the database size exceeds ```0``` (meaning it is a valid database), multiply a temporary value with the last value in the database and if the first entry is higher than the temporary value, insert the current input value, else erase it. Repeat for ```n``` times. After that, print the median by calculating the values in the beginning and end of the database. Divide total by ```2``` and print the final answer. Print an additional comma (```0.5 or .0```) depending on the remainder of the median.

Roy and the Trending Topics
First, the user will input the number of trends. Then, the user will input each trend’s attributes: topic ID, current z-score, posts, likes, comments, and shares. The program will push each entry to the database. The program will initialize an array with pair format.  The program then prints out the top 5 topics by searching for the highest z-score by comparing the values with various entries in the database.
