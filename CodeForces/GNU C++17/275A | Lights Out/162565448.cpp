#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int arr[4][4], tmp[4][4];
 
    for(int i = 1; i <= 3; ++i){
        for(int j = 1; j <= 3; ++j){
            cin>> tmp[i][j];
            arr[i][j] = tmp[i][j];
        }
    }
    for(int i = 1; i <= 3; ++i){
        for(int j = 1; j <= 3; ++j){
            if(tmp[i][j] != 0){
                arr[i][j-1] += tmp[i][j];
                arr[i][j + 1] += tmp[i][j];
                arr[i - 1][j] += tmp[i][j];
                arr[i + 1][j] += tmp[i][j];
            }
        }
    }
 
    for(int i = 1; i <= 3; ++i){
        for(int j = 1; j <= 3; ++j){
            if(arr[i][j] % 2)
                cout<<"0";
            else
                cout<<"1";
        }
        cout<<"\n";
    }
 
}