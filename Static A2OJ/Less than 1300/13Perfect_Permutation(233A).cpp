#include <bits/stdc++.h>

using namespace std;

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;

    if (n % 2 == 1)
    {
        cout << -1 << endl;
    }
    else
    {
        for (int i = 0; i < n; i = i + 2)
        {
            cout << i + 2 << " " << i + 1 << " ";
        }
    }

    return 0;
}