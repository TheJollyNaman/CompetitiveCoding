//Was there in a virtual contest so thats why just resubmitted, cause
// why not!! xD Let the green rain!! :P

#include <bits/stdc++.h>

using namespace std;

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long t;

    cin >> t;

    while (t--)
    {
        long long n, l, r, temp;
        long long total = 0;
        cin >> n >> l >> r;
        vector<long long> vec(n);
        for (long long i = 0; i < n; i++)
        {
            cin >> vec[i];
        }

        sort(vec.begin(), vec.end());

        for (long long i = 0, LEFT = n, RIGHT = n; i < n; i++)
        {
            while (LEFT && vec[LEFT - 1] + vec[i] >= l)
            {
                LEFT--;
            }
            while (RIGHT && vec[RIGHT - 1] + vec[i] > r)
            {
                RIGHT--;
            }

            total += min(i, RIGHT) - min(i, LEFT);
        }
        cout << total << endl;
    }

    return 0;
}