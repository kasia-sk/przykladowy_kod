#include <bits/stdc++.h>
using namespace std;

int n, m, a, b, waga;
int tab[7007];

int findd (int x)
{
    if (tab[x]!=x)
    {
        tab[x] = findd(tab[x]);
    }
    return tab[x];
}

int unionn (int x, int y)
{
    tab[findd(x)] = tab[findd(y)];
}

struct krawedz {
    int a;
    int b;
    int waga;
    int nrkrawedzi;
};

krawedz struktury[300006];

bool comp(krawedz x, krawedz y)
{
    return x.waga < y.waga || (x.waga == y.waga && x.nrkrawedzi < y.nrkrawedzi);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin >> n >> m;
    for(int i = 1; i <= n; i++)
    {
        tab[i] = i;
    }

    for(int i = 1; i <= m; i++)
    {
        cin >> a >> b >> waga;
        struktury[i].a = a;
        struktury[i].b = b;
        struktury[i].waga = waga;
        struktury[i].nrkrawedzi = i;
    }

    sort(struktury + 1, struktury + m + 1, comp);

    for (int i = 1; i <= m; i++)
    {
        if(findd(struktury[i].a) != findd(struktury[i].b))
        {
            unionn(struktury[i].a, struktury[i].b);
        }
        else cout << struktury[i].nrkrawedzi << " ";
    }
}
