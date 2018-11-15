#pragma comment(linker, "/STACK:1024000000,1024000000")
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<queue>
#include<stack>
#include<math.h>
#include<vector>
#include<map>
#include<set>
#include<cmath>
#include<string>
#include<algorithm>
#include<iostream>
#define exp 1e-4
using namespace std;
const int def = 405;
const int M = 100000;
const int inf = 100000000;
const int mod = 2009;
int railway1[def][def],railway2[def];
bool checker[def];
int main()
{
    int towns,rails,a,b,k,u,v,Min,sum1,sum2;

    const int def = 405;
    const int M = 100000;
    const int inf = 100000000;
    const int mod = 2009;
    int railway1[def][def],railway2[def];
    bool checker[def];

    memset(checker,false,sizeof(checker));
    //scanf("%d%d",&n,&m);
    cin >> towns >> rails;

    for(a = 1; a <= towns; a++)
    {
        for(b = 1; b <= towns; b++)
        {
            railway1[a][b]=inf;
        }
    }

    for(a = 0; a < rails; a++)
    {
        //scanf("%d%d",&u,&v);
        cin >> u >> v;
        railway1[u][v] = railway1[v][u] = 1;
    }

    railway2[1] = sum1 = sum2 = 0;
    checker[1] = true;

    for(a = 2; a <= towns; a++)
    {
        railway2[a] = railway1[1][a];
    }

    for(a = 1; a < towns; a++)
    {
        Min = inf;
        for(b = 1; b <= towns; b++)
        {
            if(!checker[b] && railway2[b]< Min)
            {
                Min = railway2[k = b];
            }
        }

        if(Min == inf)
        {
            break;
        }

        checker[k] = true;;

        for(b = 1; b <= towns; b++)
        {
            railway2[b] =min (railway2[b],railway2[k] + railway1[k][b]);
        }
    }

    sum1 = railway2[towns];

    for(a = 1; a <= towns; a++)
    {
        for(b = 1; b <= towns; b++)
        {
            if(railway1[a][b] != inf)
            {
                railway1[a][b] = inf;
            }
            else
            {
                railway1[a][b] = 1;
            }
        }
    }

    memset(checker,false,sizeof(checker));

    railway2[1]=0;
    checker[1]=true;

    for(a = 2; a <= towns; a++)
    {
        railway2[a] = railway1[1][a];
    }
    for(a = 1; a < towns ; a++)
    {
        Min = inf;

        for(b = 1; b <= towns; b++)
        {
            if(!checker[b] && railway2[b] < Min)
            {
                Min = railway2[k=b];
            }
        }

        if(Min == inf)
        {
            break;
        }

        checker[k] = true;;
        for(b = 1; b <= towns; b++)
        {
            railway2[b] = min(railway2[b],railway2[k]+railway1[k][b]);
        }
    }

    sum2 = railway2[towns];

    if(sum1 != inf && sum2 != inf)
    {
        //printf("%d\n",max(sum1,sum2));
        cout << max(sum1,sum2);
    }
    else
    {
        puts("-1");
    }
    return 0;
}
