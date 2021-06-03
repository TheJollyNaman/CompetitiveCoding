#include<iostream>
#include<string>

using namespace std;

int func(string str,int n){
    
    int seq[100000],i,j,max;

    seq[0]=1;
    
    for(i=1;i<n;i++){

        seq[i]=1;

        for (j = 0; j < i ; j++ ){  

            if ( str[i] >= str[j] && seq[i] < seq[j] + 1)  
                seq[i] = seq[j] + 1;  

        }
        
    }

    max=-1;
    for(i=0;i<n;i++){

        if(seq[i]>max){
            max=seq[i];
        }
    }

    return max;
}



int main(){

    int t,n;
    string str;

    cin>>t;

    while(t--){

        cin>>n;
        
        string str;
        cin>>str;
        
        cout<<n - func(str,n)<<endl;

        }

    return 0;
}