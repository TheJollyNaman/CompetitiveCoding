#include<iostream>

using namespace std;

int main(){

    int t,n,arr[100002],i;

    cin>>t;

    while(t--){

        cin>>n;
        
        for(i=0;i<n;i++){
            cin>>arr[i];
        }

        if(n==2 && arr[2]>=arr[1]){
            cout<<"NO"<<endl;
            continue;
        }
        else{
            for(i=1;i<n;i++){

                if(arr[i]<arr[i-1]){

                }

            }

        // not attempted!!!


        }

        
        
    


        
        }

    return 0;
}