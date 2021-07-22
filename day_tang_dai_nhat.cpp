#include<bits/stdc++.h>

using namespace std;

int lis(int arr[], int n) {
    int lis[n];

    lis[0] = 1;
    for (int i = 1; i < n; i++) {
        lis[i] = 1;
        for (int j = 0; j < i; j++)
            if (arr[i] > arr[j] and lis[i] < lis[j] + 1)
                lis[i] = lis[j] + 1;
    }
    return *max_element(lis, lis + n);
}

int main() {
    int t;
    cin>>t;
    for(int u=1;u<=t;u++){
        int n;
        cin >> n;
        int a[n + 2];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        cout << "Test " << u << ": " << lis(a, n) << endl;
    }
    return 0;
}