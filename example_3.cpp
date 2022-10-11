#include<bits/stdc++.h>
using namespace std;

int t, n, liczba;
string wzorzec, tekst, slowo;
bool ok;
int tab[3000004];

void czysc()
{
    for(int i = 0; i <= slowo.size(); i++)
        tab[i] = 0;
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    cin >> t;
    for(int i = 1; i <= t; i++)
    {
        cin >> wzorzec >> tekst;
        slowo = wzorzec + '#' + tekst + tekst;
        liczba = 0;
        tab[0] = 0;

        for(int j = 1; j <= slowo.size(); j++)
        {
            while ((liczba > 0) && (slowo[liczba] != slowo[j]))
                liczba = tab[liczba - 1];
            if(slowo[j] == slowo[liczba]) liczba++;
            tab[j] = liczba;
        }

        ok = 0;
        for(int j = wzorzec.size(); j <= slowo.size(); j++)
        {
            if(tab[j] == wzorzec.size())
            {
                cout << "TAK\n";
                ok = 1;
                break;
            }
        }
        if(ok == 0) cout << "NIE\n";

        czysc();
    }
}
