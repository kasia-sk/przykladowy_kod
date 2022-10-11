#include <bits/stdc++.h>
using namespace std;

int tab[100003];
long long n;

void quick_sort(int left, int right)
{
    int piwot = tab[(left + right)/2];
    int j = right;
    int i = left;
    do
    {
        while(tab[i] < piwot) i++;
        while(tab[j] > piwot) j--;
        if(j >= i)
        {
            swap(tab[i], tab[j]);
            i++;
            j--;
        }
    }
    while(j >= i);
    {
        if(j > left)
        {
            quick_sort(left, j);
        }
        if(i < right)
        {
            quick_sort(i, right);
        }
    }
}

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> tab[i];
    }
    quick_sort(0, n-1);
    for (int i = 0; i < n; i++)
    {
        cout << tab[i] << " ";
    }
}
