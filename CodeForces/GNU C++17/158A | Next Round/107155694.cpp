#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int n, k;  cin>>n>>k;
    int arr[n];
    int num = 0;
    for(int i = 0; i < n; ++i){
        cin>>arr[i];
    }
    for(int i = 0; i < n; ++i){
        int cnt;
        cnt = arr[k-1];
        if(arr[i] >= cnt && arr[i] > 0) num++;
    }
    cout<<num;
}