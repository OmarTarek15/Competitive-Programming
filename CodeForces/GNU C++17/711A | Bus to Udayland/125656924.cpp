#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main(){
    int n; cin>>n;
    char a[n][6];
 
 
    for(int i = 0; i < n;++i){
        for(int j = 0; j < 5; ++j){
            cin>>a[i][j];
        }
    }
 
    bool flag = false;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 5; j++){
            if(a[i][j] == 'O' && a[i][j+1] == 'O'){
                a[i][j] = '+';
                a[i][j+1] = '+';
                flag = true;
                cout<<"YES"<<"\n";
                break;
            }
        }
        if(flag)
            break;
    }
 
    if(!flag){
        cout<<"NO";
        return 0;
    }
 
    for(int i = 0; i < n;++i){
        for(int j = 0; j < 5; ++j){
            cout<<a[i][j];
        }
        cout<<"\n";
    }
}