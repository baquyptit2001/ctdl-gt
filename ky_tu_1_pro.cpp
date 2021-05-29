#include<bits/stdc++.h>

using namespace std;

int check(string s){
    sort(s.begin(), s.end());
    for(int i=0;i<=(s.length()+1)/2;i++){
        if(s[i]==s[((s.length()-1)/2)+i])
            return -1;
    }
    return 1;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        cout<<check(s)<<endl;
    }
    return 0;
}