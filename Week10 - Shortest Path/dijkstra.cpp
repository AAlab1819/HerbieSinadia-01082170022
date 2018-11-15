#include <iostream>
#include <queue>
#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;

typedef pair<long long, int> P;
priority_queue<P, vector<P>, greater<P> > Q;
typedef long long LL;
const int maxnode = 1e5+3, maxedge = 2e5+5;
int n, m, u[maxedge], v[maxedge], fir[maxnode], nx[maxedge], pre[maxnode], Ans[maxnode];
LL checker[maxedge], dis[maxedge], cnt, tot;
inline void addedge(int x, int y, LL z)
{
    nx[++cnt] = fir[x];
    fir[x] = cnt;
    u[cnt] = x, v[cnt] = y, checker[cnt] = z;
}
inline void Dijkstra()
{
    fill(dis+1, dis+1+n, 2147483647000);
    Q.push(P(0, 1));
    dis[1] = 0;
    int k;

    while (!Q.empty())
    {
        P x = Q.top();

        Q.pop();

        if(x.first > dis[x.second])
        {
            continue;
        }

        k = fir[x.second];

        while (k != -1)
        {
            if(dis[u[k]] + checker[k] < dis[v[k]])
            {
                dis[v[k]] = dis[u[k]] + checker[k];
                pre[v[k]] = u[k];
                Q.push(P(dis[v[k]], v[k]));
            }
            k = nx[k];
        }
    }
}

int main()
{
    //scanf("%d%d", &n, &m);
    cin >> n >> m;
    memset(fir, -1, sizeof(fir));
    int x, y; LL z;
    for(int i = 1; i <= m; i++)
    {
        //scanf("%d%d%lld", &x, &y, &z);
        cin >> x >> y >> z;
        addedge(x, y, z);
        addedge(y, x, z);
    }

    Dijkstra();

    if(dis[n] == 2147483647000)
    {
        //printf("-1\n");
        cout << "-1\n";
        return 0;
    }

    for(int i = n; i >= 1; i = pre[i])
    {
        Ans[++tot] = i;
    }

    for(int i = tot; i >= 1; i--)
    {
        //printf("%d ", Ans[i]);
        cout << Ans[i] << " ";
    }
}
