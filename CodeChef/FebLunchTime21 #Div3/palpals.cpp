#include<iostream>
#include<string.h>

using namespace std;

int main(){

    int t,temp,even,odd,i,temp2;
    string s;
    int arr[26];
    cin>>t;

    while(t--){
        
        even=0;
        odd=0;
        for(i=0;i<26;i++){
            arr[i]=-1;
        }
        
        cin>>s;

        
        for(i=0;i<s.size();i++){
            
            temp = (int)s[i];
            temp=temp-97;
            
            if(arr[temp]==-1){
                arr[temp]=1;
            }
            else{
                arr[temp]++;
            }
        }
        
        for(i=0;i<26;i++){
            
            if(arr[i]>=2){
                temp2=arr[i]/2;
                arr[i]=arr[i]%2;
                even=even+temp2;
            }
            
        }
        
         for(i=0;i<26;i++){
            if(arr[i]==1){
                odd++;
            }
        }
        if(even-odd>=0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    
        
        }

    return 0;
}