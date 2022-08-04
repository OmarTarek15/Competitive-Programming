#include <iostream>
#define ll long long
using namespace std;
 
int main() {
    int t; cin>>t;
    while(t--){
        int cnt = 0;
        int n; cin>>n;
        while(n--){
            int x; cin>>x;
            if(x == 1 || x == 3) cnt++;
        }
        cout<<cnt<<endl;
    }
}