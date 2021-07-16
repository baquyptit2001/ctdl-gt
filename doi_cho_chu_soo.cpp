#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n>>s;
        for(int i=0;i<s.length() and n;i++){
            int max=s[i]+1, index=i;
            for(int j=i+1;j<s.length();j++){
                if(s[j]>=max){
                    max=s[j];
                    index=j;
                }
            }
            if(index != i){
                swap(s[i],s[index]);
                n--;
            }
        }
        cout<<s<<endl;
    }
    return 0;
}