#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
 
int main(){
    int t, i, j; cin>>t;
    while(t--){
        int n, k; cin>>n>>k;
        vector<int> a(n);
        vector<int> b(n);
        for(i=0;i<n;++i)
            cin>>a[i];
        for(i=0;i<n;++i)
            cin>>b[i];
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        int temp;
        for(i=0;i<n;++i){
            for(j=n-1;j>=0;j--){
                if(b[j] > a[i] && k != 0){
                    temp = b[j];
                    b[j] = a[i];
                    a[i] = temp;
                    k--;
                }
            }
        }
        int sum(0);
        for(i=0;i<n;++i)
            sum += a[i];
        cout<<sum<<"\n";
    }
}
 
 