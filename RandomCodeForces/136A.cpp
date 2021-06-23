#include <bits/stdc++.h>

using namespace std;

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, temp, gift[105];

    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> temp;
        gift[temp] = i;
    }
    for (int i = 1; i <= n; i++)
        cout << gift[i] << " ";

    return 0;
}