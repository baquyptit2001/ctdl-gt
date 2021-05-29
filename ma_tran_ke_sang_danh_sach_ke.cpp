#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    int x;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>x;
            if(x)
                cout<<j+1<<' ';
        }
        cout<<endl;
    }
    return 0;
}