#include<bits/stdc++.h>

using namespace std;

int n;

char Find(long long f[], int n, long long k) {
    if (n == 1)
        return 'A';
    if (n == 2)
        return 'B';
    if (k > f[n - 2])
        return Find(f, n - 1, k - f[n - 2]);
    return Find(f, n - 2, k);
}

void Res() {
    long long k;
    cin >> n >> k;
    long long f[100];
    f[1] = 1;
    f[2] = 1;
    for (int i = 3; i <= 93; i++)
        f[i] = f[i - 1] + f[i - 2];
    cout << Find(f, n, k) << endl;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int test = 1;
    cin >> test;
    while (test--) {
        Res();
    }
}