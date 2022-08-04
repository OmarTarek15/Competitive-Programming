#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
 
int main(){
    int arr[300];
    int cnt = 0;
    int n, p, q; cin>>n>>p;
    for(int i = 0; i < p; ++i) cin>>arr[i];
    cin>>q;
    for(int i = p; i < p + q; ++i) cin>>arr[i];
    sort(arr, arr + (p + q));
    for(int i = 0; i < p + q; ++i){
        if(arr[i] != arr[i+1]) cnt++;
    }
    if(cnt == n) cout<<"I become the guy.";
    else cout<<"Oh, my keyboard!";
}