#include<bits/stdc++.h>
using namespace std;

string s;

void Swap(int i, int k){
	if(k==0 || i==s.size()-1)
		return;
	int m=s.size()-1;
	for(int j=s.size()-2; j>i; j--){
		if(s[j]>s[i] && s[j]>s[m]){
			m=j;
		}
	}
	if(s[m]>s[i]){
		swap(s[m], s[i]);
		Swap(i+1, k-1);
	}
	else
		Swap(i+1, k);
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int k;
		cin>>k;
		cin>>s;
		Swap(0, k);
		cout<<s<<endl;
	}
	return 0;
}