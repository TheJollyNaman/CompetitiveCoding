#include <iostream>

using namespace std;


int main(){

    int t,i;
    cin>>t;

    for(i=10;i>0;i--){
        if(t%i==0){
            cout<<i;
            break;
        }
    }

    return 0;
}