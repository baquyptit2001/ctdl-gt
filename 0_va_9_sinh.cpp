#include<bits/stdc++.h>

using namespace std;

int check(string s, int n) {
    long long k;
    stringstream sso;
    sso << s;
    sso >> k;
    if (k % n == 0)
        return 1;
    return 0;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s = "9";
        int n;
        cin >> n;
        string res = "";
        if(check(s, n))
            res = s;
        int dem = 2;
        while(res==""){
            string start = "9", end = "9";
            for(int i=0;i<dem-1;i++){
                start+='0';
                end+='9';
            }
            if(check(start,n)){
                res=start;
                break;
            }
            while(start!=end){
                for(int i = start.size()-1;i>=0;i--){
                    if(start[i]=='9'){
                        start[i]='0';
                        continue;
                    }else{
                        start[i] = '9';
                        break;
                    }
                }
                if(check(start,n)){
                    res = start;
                    break;
                }
            }
            dem++;
        }
        cout<<res<<endl;
    }
    return 0;
}