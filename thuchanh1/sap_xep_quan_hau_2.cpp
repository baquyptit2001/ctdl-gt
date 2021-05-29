// NBQ Entertainment

#include<bits/stdc++.h>

using namespace std;

int n, a[10][10];
int c[100], h[100], ans = 0, s = 0;

map < int, int > checked;

void Try(int j) {
    for (int i = 1; i <= n; i++) {
        if (checked[i - j] && c[i + j] && h[i]) {
            checked[i - j] = 0;
            c[i + j] = 0;
            h[i] = 0;
            s += a[i][j];
            if (j == n) {
                ans = max(ans, s);
            }
            Try(j + 1);
            checked[i - j] = 1;
            c[i + j] = 1;
            h[i] = 1;
            s -= a[i][j];
        }
    }
}

void Res() {
    n = 8;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];
    for (int i = 2; i <= 2 * n; i++)
        c[i] = 1;
    for (int i = 1 - n; i <= n - 1; i++)
        checked[i] = 1;
    for (int i = 1; i <= n; i++)
        h[i] = 1;
    Try(1);
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
        Res();
    }
}