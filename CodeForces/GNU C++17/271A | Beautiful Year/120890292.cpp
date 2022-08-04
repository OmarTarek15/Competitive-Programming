#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
 
int main(){
    int y; cin>>y;
    while(true){
        y += 1;
        int i = y / 1000;
        int j = y / 100 % 10;
        int l = y / 10 % 10;
        int k = y % 10;
        if(i != j && i != l && i != k && j != l && j != k && l != k)
            break;
    }
    cout<<y;
}