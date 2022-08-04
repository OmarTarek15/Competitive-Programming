#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
 
int main(){
    int n, m, mini; cin>>n>>m;
    if(n>m)
        mini = m;
    else
        mini = n;
    if(mini%2==0)
        cout<<"Malvika";
    else
        cout<<"Akshat";
}