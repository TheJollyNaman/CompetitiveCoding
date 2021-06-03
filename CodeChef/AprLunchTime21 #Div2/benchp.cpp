#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){

    ios_base::sync_with_stdio(0); cin.tie(0);

    long long t,n,w,wr,temp,totalw;

    cin>>t;

    while(t--){

        totalw=0;

        vector<int> v;
        cin>>n>>w>>wr;

        

        for(int i = 0 ; i < n ; i++){
            cin>>temp;
            v.push_back(temp);
        }

        sort(v.begin(),v.end());

        totalw=wr;

        for(int i = 0 ; i < n ; i++){
            if(v[i]==v[i+1]){
                totalw+=(2*v[i]);
                i=i+1;
            }
        }
        if(totalw>=w){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

        
        }

    return 0;
}