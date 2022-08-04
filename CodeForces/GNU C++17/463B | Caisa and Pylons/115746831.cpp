#include <iostream>
#include <algorithm>
#include <vector>
#define ll long long
using namespace std;
int main() {
    int n; cin>>n;
    vector <int> a(n);
    for(int i = 0; i < n; ++i) cin>>a[i];
    sort(a.begin(), a.end());
    int cnt;
    cnt = a[n-1];
    cout<<cnt;
}