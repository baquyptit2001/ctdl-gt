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
        int n = s.length();
        stack < string > stk;
        for (int i = n - 1; i >= 0; i--) {
            if (s[i] == '+'
                or s[i] == '-'
                or s[i] == '*'
                or s[i] == '/') {
                string t1 = stk.top();
                stk.pop();
                string t2 = stk.top();
                stk.pop();
                string t = "(" + t1 + s[i] + t2 + ")";
                stk.push(t);
            } else {
                stk.push(s[i]+"");
            }
        }
        cout << stk.top() << endl;
    }
}