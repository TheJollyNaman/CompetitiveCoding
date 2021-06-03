#include<iostream>
#include<algorithm>

using namespace std; 


int main (){
    int t,n,m,i,j,ans=0,tempvar=0;
    int A[1000],B[1000],sumA=0,sumB=0;
    cin>>t;
    while(t--){
        cin>>n>>m;
        
        sumA=0;
        sumB=0;
        
        for(i=0;i<n;i++){
            cin>>A[i];
            sumA+=A[i];
        }
        for(j=0;j<m;j++){
            cin>>B[j];
            sumB+=B[j];
        }

        ans=0;
        
        sort(A,A + n);
        sort(B,B + m);
        
            if(n>m)
                {
                    tempvar=m;
                }
                
            else
                {
                    tempvar=n;
                }
        
            if(sumA>sumB){
                cout<<"0"<<endl;
                continue;
            }
            
            else
            {   
                
                while( (sumA<=sumB) && (tempvar!=0) ){

                    sumA=sumA-A[ans]+B[m-1-ans];
                    sumB=sumB-B[m-1-ans]+A[ans];
                    ans++;
                    tempvar--;
                }
                
                if(sumA <= sumB)
                {
                    cout<<"-1"<<endl;
                }
                else
                {
                    cout<<ans<<endl;
                }
            }

            
            
    }
    return 0;
}

