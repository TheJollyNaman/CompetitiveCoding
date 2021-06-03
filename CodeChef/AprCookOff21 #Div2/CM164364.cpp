#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){

    int t,n,i,x,temp,temp2,totaluniq,ans;
    
    cin>>t;

    while(t--){

        map<int, int> mp;
    
        temp2=0;
        cin>>n>>x;

        for(i=0;i<n;i++){

            cin>>temp;
            auto itr= mp.find(temp);

            if(itr == mp.end()){
                mp.insert(pair<int,int>(temp,1));
            }
            else
            {
                (itr->second)=(itr->second)+1;
            }
        }
        
        totaluniq=0;
        for(auto it=mp.begin();it!=mp.end();it++){
            
            totaluniq++;
            if((it->second)!=1){
                temp2=it->second;
                x=x-temp2+1;
            }

            else{
                continue;
            }
            
        }

            if(x>0){
                ans=totaluniq-x;
            }
            else{
                ans=totaluniq;
            }

        cout<<ans<<endl;

        }
    return 0;
}