#include<bits/stdc++.h>

using namespace std;

int v, e, u, store[1005][1005];
bool passed[1005];

void init() {
    memset(store, 0, sizeof(store));
    memset(passed, false, sizeof(passed));
    cin >> v >> e >> u;
    for (int i = 0; i < e; i++) {
        int x, y;
        cin >> x >> y;
        store[x][y] = 1;
        store[y][x] = 1;
    }
}

void bfs() {
    queue < int > que;
    passed[u] = true;
    que.push(u);
    while (not que.empty()) {
        int current = que.front();
        cout << current << ' ';
        que.pop();
        for (int i = 1; i <= v; i++) {
            if (store[current][i] and not passed[i]) {
                que.push(i);
                passed[i] = true;
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        init();
        bfs();
        cout << endl;
    }
    return 0;
}