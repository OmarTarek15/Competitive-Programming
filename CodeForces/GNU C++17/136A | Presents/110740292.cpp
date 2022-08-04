#include <iostream>
using namespace std;
int n, p, arr[105];
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> p;
        arr[p] = i;
    }
    for (int i = 1; i <= n; i++) {
        cout << arr[i] << " ";
    }
}