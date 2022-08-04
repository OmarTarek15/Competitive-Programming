#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main() {
    int k, r, cnt = 1, temp; cin>>k>>r;
    for(int i = 0; i < 10; ++i){
        temp = cnt * k;
        if(temp % 10 == 0){
            cout<<cnt;
            return 0;
        }
        if(temp % 10 == r){
            cout<<cnt;
            return 0;
        }
        cnt++;
    }
}