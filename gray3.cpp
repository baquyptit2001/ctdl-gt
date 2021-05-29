#include<iostream>
#include<string>

using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        string s, gray="";
        cin>>s;
        for(int i=s.length()-1;i>0;i--){
            char a = s[i], b=s[i-1];
            if(a==b){
                gray='0'+gray;
            }
            else{
                gray='1'+gray;
            }
        }
        gray=s[0]+gray;
        cout<<gray<<endl;
    }
    return 0;
}