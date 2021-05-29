#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n+2];
        for(int i=0;i<n;i++)
            cin>>a[i];
        int F[n], max = 0;
        for (int i = 0; i < n; i++)
            F[i] = 1;
        for (int i = 1; i < n; i++){
            for (int j = 0; j < i; j++)
                if (a[i] >= a[j] and F[i] < F[j] +1)
                    F[i] = F[j] + 1;
        }
        for (int i = 0; i < n; i++)
            if (max <  F[i])
                max = F[i];
        cout << n-max << endl;
    }
    return 0;
}