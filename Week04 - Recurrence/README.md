Weekly Submission 04
------------------
Problem 268 B - Buttons

Submission link: https://codeforces.com/problemset/submission/268/43241175

Explanation:

The program must output the number of buttons to be pressed in the worst possible case (bad luck). First, the user inputs the amount of buttons.

After that, the program will go to a ```for``` loop in which the program will count the worst possible tries when ```n```th buttons are
correctly pressed.

The buttons must be pushed in the right order. If the wrong button is pushed, all buttons will be unpressed. Another guess at the correct sequence will be attempted.

For example = number of buttons is ```3```.

The order of tries shall be (assuming the correct order is in descending order from the last button - Manao presses the buttons in ascending order) :
```
    1
    2
    3 1
    3 2 1
```
(note: numbers represent the ```n```th button)

The total number of presses is ```7```.

If the number of buttons is ```4``` =
```
  1
  2
  3
  4 1
  4 2
  4 3 1
  4 3 2 1
```
The total number of presses is ```14```.

The ```for``` loop will calculate the worst case by pressing all buttons when ```a``` buttons have been pressed. We use the formula:
```(buttons - a) * a```
to calculate the presses needed when ```a``` buttons have been pressed. ```a``` goes up after each operation, meaning that the amount of buttons pressed that is the correct answer increases.

Finally, we add the amount of tries with the amount of buttons as the final sequence is pressing all buttons in the right order. Then the program will print out the final total of tries needed.

Complexity:

Best case: ```O(1)```

Average case: ```O(n)``` - program runtime depends on user input

Worst case:```O(n)```

-------------
Problem 598 D - Igor at the Museum

Submission link: https://codeforces.com/problemset/submission/598/43495349

First, user will input the museum size (```n x m```) where ```n``` represents height and ```m``` represents the width. User also inputs the amount of positions that wants to be checked.

Then user inputs the cells in the ```cells``` array. User inputs either ```*``` or ```.``` for ```m``` times in the current loop index (```n```). After that, the program will check the amount of pictures that can be seen. Go to the ```determine``` function to determine number of pictures that can be seen from the current position (```a``` and ```b```). Print the answer.

Complexity:

Best case : ```O(n^2)```

Worst case: ```O(2n^2)```
