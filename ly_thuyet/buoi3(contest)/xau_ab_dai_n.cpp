#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string res="", last="";
        for(int i=0;i<n;i++){
            res+='A';
            last+='B';
        }
        cout<<res<<" ";
        while(res!=last){
            for(int i=res.length()-1;i>=0;i--){
                if(res[i]=='B'){
                    res[i]='A';
                    continue;
                }
                if(res[i]=='A'){
                    res[i]='B';
                    break;
                }
            }
            cout<<res<<' ';
        }
        cout<<endl;
    }
    return 0;
}