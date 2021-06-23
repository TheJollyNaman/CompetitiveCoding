#include <bits/stdc++.h>

using namespace std;

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, ans = 0, count = 0, sum = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }

    sort(a, a + n);

    for (int i = n - 1; i >= 0; i--)
    {

        ans = ans + a[i];
        sum = sum - a[i];
        count++;

        if (ans > sum)
        {
            break;
        }
    }

    cout << count << endl;
    return 0;
}