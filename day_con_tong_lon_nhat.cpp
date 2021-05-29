#include<bits/stdc++.h>

using namespace std;

long long maxSubArraySum(long long a[], long long size) {
    long long max_so_far = a[0];
    long long curr_max = a[0];

    for (long long i = 1; i < size; i++) {
        curr_max = max(a[i], curr_max + a[i]);
        max_so_far = max(max_so_far, curr_max);
    }
    return max_so_far;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long a[n + 2];
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout << maxSubArraySum(a, n) << endl;
    }
    return 0;
}