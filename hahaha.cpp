#include<bits/stdc++.h>

using namespace std;

int check(string s){
    if(s[s.length()-1]!='A')
        return 0;
    for(int i=0;i<s.length()-1;i++)
        if(s[i]=='H' and s[i+1]=='H')
            return 0;
    return 1;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string beg = "H", end = "H";
        for(int i=0;i<n-1;i++){
            beg+='A';
            if(i%2==0)
                end+='A';
            else
                end+='H';
        }
        cout<<beg<<endl;
        while(beg!=end){
            for(int i=n-1;i>0;i--){
                if(beg[i]=='A'){
                    beg[i]='H';
                    break;
                }else{
                    beg[i]='A';
                    continue;
                }
            }
            if(check(beg))
                cout<<beg<<endl;
        }
    }
    return 0;
}