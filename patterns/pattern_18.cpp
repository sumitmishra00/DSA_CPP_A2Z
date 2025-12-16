#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {                 // rows
        for (char ch = 'A' + (n - i); ch <= 'A' + (n - 1); ch++) {
            cout << ch << " ";
        }
        cout << endl;
    }

    return 0;
}
