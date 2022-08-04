#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main(){
    int i;
    string s, g, p, l;
    cin>>s>>g>>p;
    l = s + g;
    sort(l.begin(), l.end());
    sort(p.begin(), p.end());
    if(l == p)
        cout<<"YES";
    else
        cout<<"NO";
}