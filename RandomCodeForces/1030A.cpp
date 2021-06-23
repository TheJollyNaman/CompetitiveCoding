#include <bits/stdc++.h>

using namespace std;

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, temp;

    cin >> n;

    while (n--)
    {
        cin >> temp;
        if (temp == 1)
        {
            cout << "HARD" << endl;
            return 0;
        }
    }
    cout << "EASY" << endl;
    return 0;
}