#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;
 
int main(){
    string s = "qwertyuiopasdfghjkl;zxcvbnm,./";
    char l; cin>>l;
    string a; cin>>a;
    int j = 0;
    int o = a.size();
    while(o--){
        for(int i = 0; i < s.size(); ++i){
            if(l == 'R'){
                if(a[j] == s[i]){
                    cout<<s[i-1];
                    j++;
                }
            }else if(l == 'L'){
                if(a[j] == s[i]){
                    cout<<s[i+1];
                    j++;
                }
            }
        }
    }
}