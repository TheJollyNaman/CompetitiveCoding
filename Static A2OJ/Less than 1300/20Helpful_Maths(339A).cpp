#include <bits/stdc++.h>

using namespace std;

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string str;
    cin >> str;
    vector<int> vec;
    int temp;

    for (int i = 0; i < str.length(); i = i + 2)
    {
        temp = str[i] - '0';
        vec.push_back(temp);
    }

    sort(vec.begin(), vec.end());
    cout << vec[0];

    for (auto it = vec.begin() + 1; it != vec.end(); it++)
    {
        cout << "+" << *it;
    }

    return 0;
}