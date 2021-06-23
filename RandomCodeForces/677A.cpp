#include <bits/stdc++.h>

using namespace std;

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, h, temp, sum = 0;

    cin >> n >> h;

    for (int i = 0; i < n; i++)
    {

        cin >> temp;

        if (temp > h)
            sum++;

        sum++;
    }
    cout << sum;

    return 0;
}