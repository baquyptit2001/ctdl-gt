#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int res=0;
        while(n>1000){
            if(n==0)
                break;
            n-=1000;
            res++;
        }
        while(n>=500){
            if(n==0)
                break;
            n-=500;
            res++;
        }
        while(n>=200){
            if(n==0)
                break;
            n-=200;
            res++;
        }
        while(n>=100){
            if(n==0)
                break;
            n-=100;
            res++;
        }
        while(n>=50){
            if(n==0)
                break;
            n-=50;
            res++;
        }
        while(n>=20){
            if(n==0)
                break;
            n-=20;
            res++;
        }
        while(n>=10){
            if(n==0)
                break;
            n-=10;
            res++;
        }
        while(n>=5){
            if(n==0)
                break;
            n-=5;
            res++;
        }
        while(n>=2){
            if(n==0)
                break;
            n-=2;
            res++;
        }
        while(n>=1){
            if(n==0)
                break;
            n-=1;
            res++;
        }
        cout<<res<<endl;
    }
    return 0;
}