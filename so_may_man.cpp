#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int s;
        cin>>s;
        int mark = -1, dem=0, k=s;
        if(s%4==0)
            mark=0;
        while(s>0){
            dem++;
            s-=7;
            if((s%4==0&&s>7)||s==4||s==0)
                mark=dem;
        }
        if(mark==-1){
            cout<<-1<<endl;
        }
        else{
            string res="";
            for(int i=0;i<(k-mark*7)/4;i++)
                res+='4';
            while(mark--){
                res+='7';
            }
            cout<<res<<endl;
        }
    }
    return 0;
}