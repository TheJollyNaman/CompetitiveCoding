#include <bits/stdc++.h>

using namespace std;

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int a, b, sum = 0;
    cin >> a >> b;
    sum += a;

    while (a >= b)
    {
        sum += a / b;
        a = a / b + a % b;
    }

    cout << sum;

    return 0;
}