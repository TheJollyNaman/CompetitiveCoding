#include <bits/stdc++.h>

using namespace std;

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int a, ans;
    cin >> a;
    ans = a / 5;
    if (a % 5 > 0)
    {
        ans++;
    }
    cout << ans;

    return 0;
}