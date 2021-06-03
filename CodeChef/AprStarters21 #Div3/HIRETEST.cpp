#include<iostream>

using namespace std;

int main(){

    int t,n,m,x,y,i,f,p,u,j;
    char temp;
    cin>>t;

    while(t--){
        cin>>n>>m;
        cin>>x>>y;
        
        for(i=0;i<n;i++){
            p=0;
            f=0;
            for(j=0;j<m;j++){

                cin>>temp;

                    if(temp=='F'){
                        f++;
                    }
                    else if(temp=='P'){
                        p++;
                    }
                    else
                        u++;

                
                }
                
            if(f>=x || (f==x-1 && p>=y)){
                cout<<"1";
            }
            else{
                cout<<"0";
            }

            

        }
        cout<<endl;
        
        }

    return 0;
}