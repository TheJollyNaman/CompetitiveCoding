#include<iostream>

using namespace std;

int main(){

    int t,n,i,a[501],even,odd;

    cin>>t;

    while(t--){
        cin>>n;
        even=0;
        odd=0;

        for(i=0;i<n;i++){
            
            cin>>a[i];

            if(a[i]%2==0){
                even++;
            }
            else
            {
                odd++;
            }
            
        }
        
        if(even<=odd){
            cout<<even<<endl;
        }
        else
        {
            cout<<odd<<endl;
        }
        
        
        }

    return 0;
}