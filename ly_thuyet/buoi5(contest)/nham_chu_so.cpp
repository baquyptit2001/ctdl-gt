#include<iostream>
#include<sstream>

using namespace std;

int s2n(string s){
    stringstream sso;
    int res;
    sso<<s;
    sso>>res;
    return res;
}

string n2s(int n){
    stringstream sso;
    string res;
    sso<<n;
    sso>>res;
    return res;
}

int main(){
    int n1, n2;
    cin>>n1>>n2;
    string s1=n2s(n1), s2=n2s(n2);
    for(int i=0;i<s1.length();i++)
        if(s1[i]=='6')
            s1[i]='5';
    for(int i=0;i<s2.length();i++)
        if(s2[i]=='6')
            s2[i]='5';
    cout<<s2n(s1)+s2n(s2)<<' ';
    for(int i=0;i<s1.length();i++)
        if(s1[i]=='5')
            s1[i]='6';
    for(int i=0;i<s2.length();i++)
        if(s2[i]=='5')
            s2[i]='6';
    cout<<s2n(s1)+s2n(s2);
    return 0;
}

string a="1234567", a5="", a6="";