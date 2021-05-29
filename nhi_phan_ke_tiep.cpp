#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int remember=1;
        for(int i=s.length()-1;i>=0;i--){
            if(remember){
                s[i]++;
                remember = 0;
            }
            if(s[i]=='2'){
                s[i]='0';
                remember = 1;
            }
            if(remember==0)
                break;
        }
        cout<<s<<endl;
    }
    return 0;
}