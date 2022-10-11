#include <bits/stdc++.h>
using namespace std;
vector <int> dane[1000002];
int n;
bool odwiedzony[1000002];

void czysc()
{
    for(int h = 0; h < n; h++)
    {
        odwiedzony[h] = false;
        dane[h].clear();
    }
}

int dfs(int u)
{
   odwiedzony[u] = true;
   for(int i = 0; i < dane[u].size(); i++)
   {
       int v = dane[u][i];
       if(!odwiedzony[v]) dfs(v);
   }
}

void wczyt()
{
    int m;
    cin >> n >> m;
    for(int j = 0; j < m; j++)
    {
        int a,b;
        cin >> a >> b;
        dane[b].push_back(a);
        dane[a].push_back(b);
    }
}


int main()
{
    ios_base::sync_with_stdio(0);
    int t;
    cin >> t;

    while(t--)
    {
        wczyt();
        dfs(1);
        bool odp = 0;

        for(int j = 1; j < n; j++)
            if(!odwiedzony[j]) odp = 1;

        if(!odp) cout << "TAK\n";
        else cout << "NIE\n";

        czysc();
    }
    return 0;
}
