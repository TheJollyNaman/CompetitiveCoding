#include <bits/stdc++.h>

using namespace std;

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int i, tempa, tempb;
    string a, b;
    cin >> a >> b;
    for (i = 0; i < a.size(); i++)
    {
        if (a[i] == '1')
        {
            tempa = 1;
        }
        else
        {
            tempa = 0;
        }

        if (b[i] == '1')
        {
            tempb = 1;
        }
        else
        {
            tempb = 0;
        }

        tempa = tempa ^ tempb;
        cout << tempa;
    }
    cout << endl;

    return 0;
}