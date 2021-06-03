#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){

    int t,loop=1;
    long long g;
    cin>>t;

    while(t--){
        cin>>g;
        cout<<"Case #"<<loop<<": ";

        long long count = 0;
        for (long long i = 1 ; i*(i+1)<2*g ; i++)
        {
            long double a = (1.00 * g - (i*(i+1))/2) / (i + 1);
            if (a-(long long)a == 0.00)
                count++;       
        }
        cout<<count+1<<endl;
        loop++;
        }

    return 0;
}