#include <bits/stdc++.h>

using namespace std;

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, temp, count[5] = {0};
    cin >> n;
    while (n--)
    {
        cin >> temp;
        count[temp] += 1;
    }

    int total = count[4] + count[3] + count[2] / 2;
    count[1] = count[1] - count[3];
    if (count[2] % 2 == 1)
    {
        total += 1;
        count[1] = count[1] - 2;
    }
    if (count[1] > 0)
    {
        total = total + (count[1] + 3) / 4;
    }
    cout << total;
    return 0;
}