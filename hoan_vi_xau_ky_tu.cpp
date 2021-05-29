#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n = s.length();
        int a[n];
        for(int i=0;i<n;i++)
            a[i]=i+1;
        for(int i=0;i<n;i++)
            cout<<s[a[i]-1];
        cout<<' ';
        while(1){
            int mark=1;
            for(int i=n-2;i>=0;i--){
                if(a[i]<a[i+1]){
                    int k=i+1;
                    for(int j=i+1;j<n;j++){
                        if(a[j]>a[i]&&a[k]>a[j]){
                            k=j;
                        }
                    }
                    swap(a[k],a[i]);
                    reverse(a+i+1,a+n);
                    mark=0;
                    break;
                }
            }
            if(mark)
                break;
            for(int i=0;i<n;i++)
                cout<<s[a[i]-1];
            cout<<' ';
        }
        cout<<endl;
    }
    return 0;
}