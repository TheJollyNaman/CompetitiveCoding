#include <bits/stdc++.h>

using namespace std;

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t, m, a[1000];

    cin >> t;

    while (t--)
    {
        cin >> m;
        int count = m;
        for (int i = 0; i < m; i++)
            cin >> a[i];

        sort(a, a + m);
        for (int i = 0; i < m - 1; i++)
        {
            if (a[i + 1] - a[i] <= 1)
            {
                count -= 1;
            }
        }
        if (count == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}