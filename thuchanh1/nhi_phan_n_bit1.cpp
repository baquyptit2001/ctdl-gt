#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        string res="", last="";
        for(int i=0;i<n;i++){
            if(i<k)
                res+='1';
            else
                res='0'+res;
            last+='1';
        }
        cout<<res<<endl;
        while(res!=last){
            int dem=0;
            for(int i=n-1;i>=0;i--){
                if(res[i]=='1'){
                    res[i]='0';
                    continue;
                }
                if(res[i]=='0'){
                    res[i]='1';
                    break;
                }
            }
            for(int i=0;i<n;i++){
                if(res[i]=='1')
                    dem++;
                if(dem>k)
                    break;
            }
            if(dem==k)
                cout<<res<<endl;
        }
    }
    return 0;
}