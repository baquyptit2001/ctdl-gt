#include<bits/stdc++.h>

using namespace std;

int getMin(int a, int b, int c){
    int tmp=a;
    if(tmp>b)
        tmp=b;
    if(tmp>c)
        tmp=c;
    return tmp;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, p2=0, p3=0, p5=0;
        cin>>n;
        vector <int> res;
        res.push_back(1);
        if(n==1){
            cout<<1<<endl;
            continue;
        }
        for(int i=1;i<n;i++){
            int next = getMin(2*res[p2],3*res[p3],5*res[p5]);
            res.push_back(next);
            if(next==res[p2]*2)
                p2++;
            if(next==res[p3]*2)
                p3++;
            if(next==res[p5]*2)
                p5++;
        }
        cout<<res[res.size()-1]<<endl;
    }
    return 0;
}