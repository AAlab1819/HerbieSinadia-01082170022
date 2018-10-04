#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector <vector<int> > g;			//Initialize tree array

    int const N = 1e5 + 1;

    int value;						//Initialize number of vertices
    int temp;						//Temporary value
	int counter;

	cin >> value;                   //Input amount of vertices

	g.resize(value);				//Set the size of the vecotr/array with the inserted numbe of vertices

	//Loop to input tree values
	for(int i = 1; i < value; ++i)
    {
		cin >> temp;				//Input parent of i-th + 1 vertex
		g[--temp].push_back(i);		//Push the inserted value into the vector
	}

	//Loop to test whether the tree is a spruce or not
	for(int i = 0, counter; i < value; ++i)
    {
		counter = 0;			//Counter

		//If current vector index is empty
		if(g[i].empty())
		{
		    continue;			//Skip if array index is empty
		}

		//Loop to count the leaf children count in non-leaf vertices
		for(int j = 0; j < g[i].size(); ++j)
        {
			//If no other descendants is found
            if(g[g[i][j]].empty())
            {
                ++counter;
            }
        }

		//If leaf childs is less than 3
		if(counter < 3)
        {
			cout << "No";		//Print "No"
			return 0;
		}
	}
    cout << "Yes";
    return 0;
}
