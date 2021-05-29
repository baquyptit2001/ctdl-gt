#include<iostream>

using namespace std;

int count2(int n){
    if(n<10)
        return 1;
    return 1+count2(n/10);
}

int main(){
    cout<<count2(1234);
    return 0;
}