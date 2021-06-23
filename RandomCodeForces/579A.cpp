#include <bits/stdc++.h>

using namespace std;

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int i, n, a[1000], count = 0;
    cin >> n;

    for (i = 0; n > 0; i++)
    {
        a[i] = n % 2;
        n = n / 2;
    }

    for (i = i - 1; i >= 0; i--)
    {
        if (a[i] == 1)
            count += 1;
    }

    cout << count;

    return 0;
}