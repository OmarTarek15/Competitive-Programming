#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
 
int main()
{
    int n,q,i;
    int m,ans;
    cin>>n;
    int a[n];
    int cnt(0);
    for(i=0; i<n; i++)
        cin>>a[i];
    cin>>q;
    sort(a,a+n);
    while(q--){
        cin>>m;
        ans=upper_bound(a,a+n, m)-a;
        cout<<ans<<"\n";
    }
}