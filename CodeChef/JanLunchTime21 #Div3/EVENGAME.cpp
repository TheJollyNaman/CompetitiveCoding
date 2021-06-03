#include<iostream>

using namespace std;

int main(){

    int t,n,a[100000],i,odd,even,oddnos,evennos;

    cin>>t;

    while(t--){

        cin>>n;

        odd=0;
        even=0;
        //oddnos=0;
        //evennos=0;

        for(i=0;i<n;i++){
            cin>>a[i];

            if(a[i]%2!=0){
                odd=odd+a[i];
            }
        }

        if(odd%2==0){
            cout<<"1"<<endl;
        }
        else
        {
            cout<<"2"<<endl;
        }
        
        }

    return 0;
}