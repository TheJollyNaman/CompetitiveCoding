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

    long long sum1 = 0, sum3 = 0;
    int start = -1, end = n;
    int posi = -1;

    while (start < end)
    {
        if (sum1 < sum3)
        {
            start++;
            sum1 += arr[start];
        }
        else if (sum1 > sum3)
        {
            end--;
            sum3 += arr[end];
        }
        else
        {
            posi = start;
            start++;
            end--;
            sum1 += arr[start];
            sum3 += arr[end];
        }
    }

    long long summ = 0;

    for (int i = 0; i <= posi; i++)
    {
        summ += arr[i];
    }
    cout << summ;

    return 0;
}