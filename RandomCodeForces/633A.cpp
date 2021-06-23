#include <bits/stdc++.h>

using namespace std;

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int a, b, c;
    cin >> a >> b >> c;

    /*
    int temp = c / a + 1;
    int temp2 = 0;
    while (temp > 0)
    {
        if (a * temp + b * temp2 == c)
        {
            cout << "Yes" << endl;
            return 0;
        }
        while (a * temp + b * temp2 > c)
        {
            temp--;
        }
        while (a * temp + b * temp2 < c)
        {
            temp2++;
        }
    }
    cout << "No" << endl;
    */

    for (int i = 0; i <= c; i++)
    {
        for (int j = 0; j <= c; j++)
        {
            if (a * i + b * j == c)
            {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }

    cout << "No" << endl;
    return 0;
}