#include<bits/stdc++.h>

using namespace std;

int findMaxLen(string str) {
    int n = str.length();
    stack < int > stk;
    stk.push(-1);
    int result = 0;
    for (int i = 0; i < n; i++) {
        if (str[i] == '(')
            stk.push(i);
        else {
            if (!stk.empty()) {
                stk.pop();
            }
            if (!stk.empty())
                result = max(result, i - stk.top());
            else
                stk.push(i);
        }
    }
    return result;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cout << findMaxLen(s) << endl;
    }
    return 0;
}