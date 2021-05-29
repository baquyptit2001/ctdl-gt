#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int v, e;
        set < int > store[1002];
        cin >> v >> e;
        for (int i = 0; i < e; i++) {
            int x, y;
            cin >> x >> y;
            store[x].insert(y);
            store[y].insert(x);
        }
        for (int i = 1; i <= v; i++) {
            cout << i << ":";
            set < int > ::iterator it;
            for (it = store[i].begin(); it != store[i].end(); ++it)
                cout << ' ' << * it;
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}