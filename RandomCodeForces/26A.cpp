#include <bits/stdc++.h>

using namespace std;

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, count = 0;
    int arr[3005];
    cin >> n;

    for (int i = 2; i <= n; i++)
    {
        arr[i] = 0;
    }

    for (int i = 2; i <= n; i++)
    {
        if (arr[i] == 0)
        {
            for (int j = i; j <= n; j = j + i)
                arr[j]++;
        }
    }

    for (int i = 2; i <= n; i++)
    {
        if (arr[i] == 2)
            count++;
    }

    cout << count << endl;

    return 0;
}