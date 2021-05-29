#include<iostream>
#include<sstream>

using namespace std;

string n2s(int n){
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
        int n;
        cin>>n;
        int a[n+2], dem=0;
        for(int i=0;i<n;i++)
            cin>>a[i];
        string res[n+2];
        res[dem]+='[';
        for(int i=0;i<n;i++){
            res[dem]+=n2s(a[i]);
            if(i!=n-1)
                res[dem]+=' ';
        }
        res[dem]+=']';
        dem++;
        while(n>1){
            n--;
            res[dem]+='[';
            for(int i=0;i<n;i++){
                a[i]=a[i]+a[i+1];
                res[dem]+=n2s(a[i]);
                if(i!=n-1)
                    res[dem]+=' ';
            }
            res[dem]+=']';
            dem++;
        }
        for(int i=dem-1;i>=0;i--)
           cout<<res[i]<<' ';
        cout<<endl;
    }
    return 0;
}