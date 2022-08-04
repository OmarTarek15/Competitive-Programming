#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
 
int main(){
    int n, cnt1(0), cnt2(0), cnt3(0), cnt4(0), taxi(0); cin>>n;
    int a[n];
    for(int i = 0; i < n; ++i){
        cin>>a[i];
        if(a[i] == 1)
            cnt1++;
        if(a[i] == 2)
            cnt2++;
        if(a[i] == 3)
            cnt3++;
        if(a[i] == 4)
            cnt4++;
    }
    taxi += cnt4;
    while(cnt3 != 0 && cnt1 != 0){
        cnt3--;
        cnt1--;
        taxi++;
    }
    if(cnt1 == 0 && cnt3 != 0){
        taxi += cnt3;
        cnt3 = 0;
    }
    taxi += cnt2/2;
    if(cnt2 % 2 != 0){
        if(cnt1 <= 2){
            taxi++;
            cnt2 = 0;
            cnt1 = 0;
        }
        else{
            cnt1 -= 2;
            taxi++;
            cnt2 = 0;
        }
    }
    if(cnt1 != 0){
        taxi += cnt1/4;
        if(cnt1 % 4 != 0){
            taxi++;
        }
    }
    cout<<taxi;
}