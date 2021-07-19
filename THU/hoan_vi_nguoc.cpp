#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string start, end, store[1000];
        int count=0;
        for(int i=0;i<n;i++){
            start+=(i+'0'+1);
            end+=(n-i+'0');
        }
        store[count++]=start;
        while(start!=end){
            for(int i=n-2;i>=0;i--){
                if(start[i]<start[i+1]){
                    int mark=i+1;
                    char c=start[i+1];
                    for(int j=i+2;j<n;j++){
                        if(start[j]<c and start[j]>start[i]){
                            mark=j;
                            c=start[j];
                        }
                    }
                    swap(start[mark], start[i]);
                    reverse(start.begin()+i+1, start.end());
                    store[count++]=start;
                }
            }
        }
        for(int i=count-1;i>=0;i--){
            cout<<store[i]<<' ';
        }
        cout<<endl;
    }
    return 0;
}