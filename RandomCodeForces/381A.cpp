#include <bits/stdc++.h>

using namespace std;

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;

    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int seerja = 0, dima = 0, l = 0, r = n - 1;
    int temp = 0, turn = 0;

    while (l <= r)
    {

        if (arr[l] > arr[r])
        {
            temp = arr[l];
            l++;
        }
        else
        {
            temp = arr[r];
            r--;
        }

        if (turn % 2 == 0)
        {
            seerja += temp;
        }
        else
        {
            dima += temp;
        }

        turn++;
    }
    cout << seerja << " " << dima;
    return 0;
}