

#include<iostream>
#include<cmath>
using namespace std;

int main(){

    int t,n,k,A[102],i,unsolved,check_time,nobot;

    cin>>t;

    while(t--){

        unsolved=0;
        check_time=1;
        nobot=0;

        cin>>n>>k;
        
        for(i=0;i<n;i++){

            cin>>A[i];

            if(A[i]==-1){
                unsolved++;
            }

            if(A[i]>k){
                check_time=0;
            }

            if(A[i]==-1 || A[i]>1){
                nobot=1;
            }

        }


        

        if(ceil(n/2)<unsolved){
            cout<<"Rejected"<<endl;
        }
        else if(check_time==0){
            cout<<"Too Slow"<<endl;
        }
        else if(nobot==0){
            cout<<"Bot"<<endl;
        }
        else
        {
            cout<<"Accepted"<<endl;
        }

        
        }

    return 0;
}
