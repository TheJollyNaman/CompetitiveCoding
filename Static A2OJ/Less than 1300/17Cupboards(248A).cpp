#include <bits/stdc++.h>

using namespace std;

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int l, r, lo = 0, lc = 0, ro = 0, rc = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> l >> r;
        if (l == 1)
        {
            lo++;
        }
        else
        {
            lc++;
        }
        if (r == 1)
        {
            ro++;
        }
        else
        {
            rc++;
        }
    }
    if (rc > ro)
    {
        r = ro;
    }
    else
    {
        r = rc;
    }
    if (lc > lo)
    {
        l = lo;
    }
    else
    {
        l = lc;
    }
    cout << l + r;

    return 0;
}