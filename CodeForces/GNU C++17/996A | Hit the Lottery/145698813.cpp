#include <bits/stdc++.h>
 
using namespace std;
 
 
int main(){
    int n,i; cin>>n;
    int cnt(0);
    while(n > 0){
        if(n>=100){
            cnt++;
            n-=100;
            continue;
        }else if(n>=20){
            cnt++;
            n-=20;
            continue;
        }else if(n>=10){
            cnt++;
            n-=10;
            continue;
        }else if(n>=5){
            cnt++;
            n-=5;
            continue;
        }else if(n>=1){
            cnt++;
            n-=1;
            continue;
        }
    }
    cout<<cnt;
}