// 3rd test case WA


#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
#include<iomanip>

using namespace std;

typedef unsigned long long int ulli;


int main(){

    int t,i,loop=1;
    ulli n=1000000007,z;

    cin>>t;

    vector<bool> prime(n+1,true);
            
        prime[0] = false;
        prime[1] = false;

        int m = sqrt(n);
        
        for (ulli p=2; p<=m; p++)
        {
            if (prime[p])
            {
                for (ulli i=p*2; i<=n; i += p)
                prime[i] = false;
            }
        }
            
        vector<ulli> ans;
        for (int i=0;i<n;i++)
            if (prime[i])
                ans.push_back(i);

    while(t--){
        cin>>z;
        cout<<"Case #"<<loop<<": ";

            ulli l = 0;
            ulli size = ans.size();
            ulli r = size-1;
            ulli val = sqrt(z);
            ulli mid;
            
            while(l<=r){
                mid = (l + r) / 2;
                if(ans[mid] <= val){
                    l = mid+1;
                }
                else{
                    r = mid-1;
                }
            }
            
        
        while((ans[mid]*ans[mid+1])>z){
            mid--;
        }
        cout<<setprecision(20)<<ans[mid]*ans[mid+1];
    
        cout<<endl;
        loop++;
        }

    return 0;
}