#include<iostream>

using namespace std;

int main(){

    int t,i,A[10],k;

    cin>>t;

    while(t--){
        
        for(i=0;i<10;i++){
            cin>>A[i];
        }

        cin>>k;

        for(i=9;i>=0;i--){
            if(A[i]<=k){
                k=k-A[i];
            }
            else{
                cout<<i+1<<endl;
                break;
            }
        }
    
        
        }

    return 0;
}