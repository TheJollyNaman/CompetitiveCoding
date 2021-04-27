    #include<iostream>
     
    using namespace std;
     
    int main(){
        
    ios_base::sync_with_stdio(0); cin.tie(0);

        int t,n,m,A[300002],B[300002],i,pointa,pointb,countmax;

        long long suma,sumb;

            suma=0;
            sumb=0;
            cin>>n;
     
                for(i=0;i<n;i++){
                    cin>>A[i];
                    suma=suma+A[i];
                }
     
            cin>>m;
     
                for(i=0;i<m;i++){
                    cin>>B[i];
                    sumb=sumb+B[i];
                }
     
            pointa=0;
            pointb=0;
            
                if(suma!=sumb){
                    cout<<"-1"<<endl;
                    return 0;
                }
            
            countmax=1;
            suma=A[0];
            sumb=B[0];
     
                while(pointa!=n-1 && pointb!=m-1){
                    if(suma>sumb){
                        pointb++;
                        sumb=sumb+B[pointb];
                    }
                    else if (sumb>suma){
                        pointa++;
                        suma=suma+A[pointa];
                    }
                    else{
                        pointa++;
                        pointb++;
                        suma=A[pointa];
                        sumb=B[pointb];
                        countmax++;
                    }
     
                }
            cout<<countmax<<endl;
            
     
        return 0;
    }