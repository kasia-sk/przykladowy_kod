#include<bits/stdc++.h>
using namespace std;

long long t, x_1, y_1, x_2, y_2, x_3, y_3, x_4, y_4;
long long x_11, y_11, x_22, y_22, x_33, y_33, x_44, y_44;

int main ()
{
    std::ios::sync_with_stdio(false);
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cin >> x_1 >> y_1 >> x_2 >> y_2 >> x_3 >> y_3 >> x_4 >> y_4;
        x_11 = x_1;
        y_11 = y_1;
        x_22 = x_2;
        y_22 = y_2;
        x_33 = x_3;
        y_33 = y_3;
        x_44 = x_4;
        y_44 = y_4;
        if(x_1 > x_2) swap(x_1, x_2);
        if(x_3 > x_4) swap(x_3, x_4);
        if(y_1 > y_2) swap(y_1, y_2);
        if(y_3 > y_4) swap(y_3, y_4);
        if(x_2 >= x_3 && x_4 >= x_1 && y_2 >= y_3 && y_4 >= y_1)
        {
            if(((x_22-x_11)*(y_33-y_11)-(x_33-x_11)*(y_22-y_11) >= 0 && (x_22-x_11)*(y_44-y_11)-(x_44-x_11)*(y_22-y_11) <= 0) || ((x_22-x_11)*(y_33-y_11)-(x_33-x_11)*(y_22-y_11) <= 0 && (x_22-x_11)*(y_44-y_11)-(x_44-x_11)*(y_22-y_11) >= 0))
            {
                if(((x_44-x_33)*(y_22-y_33)-(x_22-x_33)*(y_44-y_33) >= 0 && (x_44-x_33)*(y_11-y_33)-(x_11-x_33)*(y_44-y_33) <= 0) || ((x_44-x_33)*(y_22-y_33)-(x_22-x_33)*(y_44-y_33) <= 0 && (x_44-x_33)*(y_11-y_33)-(x_11-x_33)*(y_44-y_33) >= 0))
                {
                    cout << "TAK\n";
                }
            }
        }
        else cout << "NIE\n";
    }
}
