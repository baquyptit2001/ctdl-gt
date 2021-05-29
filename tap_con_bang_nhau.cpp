#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n, sum=0;
        cin>>n;
        int a[n+2]={0};
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        if(sum%2==1){
            cout<<"NO"<<endl;
            continue;
        }
        sum/=2;
        int check[sum+1]={0};
        check[0]=1;
        for(int i=0;i<n;i++){
            for(int j=sum;j>=a[i];j--)
                if(check[j-a[i]]==1)
                    check[j]=1;
        }
        if(check[sum])
            cout<<"YES";
        else
            cout<<"NO";
        cout<<endl;
    }
    return 0;
}