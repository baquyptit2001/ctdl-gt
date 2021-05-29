//NBQ entertainment

#include<bits/stdc++.h>

using namespace std;

vector < string > s;
vector < string > ans;

int k, n, m, kt;
string a[5];

bool check(string a) {
    for (int i = 0; i < s.size(); i++)
        if (a == s[i])
            return true;
    return false;
}

int b[10][10];
string res;

void Try(int i, int j) {
    if (check(res)) {
        kt = 1;
        ans.push_back(res);
    }
    if (j < m && b[i][j + 1]) {
        res += a[i][j + 1];
        b[i][j + 1] = 0;
        Try(i, j + 1);
        b[i][j + 1] = 1;
        res.erase(res.length() - 1);
    }
    if (j > 1 && b[i][j - 1]) {
        res += a[i][j - 1];
        b[i][j - 1] = 0;
        Try(i, j - 1);
        b[i][j - 1] = 1;
        res.erase(res.length() - 1);
    }
    if (i < n && b[i + 1][j]) {
        res += a[i + 1][j];
        b[i + 1][j] = 0;
        Try(i + 1, j);
        b[i + 1][j] = 1;
        res.erase(res.length() - 1);
    }
    if (i > 1 && b[i - 1][j]) {
        res += a[i - 1][j];
        b[i - 1][j] = 0;
        Try(i - 1, j);
        b[i - 1][j] = 1;
        res.erase(res.length() - 1);
    }
    if (j < m && i < n && b[i + 1][j + 1]) {
        res += a[i + 1][j + 1];
        b[i + 1][j + 1] = 0;
        Try(i + 1, j + 1);
        b[i + 1][j + 1] = 1;
        res.erase(res.length() - 1);
    }
    if (j < m && i > 1 && b[i - 1][j + 1]) {
        res += a[i - 1][j + 1];
        b[i - 1][j + 1] = 0;
        Try(i - 1, j + 1);
        b[i - 1][j + 1] = 1;
        res.erase(res.length() - 1);
    }
    if (j > 1 && i < n && b[i + 1][j - 1]) {
        res += a[i + 1][j - 1];
        b[i + 1][j - 1] = 0;
        Try(i + 1, j - 1);
        b[i + 1][j - 1] = 1;
        res.erase(res.length() - 1);
    }
    if (i > 1 && j > 1 && b[i - 1][j - 1]) {
        res += a[i - 1][j - 1];
        b[i - 1][j - 1] = 0;
        Try(i - 1, j - 1);
        b[i - 1][j - 1] = 1;
        res.erase(res.length() - 1);
    }
}

void Res() {
    cin >> k >> n >> m;
    kt = 0;
    for (int i = 1; i <= k; i++) {
        string x;
        cin >> x;
        s.push_back(x);
    }
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++) {
            cin >> a[i][j];
            b[i][j] = 1;
        }
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++) {
            res = a[i][j];
            b[i][j] = 0;
            Try(i, j);
            b[i][j] = 1;
        }
    if (kt) {
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
    } else cout << -1;
    cout << endl;
    s.clear();
    ans.clear();
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        Res();
    }
}