#include <iostream>
#include <cmath>
using namespace std;
 
int main(){
     long double n, m, a; cin>>n>>m>>a;
     long long sum = ceil(m / a) * ceil(n / a);
     cout<<sum;
}