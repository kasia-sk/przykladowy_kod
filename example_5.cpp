#include<bits/stdc++.h>
using namespace std;

int x_1, x_2, y_1, y_2, z_1, z_2, x, y, z, a;

int NWD(int a, int b)
{
    int c = 0;
    if(b == 0)
        return a;
    else
    {
        while(b != 0)
        {
            c = a%b;
            a = b;
            b = c;
        }
        return a;
    }
    return 0;
}

int main()
{
    cin >> x_1 >> y_1 >> z_1 >> x_2 >> y_2 >> z_2;
    x = x_2 - x_1;
    y = y_2 - y_1;
    z = z_2 - z_1;

    a = NWD(x, y);
    a = NWD(a, z);

    cout << a + 1;
}
