#include<bits/stdc++.h>

using namespace std;

string checker(int arr[], int n, int k){
    for (int i = n - 1; i >= 0; i--) {
        if (k >= arr[i])
            k -= arr[i];
    }
    if (k != 0)
        return "NO";
    else
        return "YES";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int store[n+5], sum=0;
        for(int i=0;i<s.length();i++){
            store[i] = s[i]-'0';
            sum+=store[i];
            cout<<store[i];
        }
        if(sum%2==1){
            cout<<"NO"<<endl;
            continue;
        }else{
            cout<<checker(store,n,sum/2)<<endl;
        }
    }
    return 0;
}