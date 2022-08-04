#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main() {
    int n, s = 0, d = 0; cin>>n;
    int arr[n];
    for(int i = 0; i < n; ++i) cin>>arr[i];
    int j = n - 1;
    int l = 0;
    for(int i = 0; i < n; ++i){
        if(i % 2 == 0){
            if(arr[j] > arr[l]){
                s += arr[j];
                j--;
            }else if(arr[l] > arr[j]){
                s += arr[l];
                l++;
            }else{
                s += arr[l];
            }
        }else{
            if(arr[j] > arr[l]){
                d += arr[j];
                j--;
            }else if(arr[l] > arr[j]){
                d += arr[l];
                l++;
            }else{
                d += arr[l];
            }
        }
    }
    cout<<s<<" "<<d;
}