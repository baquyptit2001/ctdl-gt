#include<iostream>

using namespace std;

class dt{
    int n;
    int a[100][100];
    public:
    int xet[100];
    void read();
    void init();
    void res(int u);
};

void dt::read(){
    cin>>n;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            cin>>a[i][j];
}

void dt::init(){
    for(int i=1;i<=n;i++)
        xet[i]=1;
}

void dt::res(int u){
    cout<<u<<' ';
    xet[u]=0;
    for(int v=1;v<=n;v++)
        if((a[u][v]==1)&&xet[v])
            res(v);
}

int main(){
    dt g;
    g.read();
    g.init();
    cout<<endl;
    g.res(1);
    return 0;
}