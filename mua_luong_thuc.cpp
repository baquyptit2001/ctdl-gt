#include<bits/stdc++.h>

using namespace std;

int check(int n, int s, int m){
    if((m*s>((s-(s/7))*n))||m>n)
        return -1;
    int res = (s*m)/n;
    if((s*m)%n!=0)
        res++;
    return res;
}

int main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n, s, m;
        cin>>n>>s>>m;
        cout<<check(n,s,m)<<endl;
    }
    return 0;
}