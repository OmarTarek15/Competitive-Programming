#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;
 
int main() {
    string s; cin>>s;
    if(s.size() == 1){
        cout<<s;
        return 0;
    }
    for(int i = 0; i < s.size(); ++i){
        if(s[i] > '4'){
            s[i] = '9' - s[i] + '0';
        }
    }
    if(s[0] == '0') s[0] = '9';
    cout<<s;
}