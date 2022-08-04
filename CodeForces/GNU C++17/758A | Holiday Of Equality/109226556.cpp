#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main(){
    int n; cin>>n;
    int s, temp;
    temp = 0;
    s = 0;
    int arr[n];
    for(int i = 0; i < n; ++i) cin>>arr[i];
    for(int i = 1; i < n; ++i){
        if(arr[i] > arr[0]) {
            temp = arr[i];
            arr[i] = arr[0];
            arr[0] = temp;
        }
        }
    for(int j = 0; j < n; j++){
        if(arr[j] < arr[0]) s += (arr[0] - arr[j]);
    }
    cout<<s;
}