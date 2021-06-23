#include <bits/stdc++.h>

using namespace std;

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int ans = 1000000000;
        for (int x = 1; x * x <= n; ++x)
            ans = min(ans, x - 1 + (n - 1) / x);

        cout << ans << endl;
    }

    return 0;
}