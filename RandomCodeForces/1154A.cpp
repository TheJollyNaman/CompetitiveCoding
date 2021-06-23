#include <bits/stdc++.h>

using namespace std;

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int max,a[5];

	for(int i=0;i<4;i++)
		cin>>a[i];

    max=a[0];

	sort(a,a+4);

	for(int i=1;i<4;i++)
	{
		if(a[i]>a[i-1])
		    max=a[i];
	}
	
	for(int i=0;i<4;i++)
	{
		if(max-a[i]!=0)
		cout<<max-a[i]<<" ";
	}

    return 0;
}