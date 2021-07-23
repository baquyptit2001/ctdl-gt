#include<bits/stdc++.h>

using namespace std;

bool number[1000];

void sang(int n){
    for(int i=2;i*i<=n;i++){
        if(number[i]){
            for(int j=i*i;j<=n;j+=i){
                number[j]=false;
            }
        }
    }
}

int main(){
    memset(number, true, sizeof(number));
    sang(30);
    for(int i=2;i<=30;i++)
        if(number[i])
            cout<<i<<' ';
    return 0;
}