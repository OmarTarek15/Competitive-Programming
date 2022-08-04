#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main(){
    int r1, r2, c1, c2, d1, d2;
    cin>>r1>>r2>>c1>>c2>>d1>>d2;
    for(int i = 1; i <= 9; ++i)
        for(int j = 1; j <= 9; ++j)
            for(int l = 1; l <= 9; ++l)
                for(int m = 1; m <= 9; ++m)
                    if(i+j==r1 && l+m==r2 && i+l==c1 && j+m==c2 && i+m==d1 && j+l==d2 && i!=j && i!=l && i!=m && j!=l && j!=m && l!=m){
                        cout<<i<<" "<<j<<"\n"<<l<<" "<<m;
                        return 0;
                    }
    cout<<-1;
 
}