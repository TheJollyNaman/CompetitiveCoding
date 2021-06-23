//Was there in a virtual contest so thats why just resubmitted, cause
// why not!! xD Let the green rain!! :P

#include <bits/stdc++.h>

using namespace std;

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, temp;
    cin >> n;
    int arr[n];
    cin >> arr[0];
    for (int i = 1; i < n; i++)
    {
        cin >> temp;
        arr[i] = arr[i - 1] + temp;
    }

    int m;
    cin >> m;

    while (m--)
    {
        cin >> temp;
        int ans;
        /*
        int l = 0, r = n - 1, ans = -1;
        while (l <= r)
        {
            int m = (l + r) / 2;
            if (arr[m] == temp)
                ans = m;

            if (arr[m] < temp)
                l = m + 1;

            else
                r = m - 1;
        }
        if (ans != -1)
        {
            cout << m + 1 << endl;
        }
        else
        {
            cout << l << endl;
        }
        */
        ans = lower_bound(arr, arr + n, temp) - arr;
        cout << ans + 1 << endl;
    }

    return 0;
}