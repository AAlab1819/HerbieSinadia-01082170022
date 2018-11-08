#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	int test, i, j;

	cin >> test;

	while(test--)
  {
		int objects, price, weight, group, max_weight, answer = 0;

		int possibilities[50];
    
		cin >> objects;

		for(i = 0; i < N; i++)
		{
			 cin >> price >> weight;
			 for(j = 30; j >= weight; j--)
       {
				 if(possibilities[j] < possibilities[j-weight] + price)
         {
					 possibilities[j] = possibilities[j-weight] + price;
         }
       }
		}

		cin >> group;

		while(group--)
		{
			cin >> max_weight;
			answer += possibilities[max_weight];
		}

		cout << answer;
	}
    return 0;
}
