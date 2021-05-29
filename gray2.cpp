#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string gray, bin="";
        cin>>gray;
        bin+=gray[0];
        for(int i=1;i<gray.length();i++){
            if(gray[i]=='1'){
                char c = (bin[bin.length()-1]=='1') ? '0':'1';
                bin+=c;
            }
            else{
                char c = (bin[bin.length()-1]=='0') ? '0':'1';
                bin+=c;
            }
        }
        cout<<bin<<endl;
    }
    return 0;
}