#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
 
int main(){
    string a, b; cin>>a>>b;
    if(a == b){
        cout<<-1;
        return 0;
    }
    if(a.size() > b.size()) cout<<a.size();
    else cout<<b.size();
}