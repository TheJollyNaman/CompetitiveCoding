#include<iostream>

using namespace std;

int* gettingarr(string str) 
{ 
    int x = str.size(), a = 0; 
    int* arr = new int[str.size()];
    while (a != x) {
        arr[a] = str[a] - '0'; 
        a++; 
    } 
    return arr; 
} 


int main(){
    int t,i=0,n,j,ans,k;
    string a="abcdefghijklmnop";
    string bin[10];

    cin>>t;
    while(t--){
        ans=0;
        
        cin>>n;
        cin>>bin[i];
        
        int* arr = gettingarr(bin[i]);
        
        for(j=0;j<n;j=j+4)
        {  
            ans=(arr[j])*8 + (arr[j+1])*4 + (arr[j+2])*2 + (arr[j+3])*1  ;
            cout<<a[ans];
        }    

    cout<<endl;
    i++;
    }


    return 0;
}