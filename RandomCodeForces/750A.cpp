#include <bits/stdc++.h>

using namespace std;

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, k, i, sum = 0, res, c = 0;

    cin >> n >> k;

    res = 240 - k;
    for (i = 1; i <= n; i++)
    {
        sum += 5 * i;
        if (sum > res)
            break;
        c++;
    }

    cout << c << endl;

    return 0;
}