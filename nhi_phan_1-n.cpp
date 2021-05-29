#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<"1 ";
        n-=1;
        int bit=1;
        while(1){
            string beg = "1", last="1";
            for(int i=0;i<bit;i++){
                beg+='0';
                last+='1';
            }
            cout<<beg<<' ';
            n--;
            if(n==0)
                break;
            while(beg!=last){
                for(int i=beg.length()-1;i>=0;i--){
                    if(beg[i]=='1'){
                        beg[i]='0';
                        continue;
                    }else{
                        beg[i]='1';
                        break;
                    }
                }
                cout<<beg<<' ';
                n--;
                if(n==0)
                    break;
            }
            bit++;
            if(n==0)
                break;
        }
        cout<<endl;
    }
    return 0;
}