#include<bits/stdc++.h>

using namespace std;

int v, e, u;
vector < int > a[1005];
bool b[1005], check;

void BFS(int u) {
    b[u] = false;
    queue < int > q;
    q.push(u);
    while (!q.empty()) {
        int t = q.front();
        q.pop();
        for (int i = 0; i < a[t].size(); i++) {
            int k = a[t][i];
            if (b[k]) {
                b[k] = false;
                q.push(k);
            }
        }
    }

}

void canhCau() {
    for (int i = 1; i <= v; i++) {
        for (int j = 0; j < a[i].size(); j++) {
            int d = a[i][j];
            a[i].erase(a[i].begin() + j);
            memset(b, true, sizeof(b));
            BFS(i);
            bool check = false;
            for (int k = 1; k <= v; k++) {
                if (b[k]) {
                    check = true;
                    break;
                }
            }
            if (check and i < d)
                cout << i << " " << d << " ";
            a[i].insert(a[i].begin() + j, d);
        }
    }
    cout << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t, x, y;
    cin >> t;
    while (t--) {
        cin >> v >> e;
        for (int i = 0; i <= v; i++)
            a[i].clear();
        for (int i = 0; i < e; i++) {
            cin >> x >> y;
            a[x].push_back(y);
            a[y].push_back(x);
        }
        canhCau();
    }
    return 0;
}