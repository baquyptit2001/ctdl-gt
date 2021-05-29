#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int x;
        queue < int > q;
        while (n--) {
            cin >> x;
            switch (x) {
                case 1:
                    cout << q.size() << endl;
                    break;
                case 2:
                    if (q.empty()) cout << "YES"<<endl;
                    else cout << "NO"<<endl;
                    break;
                case 3:
                    int k;
                    cin >> k;
                    q.push(k);
                    break;
                case 4:
                    if (!q.empty()) q.pop();
                    break;
                case 5:
                    if (q.empty()) cout << "-1"<<endl;
                    else cout << q.front() << endl;
                    break;
                default:
                    if (q.empty()) cout << "-1"<<endl;
                    else {
                        int t;
                        queue < int > qq = q;
                        while (!qq.empty()) {
                            t = qq.front();
                            qq.pop();
                        }
                        cout << t << endl;
                    }
                    break;
            }
        }
    }
}