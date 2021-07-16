#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n + 2];
        stack < int > stk;
        vector < int > res;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = n - 1; i >= 0; i--) {
            while (not stk.empty() and a[i] >= stk.top()) {
                stk.pop();
            }
            if (stk.empty())
                res.push_back(-1);
            else
                res.push_back(stk.top());
            stk.push(a[i]);
        }
        for (int i = res.size() - 1; i >= 0; i--)
            cout << res[i] << ' ';
        cout << endl;
    }
    return 0;
}