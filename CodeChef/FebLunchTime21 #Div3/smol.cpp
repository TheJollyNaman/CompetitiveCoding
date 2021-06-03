#include<iostream>

using namespace std;

int main(){

    int t,n,k;

    cin>>t;

    while(t--){
            cin>>n>>k;
            if(k==0){
                cout<<n<<endl;
                continue;
            }
            
            n=n%k;

        cout<<n<<endl;
        
        }

    return 0;
}