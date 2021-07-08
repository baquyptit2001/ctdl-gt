#include<bits/stdc++.h>

using namespace std;

stack<int> ngu1, ngu2;

void ngu(){
    if(ngu1.empty())
        return;
    ngu2.push(ngu1.top());
    ngu1.pop();
    ngu();
}