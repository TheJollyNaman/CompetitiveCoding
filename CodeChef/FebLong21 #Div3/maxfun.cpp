#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){

    long long t,n,i,ans,min,max,min_next;
    int A[100000];
    cin>>t;

    while(t--){
       
        cin>>n;
        
        for(i=0;i<n;i++){
            cin>>A[i];
        }

        sort(A,A+n);

        min=A[0];
        min_next=A[1];
        max=A[n-1];

        ans=(max-min) + (max-min_next) + (min_next-min);

        cout<<ans<<endl;
        
        }

    return 0;
}