#include<bits/stdc++.h>

using namespace std;
int v, e, s, t, pre[1005];
vector < int > a[1005];
bool b[1005], check;

void DFS(int u) {
	b[u] = false;
	if (u == t) {
		check = true;
		return;
	}
	for (int i = 0; i < a[u].size(); i++) {
		int t = a[u][i];
		if (b[t]) {
			pre[t] = u;
			DFS(t);
		}
	}
}

void solve() {
	DFS(s);
	if (not check) {
		cout << -1 << endl;
		return;
	}
	stack < int > res;
	res.push(t);
	while (res.top() != s) {
		int temp = res.top();
		res.push(pre[temp]);
	}
	while (not res.empty()) {
		cout << res.top() << " ";
		res.pop();
	}
	cout << endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int T, x, y;
	cin >> T;
	while (T--) {
		cin >> v >> e >> s >> t;
		for (int i = 0; i <= v; i++)
			a[i].clear();
		memset(b, true, sizeof(b));
		memset(pre, 0, sizeof(pre));
		check = false;
		for (int i = 0; i < e; i++) {
			cin >> x >> y;
			a[x].push_back(y);
		}
		solve();
	}

	return 0;
}