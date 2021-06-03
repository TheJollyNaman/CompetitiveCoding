#include<iostream>
#include<conio.h>

using namespace std;


int main()
{
    
    int t,i,ans;
    int n,k,d,problems;
    int A[100];
    cin>>t;
    while(t--)
    {   
        problems=0,ans=0;
        cin>>n>>k>>d;
        
        for(i=1;i<=n;i++){
            cin>>A[n];

        problems+=A[n]; 
        }
    
    ans=problems/k;
    
    if(ans<=d)
    cout<<ans<<endl;
    else
    cout<<d<<endl;

    }
return 0;
}