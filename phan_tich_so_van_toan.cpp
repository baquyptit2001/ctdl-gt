#include<bits/stdc++.h>
using namespace std;
int n;
int a[15];

void Try(int i, int index, int sum){
	if(sum==n){
		cout<<'(';
		for(int j=0;j<index-1;j++)
			cout<<a[j]<<' ';
		cout<<a[index-1]<<") ";
		return;
	}
	for(int j=i;j>=1;j--){
		a[index]=j;
		if(sum+j<=n){
			Try(j,index+1,sum+j);
		}
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		Try(n, 0, 0);
		cout<<endl;
	}
	return 0;
}