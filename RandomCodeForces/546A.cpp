#include <bits/stdc++.h>

using namespace std;

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int k, n, w;
    long long sum = 0;

    cin >> k >> n >> w;

    for (int i = 1; i <= w; i++)
        sum = sum + (i * k);

    if (sum <= n)
        cout << 0 << "\n";

    else
        cout << sum - n << "\n";

    return 0;
}