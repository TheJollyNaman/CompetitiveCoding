#include <bits/stdc++.h>

using namespace std;

bool prime(int x)
{
    bool isprime = 1;
    for (int i = 2; i <= sqrt(x); i++)
    {
        if (x % i == 0)
        {
            isprime = 0;
            break;
        }
    }
    return isprime;
}

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, m, flag = 0;
    cin >> n >> m;

    for (int i = n + 1; i <= m; i++)
    {
        if (prime(i))
        {
            if (i == m)
            {
                flag = 1;
                break;
            }
            else
            {
                break;
            }
        }
    }

    if (flag == 1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}