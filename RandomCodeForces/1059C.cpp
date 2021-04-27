#include<iostream>

using namespace std;

int main(){

    int n,i;

    cin>>n;
    for(int i=1;n;i<<=1){
        if(n==3){
            printf("%d %d %d",i,i,3*i);
            break;
        }
        else 
        for(int j=1;j<=(n+1)/2;++j) 
        printf("%d ",i);

        n=n/2;
    } 
    return 0;
}