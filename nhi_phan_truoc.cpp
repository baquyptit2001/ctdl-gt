#include<bits/stdc++.h>

using namespace std;

long long bin2Dec(string s){
    reverse(s.begin(), s.end());
    long long res = 0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='1')
            res+=pow(2,i);
    }
    return res;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;

    }
    return 0;
}