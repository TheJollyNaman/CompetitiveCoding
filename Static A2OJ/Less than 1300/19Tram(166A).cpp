#include <bits/stdc++.h>

using namespace std;

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, tempenter, tempexit, capa = 0, max = 0;

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> tempexit >> tempenter;
        capa = capa - tempexit + tempenter;
        if (max < capa)
        {
            max = capa;
        }
    }
    cout << max;

    return 0;
}