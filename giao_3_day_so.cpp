#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n1, n2, n3;
        cin>>n1>>n2>>n3;
        long long a1[n1+2], a2[n2+2], a3[n3+2];
        for(int i=0;i<n1;i++)
            cin>>a1[i];
        for(int i=0;i<n2;i++)
            cin>>a2[i];
        for(int i=0;i<n3;i++)
            cin>>a3[i];
        int i =0, j=0 , k =0, con=0;
        while(i < n1 and j < n2 and k < n3)
        {
            if(a1[i] == a2[j] and a3[k] == a1[i])
            {
                cout << a1[i] <<" ";
                i++; j++; k++;con=1;
            }
            else if(a1[i] < a2[j])
                i++;
            else if(a2[j] < a3[k])
                j++;
            else
                k++;
            
        }
        if(!con)
            cout<< -1;
        cout<<endl;
    }
}