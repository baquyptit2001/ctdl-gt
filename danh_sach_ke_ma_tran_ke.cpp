#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int x, store[n + 2][n + 2] = {0};
    for (int i = 0; i < n; i++) {
        while (cin>>x) {
            store[i][x-1] = 1;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            cout<<store[i][j]<<' ';
        cout<<endl;
    }
    return 0;
}