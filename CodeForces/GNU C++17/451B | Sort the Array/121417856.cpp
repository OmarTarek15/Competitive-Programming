#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main(){
    int n, cnt(0), l(0), s(0), seq(0); cin>>n;
    int a[n], b[n];
    for(int i = 0; i < n; ++i){
        cin>>a[i];
        b[i] = a[i];
    }
    sort(b, b+n);
    for(int i = 0 ;i < n; ++i)
        if(a[i] == b[i])
            cnt++;
    if(cnt == n){
        cout<<"yes\n 1 1";
        return 0;
    }
    for(int i = 0; seq<1;){
        if(a[i] < a[i+1])
            i++;
        else{
            l = i;
            s = i;
            while(a[i] > a[i+1] && i < n-1){
                i++;
                s++;
            }
            sort(a+l, a+s+1);
            seq++;
        }
    }
    for(int i = 0; i < n; ++i){
        if(b[i] != a[i]){
            cout<<"no";
            return 0;
        }
    }
    cout<<"yes\n"<<l+1<<" "<<s+1;
}