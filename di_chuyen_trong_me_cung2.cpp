#include<bits/stdc++.h>

using namespace std;

int n, store[15][15];
bool visited[15][15], check = false;
string result;

void Try(int i, int j) {
    if (i == n - 1 and j == n - 1) {
        check = true;
        cout << result << ' ';
        return;
    }
    if (i < n - 1 and store[i + 1][j] and not visited[i + 1][j]) {
        result += 'D';
        visited[i + 1][j] = true;
        Try(i + 1, j);
        visited[i + 1][j] = false;
        result.erase(result.size() - 1, 1);
    }
    if (j > 0 and store[i][j - 1] and not visited[i][j - 1]) {
        result += 'L';
        visited[i][j - 1] = true;
        Try(i, j - 1);
        visited[i][j - 1] = false;
        result.erase(result.size() - 1, 1);
    }
    if (j < n - 1 and store[i][j + 1] and not visited[i][j + 1]) {
        result += 'R';
        visited[i][j + 1] = true;
        Try(i, j + 1);
        visited[i][j + 1] = false;
        result.erase(result.size() - 1, 1);
    }
    if (i > 0 and store[i - 1][j] and not visited[i - 1][j]) {
        result += 'U';
        visited[i - 1][j] = true;
        Try(i - 1, j);
        visited[i - 1][j] = false;
        result.erase(result.size() - 1, 1);
    }
    return;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        check = false;
        cin >> n;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> store[i][j];
                visited[i][j] = 0;
            }
        }
        visited[0][0] = 1;
        if (store[0][0] == 0) {
            cout << "-1" << endl;
            continue;
        }
        Try(0, 0);
        if (not check) {
            cout << "-1" << endl;
            continue;
        }
        cout << endl;
    }
    return 0;
}