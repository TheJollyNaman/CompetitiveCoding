#include<iostream>

using namespace std;

int main(){

    int t,n,m,x,y,a,b,step_thief,step_police,diff_a,diff_b;

    cin>>t;

    while(t--){
        step_thief=0;
        step_police=0;

        cin>>n>>m;
        cin>>x>>y;
        cin>>a>>b;
        
        step_thief= (n-x) + (m-y);
        
        if(a!=n && b!=m){
            
            diff_a=n-a;
            diff_b=m-b;
            
            if(diff_a>diff_b){
                b=m;
                a=a+diff_b;
                step_police+= diff_b;
            }
            else if(diff_a<diff_b){
                a=n;
                b=b+diff_a;
                step_police+= diff_a;
            }
            else{
                a=n;
                b=m;
                step_police+= diff_a;
            }
        }

        step_police+= (n-a) + (m-b);

        if(step_police<step_thief){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }

        
        }

    return 0;
}