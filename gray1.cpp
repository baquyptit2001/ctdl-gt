#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void generate(int n){
    if (n <= 0)
        return;
    vector<string> res;
    res.push_back("0");
    res.push_back("1");
    int i, j;
    for (i = 2; i < (1<<n); i = i<<1){
        for (j = i-1 ; j >= 0 ; j--)
            res.push_back(res[j]);
        for (j = 0 ; j < i ; j++)
            res[j] = "0" + res[j];
        for (j = i ; j < 2*i ; j++)
            res[j] = "1" + res[j];
    }
    for (i = 0 ; i < res.size() ; i++ )
        cout << res[i] << ' ';
    cout<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        generate(n);
    }
    cout<<endl;
    return 0;
}