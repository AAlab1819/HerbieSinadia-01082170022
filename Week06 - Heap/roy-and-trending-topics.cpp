#include <bits/stdc++.h>
using namespace std;

const int N = 1e6+5;
int n;
pair<pair<long long, int>, long long> arr[N];

bool checker (int i, int j)
{
        return  arr[i].first.first > arr[j].first.first ||
                arr[i].first.first == arr[j].first.first &&
                arr[i].first.second > arr[j].first.second;
}
void push(pair<pair<long long, int>, long long> x)
{
        arr[n] = x;
        int i = n;
        while (i > 0 && checker(i, (i-1)/2))
        {
            swap(arr[i], arr[(i-1)/2]);
            i = (i-1)/2;
        }
        n++;
}

pair<pair<long long, int>, long long> get_max()
{
    if (n == 0)
    {
        return {{LONG_MIN, -1}, LONG_MIN};
    }

    return arr[0];
}

void pop()
{
    if (n == 0)
    {
        return;
    }
    n--;

    swap(arr[0], arr[n]);
    int i = 0, j = -1;

    while (i != j)
    {
        j = i;
        int l = 2*i+1;
        int r = 2*i+2;

        if (l < n && checker(l, i))
        {
            i = 1;
        }

        if (r < n && checker(r, i))
        {
            i = r;
        }

        swap(arr[i], arr[j]);
    }
}

int main()
{
    int m;
    cin >> m;
    while (m--)
    {
        long long id, z, p, l, c, s;
        cin >> id >> z >> p >> l >> c >> s;
        long long val = 1LL * (p*50+l*5+c*10+s*20);
        push({{val-z, id}, val});
    }

    for (int i=0; i<5 && n > 0; i++)
    {
        cout << get_max().first.second << ' ' << get_max().second << '\n';
        pop();
    }
}
