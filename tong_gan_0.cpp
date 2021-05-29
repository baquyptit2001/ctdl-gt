// #include <bits/stdc++.h>

// using namespace std;

// bool compare(int x, int y){
// 	return abs(x) < abs(y);
// }

// void findMinSum(int arr[], int n){
// 	sort(arr, arr + n, compare);
// 	int min = INT_MAX, x, y;
// 	for (int i = 1; i < n; i++) {
// 		if (abs(arr[i - 1] + arr[i]) <= min) {
// 			min = abs(arr[i - 1] + arr[i]);
// 			x = i - 1;
// 			y = i;
// 		}
// 	}
// 	cout<<arr[x]+arr[y]<<endl;
// }

// int main(){

// 	int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         int arr[n+2];
//         for(int i=0;i<n;i++)
//             cin>>arr[i];
//         findMinSum(arr, n);
//     }
// 	return 0;
// }


# include <bits/stdc++.h> 
# include <stdlib.h>
# include <math.h> 
  
using namespace std; 
void minAbsSumPair(int arr[], int arr_size) 
{ 
    int inv_count = 0; 
    int l, r, min_sum, sum, min_l, min_r; 
    min_l = 0; 
    min_r = 1; 
    min_sum = arr[0] + arr[1]; 
      
    for(l = 0; l < arr_size - 1; l++) 
    { 
        for(r = l + 1; r < arr_size; r++) 
        { 
        sum = arr[l] + arr[r]; 
        if(abs(min_sum) > abs(sum)) 
        { 
            min_sum = sum; 
            min_l = l; 
            min_r = r; 
        } 
        } 
    } 
      
    cout << arr[min_l]+ arr[min_r]<<endl; 
}

int main() 
{ 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n+2];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        minAbsSumPair(arr, n); 
    }
    return 0; 
} 