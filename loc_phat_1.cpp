#include<iostream>
#include<string>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=n;i>0;i--){
            string res="", last="";
            for(int j=0;j<i;j++){
                res+='8';
                last+='6';
            }
            cout<<res<<' ';
            while(res!=last){
                for(int j=i-1;j>=0;j--){
                    if(res[j]=='8'){                              
                        res[j]='6';                                 
                        break;
                    }
                    if(res[j]='6'){
                        res[j]='8';
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