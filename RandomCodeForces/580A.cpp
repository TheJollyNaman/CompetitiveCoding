#include <bits/stdc++.h>

using namespace std;

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, len = 1, maxlen = 1;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

        if (i > 0)
        {
            if (arr[i] >= arr[i - 1])
            {
                len++;
                maxlen = max(maxlen, len);
            }

            else
                len = 1;
        }
    }

    cout << maxlen << endl;
    return 0;
}