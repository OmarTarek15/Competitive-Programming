#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;
 
int main() {
    string s; cin>>s;
    int x = 0;
    for(int i = 0; i < s.size(); ++i){
        if(s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B'){
            i += 2;
            if(x == 1){
                cout<<" ";
                x = 0;
            }
        }else{
            cout<<s[i];
            x = 1;
        }
    }
}