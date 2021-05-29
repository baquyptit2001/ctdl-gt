#include<iostream>

#define MAX  100

using namespace std;

class Dothi{
    int n;
    int A[MAX][MAX];
    public:
    bool chuaxet[MAX];
    void readdata();
    void init();
    void res(int u);
};

void Dothi::readdata(){
    cin>>n;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            cin>>A[i][j];
}

void Dothi::init(){
    for(int i=1;i<=n;i++)
        chuaxet[i]=true;
}

void Dothi::res(int u){
    cout<<u<<' ';
    chuaxet[u]=false;
    for(int v=1;v<=n;v++)
        if((A[u][v]==1)&&(chuaxet[v]==true))
            res(v);
}


int main(){
    Dothi G;
    G.readdata();
    G.init();
    cout<<endl;
    G.res(1);
    return 0;
}