#include <bits/stdc++.h>
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long

using namespace std;

void solve(){
    int n;
    int a[105];
    while(cin>> n)
    {
        int x(0), y(0);
        for(int i=0;i<n;i++)
        {
            cin>> a[i];
        }
        sort(a,a+n);
        for(int i=n-1;i>=0;i--)
        {
            if(x>=y)
                y+=a[i];
            else
                x+=a[i];
        }
        if(x==y)
            cout<<"YES";
        else
            cout<<"NO";
    }

}

int main() {
    IO
    solve();
}
