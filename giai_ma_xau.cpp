#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s, res = "", tmp = "";
        cin >> s;
        stack < int > so;
        stack < char > chu;
        for (int i = 0; i < s.length(); i++) {
            int num = 0;
            if (s[i] >= '0'
                and s[i] <= '9') {
                while (s[i] >= '0'
                    and s[i] <= '9') {
                    num = num * 10 + s[i] - '0';
                    i++;
                }
                i--;
                so.push(num);
            } else if (s[i] == ']') {
                tmp = "";
                num = 0;
                if (not so.empty()) {
                    num = so.top();
                    so.pop();
                }
                while (not chu.empty() and chu.top() != '[') {
                    tmp = chu.top() + tmp;
                    chu.pop();
                }
                if (not chu.empty() and chu.top() == '[')
                    chu.pop();
                for (int j = 0; j < num; j++)
                    res = res + tmp;
                for (int j = 0; j < res.length(); j++)
                    chu.push(res[j]);
                res = "";
            } else if (s[i] == '[') {
                if (s[i - 1] >= '0'
                    and s[i - 1] <= '9')
                    chu.push(s[i]);
                else {
                    chu.push(s[i]);
                    so.push(1);
                }
            } else
                chu.push(s[i]);
        }
        while (not chu.empty()) {
            res = chu.top() + res;
            chu.pop();
        }
        cout << res << endl;
    }
    return 0;
}