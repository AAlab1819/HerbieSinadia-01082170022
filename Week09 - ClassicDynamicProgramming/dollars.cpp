#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <stack>
#include <queue>
#include <vector>
#include <map>
#include <sstream>
#include <set>
#include <cmath>
#include <iomanip>
#define N 1000000
using namespace std;

int main ()
{
    int coins [] = {1, 2, 4, 10, 20, 40, 100, 200, 400, 1000, 2000};

    double arr [6000 + 10];

    memset (arr, 0, sizeof (arr));

    arr [0] = 1;

    for (int a = 0; a < 11; a++ )
    {
        for (int b = 1; b <= 6000; b++ )
        {
            if (b - coins [a] >= 0)
            {
                arr [b] += arr [b - coins [a]];
            }
        }
    }

    double input;

    bool complete = false;

    while (complete != false)
    {
        cin >> input;

        if (input == 0 )
        {
            complete = true;
            break;
        }

        int answer = input * 20;

        cout << setw(6) << input << arr[answer] << endl;
    }

    return 0;
}
