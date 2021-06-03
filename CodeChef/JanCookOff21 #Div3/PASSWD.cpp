#include<iostream>
#include<string>

using namespace std;

int main(){

    int t,flaglower,flagupper,flagsymbol,flagnum,i,flaglen;
    string str;
    cin>>t;

    while(t--){
        flaglower=0;
        flagupper=0;
        flagsymbol=0;
        flagnum=0;
        flaglen=0;

        cin>>str;

        int len=str.length();

            if(len>=10){
                flaglen=1;
            }

            if(islower(str[0]) || islower(str[len-1]))
            flaglower=1;

            for(i=1;i<len-1;i++)
            {
                if(islower(str[i]))
                flaglower=1;
                if(isupper(str[i]))
                flagupper=1;
                if(isdigit(str[i]))
                flagnum=1;
                if(str[i]=='@' ||str[i]=='#' ||str[i]=='%' ||str[i]=='&' ||str[i]=='?')
                flagsymbol=1;
            }

        if(flagnum==1 && flaglower==1 && flagsymbol==1 && flagupper==1 && flaglen==1)
        cout<<"YES"<<endl;
        else
        {
            cout<<"NO"<<endl;
        }
        
        }

    return 0;
}