Weekly Submission 04
------------------
Problem 268 B - Buttons

Submission link: https://codeforces.com/problemset/submission/268/43241175

Explanation:

The program must output the number of buttons to be pressed in the worst possible case (bad luck). First, the user inputs the amount of buttons.

After that, the program will go to a ```for``` loop in which the program will count the worst possible tries when ```n```th buttons are
correctly pressed.

For example = number of buttons is ```3```.

The order of tries shall be (assuming the correct order is in descending order from the last button) :
```
    1
    2
    3 1
    3 2 1
```
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
to calculate the presses needed when ```a``` buttons have been pressed. ```a``` goes up after each operation, meaning that the amount
of buttons that has been 
