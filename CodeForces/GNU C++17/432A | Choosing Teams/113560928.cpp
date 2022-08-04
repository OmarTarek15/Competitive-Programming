#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
 
int main(){
    int n, k; cin>>n>>k;
    int cnt = 0, team = 0;
    int arr[n];
    for(int i = 0; i < n; ++i) cin>>arr[i];
    for(int i = 0; i < n; ++i){
        if(arr[i] + k <= 5) cnt++;
        if(cnt == 3){
            team++;
            cnt = 0;
        }
    }
    cout<<team;
}