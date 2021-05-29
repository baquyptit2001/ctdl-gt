#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k=3;
        cin >> n;
        long long ech[100005] = {0};
        ech[0] = 1;
        ech[1] = 1;
        for (int i = 2; i <= n; i++) {
            for (int j = 1; j <= min(i, k); j++) {
                ech[i] += ech[i - j];
            }
        }
        cout << ech[n] << endl;
    }
    return 0;
}