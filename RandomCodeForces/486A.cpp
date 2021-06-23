#include <bits/stdc++.h>

using namespace std;

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long n, ans;
    cin >> n;
    if (n % 2 == 0)
        ans = n / 2;
    else
        ans = ((n + 1) / 2) * (-1);
    cout << ans << endl;

    return 0;
}