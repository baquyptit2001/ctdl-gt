#include<bits/stdc++.h>

using namespace std;

int n, s, a[35], b[35], check;

void Try(int k){
    int i=k;
    while(i>=1&&b[i]==n-k+i)
        i--;
    if(i==0)
        check=1;
    else{
        b[i]++;
        for(int j=i+1;j<=k;j++)
            b[j]=b[j-1]+1;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n>>s;
        for(int i=1;i<=n;i++)
            cin>>a[i];
        int res=-1;
        for(int i=1;i<=n;i++){
            check=0;
            for(int j=1;j<=i;j++)
                b[j]=j;
            while(check==0){
                long long sum=0;
                for(int j=1;j<=i;j++)
                    sum+=a[b[j]];
                if(sum==s){
                    res=i;
                    break;
                }else{
                    Try(i);
                }
            }
            if(res>0)
                break;
        }
        cout<<res<<endl;
    }
    return 0;
}