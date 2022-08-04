#include <iostream>
#define ll long long
using namespace std;
 
int main() {
    int a[16] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
    int n, m; cin>>n>>m;
    for(int i = 0; i < 15; ++i){
        if(n == a[i] && m == a[i+1]){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}