#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){

    int t,n,x,D,H,Effective[100],count,max_hit;

    cin>>t;

    while(t--){

        cin>>n>>x;
        count=0;
        max_hit=0;
        for(int i=0;i<n;i++){
            cin>>D>>H;
            Effective[i]=D-H;
            max_hit=max(max_hit,D);
        }

        //Could have stored only the mopst efficient hit just
        //like i stored the most damage dealing hit.
        //This would have improved the time complexity

        sort(Effective,Effective+n);

        if(Effective[n-1]<=0 && x>max_hit){
            cout<<"-1"<<endl;
            continue;
        }
        //Could be done in o(1) time (Edit : TLE in 2nd test)
        
        /*
        while(x-max_hit>0){
            x=x-Effective[n-1];
            count++;
        }
        */

        if(Effective[n-1]==0 && max_hit>=x){
            cout<<"1"<<endl;
            continue;
        }
        if(Effective[n-1]==0 && max_hit<x){
            cout<<"-1"<<endl;
            continue;
        }

        count=(x-max_hit)/Effective[n-1];

        if(x-max_hit<=0)
            cout<<"1"<<endl;
        else if((x-max_hit)%Effective[n-1]==0)
            cout<<count+1<<endl;
        else
            cout<<count+2<<endl;
        }

    return 0;
}

