#include<bits/stdc++.h>

using namespace std;

#define mod 10000007
long long f[1200][1200];

void check() {
    int n, k;
    cin >> n >> k;
    if (k == 0 || k == 1) {
        cout << 1 << endl;
        return;
    }
    for (int i = 0; i <= k; i++) {
        for (int j = i; j <= n; j++) {
            if (i == 0 || i == j) 
                f[i][j] = 1;
            else 
                f[i][j] = (f[i - 1][j - 1] + f[i][j - 1]) % mod;
        }
    }
    cout << f[k][n] % mod << endl;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        check();
    }
}