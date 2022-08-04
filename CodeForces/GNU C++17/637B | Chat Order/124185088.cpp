#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main(){
    int n; cin>>n;
    string l;
    stack<string> s;
    set<string> st;
    while(n--){
        cin>>l;
        s.push(l);
    }
    while(!s.empty()){
        string c = s.top();
        s.pop();
        if(st.find(c) == st.end()){
            cout<<c<<"\n";
            st.insert(c);
        }
    }
}