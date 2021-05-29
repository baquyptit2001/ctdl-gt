#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n+2];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int step = 1;
    for (int i = 0; i < n-1;i++){
		for (int j = i + 1; j < n;j++)
            if (a[i]>a[j])
                swap(a[i], a[j]);
        cout<<"Buoc "<<step<<": ";
        for(int j=0;j<n;j++)
            cout<<a[j]<<' ';
        step++;
        cout<<endl;
    }
    return 0;
}