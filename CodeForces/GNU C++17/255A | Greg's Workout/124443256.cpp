#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main(){
    int n, q, ch(0), bi(0), bck(0); cin>>n;
    for(int i = 1; i <= n; ++i){
        cin>>q;
        if(i % 3 == 1)
            ch += q;
        else if(i % 3 == 2)
            bi += q;
        else
            bck += q;
    }
    if(ch > bi && ch > bck)
        cout<<"chest";
    else if(bi > ch && bi > bck)
        cout<<"biceps";
    else if(bck > bi && bck > ch)
        cout<<"back";
}