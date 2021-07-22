#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int check[100005], giao[100005], hop[100005], g = 0, h = 0;
        memset(check, 0, sizeof(check));
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (not check[x]) {
                hop[h++] = x;
            }
            check[x]++;
        }
        for (int i = 0; i < m; i++) {
            int x;
            cin >> x;
            if (not check[x]) {
                hop[h++] = x;
            }
            if (check[x]) {
                giao[g++] = x;
            }
            check[x]++;
        }
        sort(giao, giao + g);
        sort(hop, hop + h);
        for (int i = 0; i < h; i++)
            cout << hop[i] << ' ';
        cout << endl;
        for (int i = 0; i < g; i++)
            cout << giao[i] << ' ';
        cout << endl;
    }
    return 0;
}