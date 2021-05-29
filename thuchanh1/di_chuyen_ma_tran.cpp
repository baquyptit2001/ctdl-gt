#include<bits/stdc++.h>

using namespace std;

int n, m, a[200][200];
int ans = 0;
void Try(int i, int j) {
    if (i == n or j == m) {
        ans++;
        return;
    }
    if (j < m)
        Try(i, j + 1);
    if (i < n)
        Try(i + 1, j);
}

void res() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> a[i][j];
    Try(1, 1);
    cout << ans << endl;
    ans = 0;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        res();
    }
}