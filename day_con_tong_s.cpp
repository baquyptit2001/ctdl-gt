#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int test = 1;
    cin >> test;
    while (test--) {
        int n, s;
        cin >> n >> s;
        int a[n + 5];
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        int f[40005] = { 0 };
        f[0] = 1;
        for (int i = 1; i <= n; i++) {
            for (int j = s; j >= a[i]; j--) {
                if (f[j - a[i]] == 1)
                    f[j] = 1;
            }
        }
        if (f[s] == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}