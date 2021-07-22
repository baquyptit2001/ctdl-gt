#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n, m, p;
        cin>>n>>m>>p;
        long long a[n+5], b[m+5], c[p+5];
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<m;i++)
            cin>>b[i];
        for(int i=0;i<p;i++)
            cin>>c[i];
        int q=0, w=0, e=0;
        bool isHave=false;
        while(q<n and w<m and e<p){
            if(a[q]==b[w] and b[w]==c[e]){
                cout<<a[q]<<' ';
                q++, w++, e++;
                isHave=true;
            }else if(a[q]<b[w]){
                q++;
            }else if(b[w]<c[e]){
                w++;
            }else
                e++;
        }
        if(not isHave)
            cout<<"-1";
        cout<<endl;
    }
    return 0;
}
