#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main()
{
    int num;
    int test;
    int total;

    cin >> num;

    multiset<int>mn,mx;

    for(int i = 0;i<num;i++)
    {
       cin >> test;
       mx.insert(test);
       if(mn.size()>0)
       {
          if(mx.size()==mn.size()+1)
          {
            int boo=*(--mn.end());

            if(*mx.begin()<boo)
            {
               mx.erase(mx.find(*mx.begin()));
               mx.insert(boo);
               mn.erase(mn.find(boo));
               mn.insert(test);
            }
          }
          else
          {
             mn.insert(*mx.begin());
             mx.erase(mx.find(*mx.begin()));
          }
       }
        else
        {
           if(mx.size()>1)
           {
               mn.insert(*mx.begin());
               mx.erase(mx.find(*mx.begin()));
           }
        }
        if(mn.size()+1==mx.size()||mn.size()==0)
        {
            total =* mx.begin();
            cout << total << ".0\n";
        }
            else
            {
              total =*mx.begin()+*(--mn.end());
              cout << total/2;
              if(total%2)
              {
                  cout<<".5\n";
              }
              else
              {
                  cout<<".0\n";
              }
            }
       }
    return 0;
}

//Source: https://www.hackerrank.com/rest/contests/master/challenges/ctci-find-the-running-median/hackers/Ahmed_Morsy/download_solution
