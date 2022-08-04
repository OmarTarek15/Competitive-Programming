#include <iostream>
 
using namespace std;
 
int main() {
    int n, k;
    cin >> n >> k;
    string s = "abcdefghijklmnopqrstuvwxyz";
    string l = "";
    for(int i = 0; i < n; ++i){
        l += s[i % k];
    }
    cout<<l;
}