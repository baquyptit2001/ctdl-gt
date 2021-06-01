#include<bits/stdc++.h>

using namespace std;

vector<int> a[1005];
bool vs[1005];

void DFS(int u){
	vs[u]=true;
	cout<<u<<" ";
	for(int i=0; i<a[u].size(); i++){
		int v=a[u][i];
		if(!vs[v])
			DFS(v);
	}
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	int t, v, e, u, x, y;
	cin>>t;
	while(t--){
		cin>>v>>e>>u;
		memset(vs, false, sizeof(vs));
		for(int i=1; i<=v; i++)
			a[i].clear();
		for(int i=0; i<e; i++){
			cin>>x>>y;
			a[x].push_back(y);
			a[y].push_back(x);
		}		
		DFS(u);
		cout<<endl;
	}
	return 0;
}