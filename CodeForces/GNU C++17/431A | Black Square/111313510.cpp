#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main() {
    int arr[4];
    int cnt = 0;
    for(int i = 0; i < 4; ++i) cin>>arr[i];
    string s; cin>>s;
    for(int i = 0; i < s.size(); ++i){
        if(s[i] == '1') cnt += arr[0];
        if(s[i] == '2') cnt += arr[1];
        if(s[i] == '3') cnt += arr[2];
        if(s[i] == '4') cnt += arr[3];
    }
    cout<<cnt;
}