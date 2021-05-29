#include<iostream>
#include<queue>

using namespace std;

int main(){
    int n = 5;
    int k=n;
    queue<int> que;
    while(n--){
        int x;
        cin>>x;
        que.push(x);
    }
    for(int i=0;i<k;i++){
        cout<<que.front()<<' ';
        que.pop();
    }
    return 0;
}