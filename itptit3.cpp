#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n+2], m1=0, m2=0, res=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%3==0&&a[i]!=0)
                res++;
            if(a[i]%3==2)
                m2++;
            if(a[i]%3==1)
                m1++;
        }
        if(m1>m2){
            res+=m2;
            res+=((m1-m2)/3);
        }
        if(m1<m2){
            res+=m1;
            res+=((m2-m1)/3);
        }
        if(m1==m2){
            res+=m1;
        }
        cout<<res<<endl;
    }
    return 0;
}