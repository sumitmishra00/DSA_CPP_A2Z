#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 5;

    // upper part
    for(int i = n; i >= 1; i--) {
        cout << string(i, '*');
        cout << string(2*(n-i), ' ');
        cout << string(i, '*') << endl;
    }

    // lower part
    for(int i = 1; i <= n; i++) {
        cout << string(i, '*');
        cout << string(2*(n-i), ' ');
        cout << string(i, '*') << endl;
    }
}
