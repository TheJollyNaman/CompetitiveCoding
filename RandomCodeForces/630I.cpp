#include <bits/stdc++.h>

using namespace std;

long long binpow(long long a, long long b)
{
    long long res = 1;
    while (b > 0)
    {
        if (b % 2)
            res = res * a;
        a = a * a;
        b = b / 2;
    }
    return res;
}

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    long long total = 2 * 4 * 3 * binpow(4, n - 3) + (n - 3) * 4 * 3 * 3 * binpow(4, n - 4);
    cout << total;

    return 0;
}