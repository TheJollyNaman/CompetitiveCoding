#include<iostream>

using namespace std;

int main(){

    ios_base::sync_with_stdio(0); cin.tie(0);

    int mod= 1e9+7;
    long long n,q,total,temp;
    cin>>n;
    total=0;

    for(int i = 0 ; i < n ; i++){
        cin>>temp;
        total = total + temp;
        total = (total+mod)%mod;
    }

    total=total%mod;

    cin>>q;

    for(int i = 0 ; i < q ; i++){
        cin>>temp;
    }

    for(int j=1; j<=q ;j++){   

        total=(total*2)%mod;
        cout<<total%mod<<endl;

    }
   

    return 0;
}