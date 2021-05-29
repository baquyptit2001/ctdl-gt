#include<iostream>
#include<limits.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n1, n2, x;
        cin>>n1>>n2;
        long long la = LONG_LONG_MIN, nb=LONG_LONG_MAX;
        for(int i=0;i<n1;i++){
            cin>>x;
            if(x>la)
                la=x;
        }
        for(int i=0;i<n2;i++){
            cin>>x;
            if(x<nb)
                nb=x;
        }
        cout<<la*nb<<endl;
    }
    return 0;
}