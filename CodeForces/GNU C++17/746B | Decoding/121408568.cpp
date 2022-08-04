#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
 
int main(){
    int n; cin>>n;
    string s; cin>>s;
    vector<char> vec;
    while(n != 0){
        if(n % 2 != 0)
            vec.push_back(s[0]);
        else
            vec.insert(vec.begin(), s[0]);
        s.erase(0,1);
        n = s.length();
    }
    for(int i = 0; i < vec.size(); ++i)
        cout<<vec[i];
}