#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int k;
        string a, b, n1, n2;
        cin>>k>>a>>b;
        int l1 = a.length(), l2 = b.length();
        if(l1!=l2){
            n1 = (l1>l2) ? a : b;
            n2 = (l1<l2) ? a : b;
        }else{
            for(int i=l1-1;i>=0;i--){
                if(a[i]>b[i]){
                    n1=a, n2=b;
                    break;
                }
                if(a[i]<b[i]){
                    n1=b, n2=a;
                    break;
                }
            }
        }
        l1=n1.length();
        l2=n2.length();
        for(int i=0;i<l1-l2;i++)
            n2='0'+n2;
        int du=0;
        string res="";
        for(int i=l1-1;i>=0;i--){
            char c = ((n1[i]+n2[i]+du-2*'0')%k)+'0';
            res=c+res;
            du=((n1[i]+n2[i]+du-2*'0'))/k;
        }
        if(du==1)
            res='1'+res;
        cout<<res<<endl;
    }
    return 0;
}