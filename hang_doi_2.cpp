#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    queue < int > stk;
    while (n--) {
        cin >> s;
        if (s == "PUSH") {
            int x;
            cin >> x;
            stk.push(x);

            continue;
        } else if (s == "POP") {
            if (!stk.empty())
                stk.pop();
            continue;
        } else {
            if (stk.empty())
                cout << "NONE" << endl;
            else
                cout << stk.front() << endl;
            continue;
        }
    }
    return 0;
}