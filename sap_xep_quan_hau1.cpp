#include<iostream>

using namespace std;


int main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0);
    int t;
    cin>>t;
    int a[11]={1, 1, 0, 0, 2, 10, 4, 40, 92, 352, 724};
    while(t--){
        int n;
        cin>>n;
        cout<<a[n]<<endl;
    }
    return 0;
}