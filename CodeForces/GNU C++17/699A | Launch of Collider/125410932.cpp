#include <bits/stdc++.h>
#define ll long long
using namespace std;
int min(int &a, int &b){
    int mini;
    if(a < b)
        mini = a;
    else if(b < a)
        mini = b;
    return mini;
}
int main(){
    int n; cin>>n;
    string s; cin>>s;
    vector<int> v(n);
    for(int i = 0; i < n; ++i)
        cin>>v[i];
    int l = -1, cnt;
    for(int i = 0; i < n; ++i)
        if(s[i] == 'R' && s[i+1] == 'L'){
            if(l == -1){
                l = v[i+1] - v[i];
            }
            else{
                l = min(l, v[i+1] - v[i]);
            }
        }
    if(l == -1)
        cout<<l;
    else
        cout<<l/2;
}