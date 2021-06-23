#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, k, arr[100], temp = 0;
    cin >> n >> k;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int j = 0; j < n; j++)
    {
        if (arr[j] >= arr[k - 1] && arr[j] > 0)
            temp += 1;
    }

    cout << temp;

    return 0;
}