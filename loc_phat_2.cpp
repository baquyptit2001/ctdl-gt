#include<iostream>
#include<string>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int sum=0, mul=2;
        for(int i=1;i<=n;i++, mul*=2){
            sum+=mul;
        }
        cout<<sum<<endl;
        for(int i=1;i<=n;i++){
            string res="", last="";
            for(int j=0;j<i;j++){
                res+='6';
                last+='8';
            }
            cout<<res<<' ';
            while(res!=last){
                for(int j=i-1;j>=0;j--){
                    if(res[j]=='6'){                              
                        res[j]='8';                                 
                        break;
                    }
                    if(res[j]='8'){
                        res[j]='6';
                        continue;
                    }
                }
                cout<<res<<' ';
            }
        }
        cout<<endl;
    }
    return 0;
}