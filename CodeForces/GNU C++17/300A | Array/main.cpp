#include <bits/stdc++.h>
#define TxtIO freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
 
using namespace std;
 
void solve(){
    int n; cin >> n;
    vector<int> v(n);
 
    for(int i = 0; i < n; ++i)
        cin>> v[i];
 
    sort(v.begin(), v.end());
    vector<int> a, b, c;
    a.push_back(v[0]);
    v.erase(v.begin());
 
    for(int i = 0; i < v.size(); ++i)
        if(v[i] == 0){
            c.push_back(v[i]);
            v.erase(v.begin()+i);
            break;
        }
 
    for(int i = 0; i < v.size(); ++i)
        if(v[i] > 0){
            b.push_back(v[i]);
            v.erase(v.begin()+i);
            break;
        }
 
    int p = v[0];
    if(b.size() == 0){
        b.push_back(p);
        v.erase(v.begin());
    }
    else
        p = b[0];
 
    for(int i = 0; i < v.size(); ++i){
        if(p * v[i] > 0){
            b.push_back(v[i]);
            p = p*v[i];
        }else{
            c.push_back(v[i]);
        }
    }
 
    cout<<a.size()<<" ";
    for(int i = 0; i < a.size(); ++i)
        cout<<a[i]<<" ";
    cout<<endl;
 
    cout<<b.size()<<" ";
    for(int i = 0; i < b.size(); ++i)
        cout<<b[i]<<" ";
    cout<<endl;
 
    cout<<c.size()<<" ";
    for(int i = 0; i < c.size(); ++i)
        cout<<c[i]<<" ";
}
 
int main() {
    IO
    //TxtIO
    solve();
}
