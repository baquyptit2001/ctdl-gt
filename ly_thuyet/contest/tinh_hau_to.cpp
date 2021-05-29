#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        stack < int > stk;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] >= '0' and s[i] <= '9')
                stk.push(s[i] - '0');
            else {
                int a = stk.top();
                stk.pop();
                int b = stk.top();
                stk.pop();
                if (s[i] == '*')
                    stk.push(a * b);
                if (s[i] == '/')
                    stk.push(b / a);
                if (s[i] == '+')
                    stk.push(a + b);
                if (s[i] == '-')
                    stk.push(b - a);
            }
        }
        cout << stk.top() << endl;
    }
}