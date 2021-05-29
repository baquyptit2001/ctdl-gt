#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int d;
        string s;
        cin>>d>>s;
        int n=s.length();
        int a[200]={0};
        for(int i=0;i<n;i++)
            a[s[i]]++;
        sort(a,a+91);
        if((a[90]-1)*d<=n-1)
            cout<<1;
        else
            cout<< -1;
        cout<<endl;
    }
}