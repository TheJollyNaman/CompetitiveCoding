#include <bits/stdc++.h>

using namespace std;

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, temp;
    cin >> n >> temp;
    int min = temp, max = temp, count = 0;
    n--;
    while (n--)
    {
        cin >> temp;
        if (temp < min)
        {
            min = temp;
            ++count;
        }
        if (temp > max)
        {
            max = temp;
            ++count;
        }
    }
    cout << count << endl;
    return 0;
}