#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;
 
int main() {
    int n; cin>>n;
    string s; cin>>s;
    int cnt = 0;
    for(int i = 0; i < s.size(); ++i){
       if(s[i] == '0') cnt++;
    }
    cout<<abs(n - 2 * cnt);
}