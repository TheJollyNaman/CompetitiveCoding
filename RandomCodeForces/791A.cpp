#include <bits/stdc++.h>

using namespace std;

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int a, b, ans = 0;

    cin >> a >> b;

    if (a > b)
        ans = 0;

    else
        while (a <= b)
        {
            a = a * 3;
            b = b * 2;
            ans++;
        }

    cout << ans << endl;

    return 0;
}