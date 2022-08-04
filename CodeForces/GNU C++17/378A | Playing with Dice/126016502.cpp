#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main(){
    int i, a, b;
    int f(0), s(0), d(0);
    cin>>a>>b;
    for(i=1;i<=6;++i){
        if(abs(a-i) < abs(b-i))
            f++;
        else if(abs(b-i) < abs(a-i))
            s++;
        else
            d++;
    }
    cout<<f<<" "<<d<<" "<<s;
}