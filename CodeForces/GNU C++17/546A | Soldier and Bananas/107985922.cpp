#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
  int k; cin>>k;
  int n; cin>>n;
  int w; cin>>w;
  int i = 1;
  int sum = 0;
  while(i != w + 1){
    sum += i * k;
    ++i;
  }
  if((sum-n) < 0){
    cout<<0;
    return 0;
  } 
  cout<< sum - n;
}
 