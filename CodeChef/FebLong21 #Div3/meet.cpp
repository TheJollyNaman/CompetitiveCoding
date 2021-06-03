#include<iostream>
#include<string>

using namespace std;

int main(){

    int t,n;
    string pTIME,pAMPM;
    string sTIME,sAMPM,eTIME,eAMPM;

    cin>>t;

while(t--){
    cin>>pTIME>>pAMPM;

    cin>>n;

        if(pAMPM == "PM"){
            if(pTIME[0]=='1' && pTIME[1]=='2'){
                    //nothing
            }
            else{
                int temp=int(pTIME[0]-48);
                temp=temp*10;
                temp=temp+int(pTIME[1]-48);
                temp=temp+12;
                int lastdigi=temp%10;
                pTIME[0]=char((temp/10)+48);
                pTIME[1]=char(lastdigi+48);
            }    
        }
        else{
            
            if(pTIME[0]=='1' && pTIME[1]=='2'){
                int temp=int(pTIME[0]-48);
                temp=temp*10;
                temp=temp+int(pTIME[1]-48);
                temp=temp-12;
                int lastdigi=temp%10;
                pTIME[0]=char((temp/10)+48);
                pTIME[1]=char(lastdigi+48);
            } 
        }

    for(int i=0;i<n;i++){

        cin>>sTIME>>sAMPM>>eTIME>>eAMPM;   
            
        if(sAMPM == "PM"){
            if(sTIME[0]=='1' && sTIME[1]=='2'){
                //nothing
            }
            else{
                int temp=int(sTIME[0]-48);
                temp=temp*10;
                temp=temp+int(sTIME[1]-48);
                temp=temp+12;
                int lastdigi=temp%10;
                sTIME[0]=char((temp/10)+48);
                sTIME[1]=char(lastdigi+48);
            }    
        }
        else{
            
            if(sTIME[0]=='1' && sTIME[1]=='2'){
                int temp=int(sTIME[0]-48);
                temp=temp*10;
                temp=temp+int(sTIME[1]-48);
                temp=temp-12;
                int lastdigi=temp%10;
                sTIME[0]=char((temp/10)+48);
                sTIME[1]=char(lastdigi+48);
            } 
        }


        if(eAMPM == "PM"){
            if(eTIME[0]=='1' && eTIME[1]=='2'){
                //nothing
            }
            else{
                int temp=int(eTIME[0]-48);
                temp=temp*10;
                temp=temp+int(eTIME[1]-48);
                temp=temp+12;
                int lastdigi=temp%10;
                eTIME[0]=char((temp/10)+48);
                eTIME[1]=char(lastdigi+48);
            }    
        }
        else{
            
            if(eTIME[0]=='1' && eTIME[1]=='2'){
                int temp=int(eTIME[0]-48);
                temp=temp*10;
                temp=temp+int(eTIME[1]-48);
                temp=temp-12;
                int lastdigi=temp%10;
                eTIME[0]=char((temp/10)+48);
                eTIME[1]=char(lastdigi+48);
            } 
        }
        if(pTIME>=sTIME && pTIME<=eTIME){
            cout<<"1";
        }
        else{
            cout<<"0";
        }

    }
    cout<<endl;
        
    }

    return 0;
}