//Was there in a virtual contest so thats why just resubmitted, cause
// why not!! xD Let the green rain!! :P

#include <bits/stdc++.h>

using namespace std;

bool comp(pair<int, int> &a, pair<int, int> &b)
{
    if (a.first != b.first)
        return (a.first > b.first);
    else
    {
        return (a.second < b.second);
    }
}

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, r, A, B;
    cin >> n >> r;
    vector<pair<int, int>> vec;
    for (int i = 0; i < n; i++)
    {
        cin >> A >> B;
        vec.push_back(make_pair(A, B));
    }
    sort(vec.begin(), vec.end(), comp);

    int ans1 = vec[r - 1].first;
    int ans2 = vec[r - 1].second;
    int total = 0;

    for (int i = 0; i < n; i++)
    {
        if (vec[i].first == ans1 && vec[i].second == ans2)
        {
            total++;
        }
    }
    cout << total << endl;
    return 0;
}