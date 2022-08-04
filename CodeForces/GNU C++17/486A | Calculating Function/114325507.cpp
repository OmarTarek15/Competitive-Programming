#include <iostream>
#define ll long long
using namespace std;
 
int main() {
    ll n, num;
    cin >> n;
    if(n % 2 == 0) num = n / 2;
    else num = ((n + 1) / 2) * (-1);
    cout <<num<< endl;
}