#include<iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    int kq[11]={0,1,2,3,5,7,11,15,22,30,42};
    while(t--){
        int n;
        cin>>n;
        int a[n+1],index;
        a[0]=n-1;
        a[1]=1;
        cout<<kq[n]<<endl;
        if(n==1){
            cout<<"(1)"<<endl;
            continue;
        }
        cout<<'('<<n<<") ("<<n-1<<" 1) ";
        int mark=1;
        for(int i=2;i<n;i++)
            a[i]=0;
        while(a[0]!=1){
            int mark=n;
            for(int i=0;i<n;i++){
                mark-=a[i];
                if(a[i]==1){
                    mark+=a[i]+1;
                    a[i-1]--;
                    index=i;
                    while(mark>0){
                        if(mark<=a[i-1]){
                            a[index++]=mark;
                            mark=0;
                        }
                        else{
                            a[index++]=a[i-1];
                            mark-=a[i-1];
                        }
                    }
                    cout<<'(';
                    for(int j=0;j<index;j++){
                        cout<<a[j];
                        if(j!=index-1)
                            cout<<' ';
                    }
                    cout<<") ";
                    break;
                }
                if(i==index-1){
                    a[i]-=1;
                    a[i+1]=1;
                    index++;
                    cout<<'(';
                    for(int j=0;j<index;j++){
                        cout<<a[j];
                        if(j!=index-1)
                            cout<<' ';
                    }
                    cout<<") ";
                    break;
                }
            }
        }
        cout<<endl;
    }
    return 0;
}