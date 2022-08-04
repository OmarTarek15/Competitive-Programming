#include <iostream>
#include <vector>
using namespace std;
 
int main(){
    int n; cin>>n;
    vector<int> a(n);
    for(int i = 0; i < n; ++i) cin>>a[i];
    int smallest = a[0], greatest = a[0], cnt = 0;
    for(int i = 0; i < n; ++i){
        if(a[i] < smallest){
            cnt++;
            smallest = a[i];
        }
        if(a[i] > greatest){
            cnt++;
            greatest = a[i];
        }
    }
    cout<<cnt;
}
 