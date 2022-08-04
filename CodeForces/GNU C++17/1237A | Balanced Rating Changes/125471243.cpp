#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main(){
    int n; cin>>n;
    vector<int> v(n);
    for(int i = 0; i < n; ++i)
        cin>>v[i];
    int f(0);
    for(int i = 0; i < n;++i){
        double k = (double) v[i]/2;
        if(v[i] % 2 != 0){
            if(f == 0){
                v[i] = ceil(k);
                f = 1;
            }else if(f == 1){
                v[i] = floor(k);
                f = 0;
            }
        }else{
            v[i] /= 2;
        }
    }
    for(int i = 0; i < n; ++i)
        cout<<v[i]<<"\n";
}