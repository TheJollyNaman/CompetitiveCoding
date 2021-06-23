#include <bits/stdc++.h>

using namespace std;

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long n, m, a, l, b;
    cin >> n >> m >> a;
    l = n / a;
    if (n % a != 0)
        l++;
    b = m / a;
    if (m % a != 0)
        b++;
    cout << l * b;

    return 0;
}