#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int test = 1;
    cin >> test;
    while (test--) {
        string s;
        cin >> s;
        int d = 0;
        stack < char > stk;
        for (int i = 0; i <= s.length() - 1; i++) {
            if (s[i] == '(')
                stk.push('(');
            else {
                if (!stk.empty())
                    stk.pop();
                else
                    d++;
            }
        }
        cout << d / 2 + stk.size() / 2 + d % 2 + stk.size() % 2 << endl;
    }
}