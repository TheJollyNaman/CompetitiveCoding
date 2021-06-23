#include <bits/stdc++.h>

using namespace std;

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;

    cin >> t;

    if (t % 2 == 0 && t >= 4)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}