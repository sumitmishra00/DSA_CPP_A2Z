#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 4;
    int size = 2*n - 1;

    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            int val = max(abs(i - (n-1)), abs(j - (n-1))) + 1;
            cout << val << " ";
        }
        cout << endl;
    }
}
