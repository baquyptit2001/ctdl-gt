#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        set < int > res;
        for (int i = 0; i < n; i++) {
            long long x;
            cin >> x;
            while (x > 0) {
                res.insert(x % 10);
                x /= 10;
            }
        }
        set < int > ::iterator it;
        for (it = res.begin(); it != res.end(); it++)
            cout << * it << ' ';
        cout << endl;
    }
    return 0;
}