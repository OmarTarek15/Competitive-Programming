#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
   int n, cnt; cin>>n;
   cnt = 0;
   int arr[n];
   for(int i = 0; i < n; ++i) cin>>arr[i];
   for(int i = 0; i < n; ++i){
      if(arr[i] != arr[i+1]) cnt++;
      }
   cout<<cnt;
}