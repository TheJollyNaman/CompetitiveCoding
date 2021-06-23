#include <bits/stdc++.h>

using namespace std;

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    int a, b;
    cin >> n;
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        if (b - a >= 2)
            total++;
    }
    cout << total;

    return 0;
}