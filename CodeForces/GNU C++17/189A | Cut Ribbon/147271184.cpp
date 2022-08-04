#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,n;
    int ans, r, k;
    while(cin>>n>>a>>b>>c)
    {
        ans=0;
        for(int i=0;i*a<=n;++i){
            for(int j=0;i*a+j*b<=n;++j){
                r = n-i*a-j*b;
                if(r%c==0) {
                    k = r/c;
                    ans = max(ans, i + j + k);
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}