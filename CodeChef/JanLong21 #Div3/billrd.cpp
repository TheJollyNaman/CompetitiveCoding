#include<iostream>

using namespace std;

int main(){
    int t,n,k,x,y;
    cin>>t;
    while(t--){
        
        cin>>n>>k>>x>>y;

        if(x==y){
            cout<<n<<' '<<n<<endl;
        }
        else if(x>y){
            if(k%4==1){
                cout<<n<<' '<<n-x+y<<endl;
            }
            else if(k%4==2){
                cout<<n-x+y<<' '<<n<<endl;
            }
            else if(k%4==3){
                cout<<'0'<<' '<<x-y<<endl;
            }
            else{
                cout<<x-y<<' '<<'0'<<endl;
            }
        }
        else
        {
            if(k%4==1){
                cout<<n-y+x<<' '<<n<<endl;
            }
            else if(k%4==2){
                cout<<n<<' '<<n-y+x<<endl;
            }
            else if(k%4==3){
                cout<<y-x<<' '<<'0'<<endl;
            }
            else{
                cout<<'0'<<' '<<y-x<<endl;
            }

        }

    }

    return 0;
}
