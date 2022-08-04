#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;
 
int main() {
    string s, l; cin>>s>>l;
    int p = s.find('|');
    string o = s.substr(0, p);
    string m = s.substr(p + 1);
    for(auto i : l){
        if(o.size() <= m.size()) o += i;
        else m += i;
    }
    if(o.size() == m.size()){
        cout<<o + "|" + m;
    }else cout<<"Impossible";
}