#include<iostream>

using namespace std;

int check(string s){
    for(int i=0;i<s.length()/2;i++)
        if(s[i]!=s[s.length()-1-i])
            return 0;
    return 1;
}

int main(){
    int n;
    cin>>n;
    string beg, last;
    for(int i=0;i<n;i++){
        beg+='0';
        last+='1';
        cout<<"0 ";
    }
    cout<<endl;
    while(beg!=last){
        for(int i=n-1;i>=0;i--){
            if(beg[i]=='1'){
                beg[i]='0';
                continue;
            }
            beg[i]='1';
            break;
        }
        if(check(beg)){
            for(int i=0;i<n;i++)
                cout<<beg[i]<<' ';
            cout<<endl;
        }
    }
    return 0;
}