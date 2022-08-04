#include <iostream>
 
using namespace std;
 
int main(){
    string s, l; cin>>s;
    for(int i = 0; i < s.size(); ++i){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] ==
        'O' || s[i] == 'U' || s[i] == 'y' || s[i] == 'Y') continue;
        else{
            l += '.';
            l += tolower(s[i]);
        }
    }
    cout<<l;
}