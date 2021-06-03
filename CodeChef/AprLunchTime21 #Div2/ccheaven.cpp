#include<iostream>
#include<string>

using namespace std;

int main(){

    ios_base::sync_with_stdio(0); cin.tie(0);

    int t,l,good,bad,flag;

    cin>>t;

    while(t--){
        flag=0;
        good=0;
        bad=0;
        cin>>l;
        
        string s;
        cin>>s;

        for(int i = 0 ; i < l ; i++){

            if(s[i]=='1'){
                good++;
            }
            else{
                bad++;
            }

            if(good>=bad){
                flag=1;
                break;
            }
        }
        if(flag==0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }


        
        }

    return 0;

}