//NBQ Entertainment
#include<bits/stdc++.h>

using namespace std;


void check() {
    int k;
    cin >> k;
    string s;
    cin >> s;
    int a[100] = {
        0
    }, n = s.length();
    for (int i = 0; i <= n - 1; i++)
        a[s[i]]++;
    sort(a + 65, a + 91, greater < int > ());
    vector < int > b;
    for (int i = 65; i <= 90; i++)
        if (a[i] > 0)
            b.push_back(a[i]);
    for (int i = 1; i < k; i++) {
        b[0]--;
        sort(b.begin(), b.end(), greater < int > ());
    }
    long long ans = 0;
    for (int i = 0; i <= b.size() - 1; i++)
        ans += b[i] * b[i];
    cout << ans << endl;
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