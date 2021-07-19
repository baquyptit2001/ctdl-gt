#include<bits/stdc++.h>

using namespace std;

int n;

char bin(long long f[], int n, long long k) {
    if (n == 1)
        return '0';
    if (n == 2)
        return '1';
    if (k > f[n - 2])
        return bin(f, n - 1, k - f[n - 2]);
    return bin(f, n - 2, k);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        long long k;
        cin >> n >> k;
        long long f[100];
        f[1] = 1;
        f[2] = 1;
        for (int i = 3; i <= 93; i++)
            f[i] = f[i - 1] + f[i - 2];
        cout << bin(f, n, k) << endl;
    }
}