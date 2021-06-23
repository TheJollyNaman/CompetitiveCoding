#include <bits/stdc++.h>

using namespace std;

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, i, a, d;
    char ch;

    cin >> n;

    a = 0;
    d = 0;

    for (i = 0; i < n; i++)
    {
        cin >> ch;

        if (ch == 'A')
            a++;
        else
            d++;
    }

    if (a > d)
        cout << "Anton" << endl;
    else if (d > a)
        cout << "Danik" << endl;
    else
        cout << "Friendship" << endl;

    return 0;
}