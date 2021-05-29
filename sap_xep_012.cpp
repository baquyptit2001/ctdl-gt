#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int k=0, m=0, h=0;
        while(n--){
            int x;
            cin>>x;
            if(x==0)
                k++;
            if(x==1)
                m++;
            if(x==2)
                h++;
        }
        for(int i=0;i<k;i++)
            cout<<"0 ";
        for(int i=0;i<m;i++)
            cout<<"1 ";
        for(int i=0;i<h;i++)
            cout<<"2 ";
        cout<<endl;
    }
    return 0;
}