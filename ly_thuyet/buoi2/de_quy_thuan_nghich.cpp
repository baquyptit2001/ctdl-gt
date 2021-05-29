#include<iostream>

using namespace std;

bool dx(string str, int l, int r){
if (l == r) 
    return true; 

    if (str[l] != str[r]) 
    return false; 
 
    if (l < r + 1) 
    return dx(str, l + 1, r - 1); 
  
    return true;
}

int main(){
    cout<<dx("12344321",0,7);
    return 0;
}