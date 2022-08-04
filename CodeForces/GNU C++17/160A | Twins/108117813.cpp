#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int n, sum = 0, cnt = 0, temp = 0; cin>>n;
    int arr[n];
    for(int i = 0; i < n; ++i){
        cin>>arr[i];
        sum += arr[i];
    }
    sum = sum / 2;
    sort(arr, arr+n);
    for(int i = n-1; i >= 0; i--){
        temp += arr[i];
        cnt++;
        if(temp > sum) break;
    }
    cout<<cnt;
}