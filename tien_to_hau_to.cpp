#include<bits/stdc++.h>

using namespace std;

int main() { 
    int t;
    cin >> t;
    while (t--){
    	string s;
        cin>>s;
    	stack<string> store; 
        int length = s.size(); 
        for (int i = length - 1; i >= 0; i--) { 
            if (s[i] == '*' or s[i] == '/' or s[i] == '+' or s[i] == '-') { 
                string dau1 = store.top();
                store.pop(); 
                string dau2 = store.top();
                store.pop(); 
                string tmp = dau1 + dau2 + s[i];  
                store.push(tmp); 
            } 
            else { 
                store.push(string(1, s[i])); 
            } 
        } 
        cout << store.top() << endl; 
    }
} 