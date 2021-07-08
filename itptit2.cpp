#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if(abs(a)+abs(b)>c)
            cout<<"NO"<<endl;
        else
            if((c-abs(a)-abs(b))%2==0)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
    }
    return 0;
}