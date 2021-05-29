#include <bits/stdc++.h>

using namespace std;

string solve(int a[], int b[], int n){
	int l=0,r=n-1;
	while(l<r){
		if(!((a[l]==b[l]&&a[r]==b[r])||(a[l]==b[r]&&a[r]==b[l]))){
			return "No";
		}
		l++;r--;
	}
	return "Yes";
}

int main() {
    ios_base::sync_with_stdio(0);
	cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int check = 1;
        int n;
        cin>>n;
        int a[n+2], b[n+2];
        for(int i=0;i<n;i++){
            cin>>a[i];
            b[i]=a[i];
        }
        sort(b,b+n);
        cout<<solve(a,b,n)<<endl;
    }
    return 0;
}