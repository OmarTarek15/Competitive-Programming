#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main() {
    string s; cin>>s;
    int start = 0, cnt = 0;
    for(int i = 0; i < s.size(); ++i){
        int index = s[i] - 97;
        int rot = abs(start - index);
        if(rot < 13){
            cnt += rot;
        }else{
            cnt += 26 - rot;
        }
        start = index;
    }
    cout<<cnt;
}