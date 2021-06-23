#include <bits/stdc++.h>

using namespace std;

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int a;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        if (i % 2 == 0)
            cout << "I hate ";
        else
            cout << "I love ";

        if (i != a - 1)
            cout << "that ";
        else
            cout << "it ";
    }
    return 0;
}