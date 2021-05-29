#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector < int > res;
    set < int > stk;
    for (int i = 0; i < n; i++) {
        int x = stk.size();
        int a;
        cin >> a;
        stk.insert(a);
        if (x != stk.size())
            res.push_back(a);
    }
    for (int i = 0; i < res.size(); i++)
        cout << res[i] << ' ';
    return 0;
}