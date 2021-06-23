#include <bits/stdc++.h>

using namespace std;

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int primes[100005];
    primes[1] = 1;
    for (int i = 2; i < 100005; i++)
    {
        if (primes[i] == 0)
        {
            for (int j = i * 2; j < 100005; j = j + i)
                primes[j] = 1;
        }
    }

    int n;
    cin >> n;

    if (n == 1)
    {
        cout << 1 << endl
             << 1;
    }
    else if (n == 2)
    {
        cout << 1 << endl
             << 1 << ' ' << 1;
    }
    else
    {
        cout << 2 << endl;
        for (int i = 1; i <= n; i++)
        {
            if (primes[i + 1])
                cout << 2 << " ";
            else
                cout << 1 << " ";
        }
        cout << endl;
    }

    return 0;
}