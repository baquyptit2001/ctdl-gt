#include<bits/stdc++.h>

using namespace std;

long long power(long long x, unsigned int y, int p=1000000007) {
    int res = 1;
    x = x % p;
    if (x == 0) return 0;

    while (y > 0) {
        if (y & 1)
            res = (res * x) % p;
        y = y >> 1;
        x = (x * x) % p;
    }
    return res;
}

int main() {
    int t;
    cin>>t;
    while(t--){
        long long a, b;
        cin>>a>>b;
        cout<<power(a,b)<<endl;
    }
    return 0;
}