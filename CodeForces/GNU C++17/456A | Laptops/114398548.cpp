#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;
 
int main() {
    int n, a, b; cin>>n;
    while(n--) {
        cin >> a >> b;
        if (a != b) {
            cout << "Happy Alex";
            return 0;
        }
    }
    cout<<"Poor Alex";  
}