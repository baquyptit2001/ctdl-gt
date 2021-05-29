#include<iostream>
#include<sstream>

using namespace std;

string nts(int n){
    stringstream sso;
    sso<<n;
    string res;
    sso>>res;
    return res;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        string root="1", dup="1";
        for(int i=1;i<n;i++){
            root+=nts(i+1)+dup;
            dup=root;
        }
        cout<<root[k-1]<<endl;
    }
    return 0;
}