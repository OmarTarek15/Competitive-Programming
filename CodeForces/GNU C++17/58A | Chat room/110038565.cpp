#include <iostream>
using namespace std;
 
int main(){
    string s, h = "hello"; cin>>s;
    int cnt, j;
    cnt = 0, j = 0;
    for(int i = 0; i < s.size(); ++i){
        if(s[i] == h[j]){
            cnt++;
            j++;
        }
    }
    if(cnt == 5) cout<<"YES";
    else cout<<"NO";
}