#include <iostream>
 
using namespace std;
int min(int a, int b, int c){
    int mini = 0;
    if(a < b && a < c) mini = a;
    else if(b < a && b < c) mini = b;
    else if(c < a && c < b) mini = c;
    return mini;
}
int max(int a, int b, int c){
    int maxi = 0;
    if(a > b && a > c) maxi = a;
    else if(b > a && b > c) maxi = b;
    else if(c > a && c > b) maxi = c;
    return maxi;
}
int main(){
    int cntA(0), cntB(0), cntC(0);
    string s;
    int i(3);
    while(i--){
        cin>>s;
        if(s == "A>B" || s == "A>C" || s == "B<A" || s == "C<A") cntA++;
        else if(s == "B>A" || s == "B>C" || s == "A<B" || s == "C<B") cntB++;
        else if(s == "C>A" || s == "C>B" || s == "A<C" || s == "B<C") cntC++;
    }
    if(cntA == cntB || cntA == cntC) cout<<"Impossible";
    if(min(cntA, cntB, cntC) == cntA) cout<<"A";
    if(min(cntA, cntB, cntC) == cntB) cout<<"B";
    if(min(cntA, cntB, cntC) == cntC) cout<<"C";
    if(min(cntA, cntB, cntC) < cntA && cntA < max(cntA, cntB, cntC)) cout<<"A";
    if(min(cntA, cntB, cntC) < cntB && cntB < max(cntA, cntB, cntC)) cout<<"B";
    if(min(cntA, cntB, cntC) < cntC && cntC < max(cntA, cntB, cntC)) cout<<"C";
    if(max(cntA, cntB, cntC) == cntA) cout<<"A";
    if(max(cntA, cntB, cntC) == cntB) cout<<"B";
    if(max(cntA, cntB, cntC) == cntC) cout<<"C";
}