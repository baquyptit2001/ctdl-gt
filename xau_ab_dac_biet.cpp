#include<iostream>

using namespace std;

int check(string s, int n, int k){
    int dem=0;
    for(int i=0;i<n-k+1;i++){
        if(s[i]=='A'){
            if(k==1){
                dem++;
                continue;
            }
            for(int j=0;j<k-1;j++){
                if(s[j+i+1]=='B'){
                    break;
                }
                if(j==k-2){
                    dem++;
                }
            }
        }
        if(dem>1)
            return 0;
    }
    if(dem==1)
        return 1;
    return 0;
}

int main(){
    int n, k, dem=0;
    cin>>n>>k;
    string beg="", last="", res[1000];
    for(int i=0;i<n;i++){
        beg+='A';
        last+='B';
    }
    if(n==k){
        cout<<1<<endl<<beg;
    }
    while(beg!=last){
        for(int i=n-1;i>=0;i--){
            if(beg[i]=='B'){
                beg[i]='A';
                continue;
            }
            if(beg[i]=='A'){
                beg[i]='B';
                break;
            }
        }
        if(check(beg, n, k)){
            res[dem++]=beg;
        }
    }
    cout<<dem<<endl;
    for(int i=0;i<dem;i++)
        cout<<res[i]<<endl;
    return 0;
}