#include <bits/stdc++.h>
 
using namespace std;
 
 
int main(){
    int n, i; cin>>n;
    vector<int> v(n);
    for(i=0;i<n;++i)
        cin>>v[i];
    int cnt(0), tall(0), smol(1000000);
    int pos1, pos2;
    for(i=0;i<n;++i){
        if(v[i] > tall){
            tall = v[i];
            pos1 = i;
        }
    }
    for(i=pos1-1;i>=0;--i){
        swap(v[i], v[pos1]);
        pos1 = i;
        cnt++;
    }
    for(i=0;i<n;++i){
        if(v[i] <= smol){
            smol = v[i];
            pos2 = i;
            if(v[i+1] == v[i])
                pos2 = i+1;
        }
    }
    for(i=pos2+1;i<n;++i){
        swap(v[i], v[pos2]);
        pos2 = i;
        cnt++;
    }
    //for(i=0;i<n;++i)
        //cout<<v[i]<<" ";
    cout<<cnt;
}