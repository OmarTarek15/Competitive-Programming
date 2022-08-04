#include <iostream>
#include <algorithm>
#include <vector>
#define ll long long
using namespace std ;
int main() {
   double l, p, q, speed, ans;
   cin>>l>>p>>q;
   speed = l / (p + q);
   ans = speed * p;
   cout<<ans;
}