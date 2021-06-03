#include<iostream>

using namespace std;

int main(){

    int t,x,y,xr,yr,d;

    cin>>t;

    while(t--){
        cin>>x>>y>>xr>>yr>>d;
        
        if(x>=xr*d && y>=yr*d){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

        }

    return 0;
}