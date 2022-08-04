#include <iostream>
#include <vector>
 
#define ll long long
using namespace std;
string palin(string &n){
    string s = n;
    for(int i = n.length()-1; i >= 0; --i){
        s += n[i];
    }
    return s;
}
int main(){
    string n; cin>>n;
    cout<<palin(n);
}