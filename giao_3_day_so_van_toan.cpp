#include<bits/stdc++.h>
using namespace std;
long long a[100005], b[100005], c[100005];
int main(){
	int t;
	cin>>t;
	while(t--){
		int m1, m2, m3;
		cin>>m1>>m2>>m3;

		for(int i=0; i<m1; i++)
			cin>>a[i];
		for(int i=0; i<m2; i++)
			cin>>b[i];
		for(int i=0; i<m3; i++)
			cin>>c[i];

		int bl=false;
		int i=0, j=0, k=0;
		while(i<m1 && j<m2 && k<m3){
			if(a[i]== b[j] && b[j]==c[k]){
				cout<<a[i]<<" ";
				bl=true;
				i++; j++; k++;
			}
			else if(a[i]<b[j])
				i++;
			else if(b[j]<c[k])
				j++;
			else
				k++;
		}
		if(!bl){
			cout<< -1;
		}
		cout<<endl;
	}
	return 0;
}