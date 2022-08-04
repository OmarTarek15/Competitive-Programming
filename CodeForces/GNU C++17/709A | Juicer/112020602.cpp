#include <iostream>
 
using namespace std;
 
int main(){
    int n, b, d; cin>>n>>b>>d;
    int cnt = 0;
    int waste = 0;
    while(n--){
        int a; cin>>a;
        if(a <= b) cnt += a;
        if(cnt > d){
            waste++;
            cnt = 0;
        }
    }
 
    cout<<waste;
}