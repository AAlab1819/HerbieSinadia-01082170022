#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int answer;

char cells[20000][20000];           //Cells array
int pd[20000][20000];
int checker[100000];

//To determine viewable pictures in the position
void determine(int x,int y, int height, int width, int test)
{
    int blockX[4]={0,0,1,-1};
    int blockY[4]={1,-1,0,0};

    //If museum size is small
    if(x > height || x < 1 || y > width || y< 1)
    {
        return;
    }

    //If cells is impassable (*)
    if(cells[x][y] == '*')
    {
        answer++;
        return ;
    }

    //If current coordinate is empty
    if(pd[x][y] != 0)
    {
        return;
    }

    pd[x][y] = test;

    //Recursion
    for(int i = 0; i < 4; i++)
    {
        int temp_x = x + blockX[i];
        int temp_y = y + blockY[i];
        determine(temp_x,temp_y,height,width,test);
    }
    return;
}

int main()
{
    int height;
    int width;
    int starting_positions;

    int test;

    int a;
    int b;

    cin >> height >> width >> starting_positions;           //Input museum size & starting positions
    
    //Input loop
    for(int i = 1; i <= height; i++)
    {
        for(int j = 1; j <= width; j++)
        {
            cin >> cells[i][j];
        }
    }
    
    //Check for number of pictures
    for(test = 1; test <= starting_positions; test++)
    {
        cin >> a >> b;

        answer = 0;

        if(!pd[a][b])
        {
            determine(a,b,height,width,test);
        }

        else
        {
            answer = checker[pd[a][b]];
        }

        checker[test]=answer;

        cout << answer << endl;         //Print answer
    }
    return 0;
}
