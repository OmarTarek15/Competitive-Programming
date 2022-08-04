#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main() {
    string s, t; cin>>s>>t;
    int cnt = 1;
    int j = 0;
    for(int i = 0; i < t.size(); ++i){
        if(t[i] == s[j]){
            cnt++;
            j++;
        }
    }
    cout<<cnt;
}