#include <bits/stdc++.h>
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long

using namespace std;

void solve(){
    int n; cin>> n;
    vector<ll> v(n);
    for(int i = 0; i < n; ++i)
        cin>> v[i];

    ll max = -1, min = INT_MAX, cntMax = 0, cntMin = 0;
    for(int i = 0; i < n; ++i){
        if(v[i]>max)
            max=v[i],cntMax=1;
        else if(v[i]==max)
            cntMax++;

        if(v[i]<min)
            min=v[i],cntMin=1;
        else if(v[i]==min)
            cntMin++;
    }

    if(max == min)
        cout<<"0 "<<(ll)((cntMin-1)*(cntMin)/2);
    else
        cout<<max-min<<" "<<(ll)(cntMin * cntMax);


}

int main() {
    IO
    solve();
}
