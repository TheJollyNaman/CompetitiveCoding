#include <bits/stdc++.h>

using namespace std;

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, temp;

    cin >> n;
    double ans, sum = 0.000;

    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        sum += temp;
    }
    ans = sum / n;
    cout << fixed << setprecision(12) << ans << endl;

    return 0;
}