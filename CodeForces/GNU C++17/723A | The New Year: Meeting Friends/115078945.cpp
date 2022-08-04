#include <iostream>
#include <algorithm>
#include <vector>
#define ll long long
using namespace std ;
int main() {
    vector<int> a(3);
    for(int i = 0; i < 3; ++i) cin>>a[i];
    sort(a.begin(), a.end());
    int ans;
    ans = a[2] - a[0];
    cout<<ans;
}