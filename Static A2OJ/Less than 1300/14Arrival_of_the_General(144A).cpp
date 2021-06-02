#include <bits/stdc++.h>

using namespace std;

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, high = 0, low = 101, hi, li, ans;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (high < arr[i])
        {
            hi = i;
            high = arr[i];
        }
        if (low >= arr[i])
        {
            li = i;
            low = arr[i];
        }
    }

    ans = hi - 1 - li + n;
    if (li < hi)
    {
        ans--;
    }
    cout << ans;

    return 0;
}