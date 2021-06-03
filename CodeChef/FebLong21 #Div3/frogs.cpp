#include<iostream>
#include<bits/stdc++.h>

using namespace std;


int getIndex(vector<int> v, int k){

    auto it = find(v.begin(),v.end(),k);

    if(it != v.end()){
        int index = it - v.begin();
        return index;
    }
    else{
        return -1;
    }
}


int main(){

    int t,n,count,element,i;

    cin>>t;

    while(t--){

        cin>>n;
        count = 0;
        vector<int> w;
        vector<int> l;
        vector<int> pos(n);
        vector<int> extr(n);

        for(i=0; i<n; i++)
        {
            cin>>element; 
            w.push_back(element);
            
        }
        for(i=0; i<n; i++)
        {
            extr[i]=w[i];
        }
        sort(extr.begin(), extr.end());

        for(i=0; i<n; i++)
        {
            cin>>element; 
            l.push_back(element);
            pos[i]=i;
        }
        
        for(int j=1;j<n;j++){

            int index = getIndex(w,extr[j]);
            int p = pos[getIndex(w,extr[j-1])];
            int c = index;

            while(c<=p){
                c=c+l[index];
                pos[index]=c;
                count++;
            }

        }
        cout<<count<<endl;
        
        }

    return 0;
}