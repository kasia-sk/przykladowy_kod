#include<bits/stdc++.h>
using namespace std;
vector <int> wierzcholek [1000006];
int kolor [1000006];
void dfs (int v)
{
    kolor[v]=1;
    for (int i=0; i<wierzcholek[v].size(); i++)
    {
        int sasiad=wierzcholek[v][i];
        if (kolor[sasiad]==0)
            dfs (sasiad);
    }
}
int main()
{
    std::ios_base::sync_with_stdio(0);
    int ile;
    cin >>ile;
    for (int o=0; o<ile; o++)
    {
        int n,m;
        cin >>n>>m;
        for (int i =0; i<m; i++)
        {
            int a,b;
            cin >>a>>b;
            wierzcholek[a].push_back(b);
            wierzcholek[b].push_back(a);
        }
        dfs(1);
        bool czy_wypisac=0;
        for (int i=1; i<=n; i++)
        {
            if (kolor[i]==0)
                czy_wypisac=1;
        }
        if (czy_wypisac==0)
            cout << "TAK\n";
        else cout << "NIE\n";
        for (int i =0; i<n; i++)
        {
            kolor[i]=0;
            wierzcholek[i].clear();
        }
    }
}
