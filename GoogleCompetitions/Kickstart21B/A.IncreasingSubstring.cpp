#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){

    int t,n,i,currentcount,loop=1;
    string S;
    cin>>t;

    while(t--){
        
        cin>>n;
        cin>>S;
        cout<<"Case #"<<loop<<": 1 ";
        currentcount=1;
        for(i=1;i<n;i++){
            if(S[i-1]<S[i]){
                currentcount++;
            }
            else{
                currentcount=1;
            }
            cout<<currentcount<<" ";

        }

        cout<<endl;
        loop++;
        }

    return 0;
}