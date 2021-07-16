#include<bits/stdc++.h>

using namespace std;

vector < int > store[1005];
bool visited[1005];

void DFS(int u) {
	visited[u] = true;
	cout << u << ' ';
	for (int i = 0; i < store[u].size(); i++) {
		if (not visited[store[u][i]]) {
			DFS(store[u][i]);
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t, v, e, u, x, y;
	cin >> t;
	while (t--) {
		cin >> v >> e >> u;
		memset(visited, false, sizeof(visited));
		for (int i = 1; i <= v; i++) {
			store[i].clear();
		}
		for (int i = 0; i < e; i++) {
			cin >> x >> y;
			store[y].push_back(x);
			store[x].push_back(y);
		}
		DFS(u);
		cout << endl;
	}
	return 0;
}