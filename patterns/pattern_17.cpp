#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; // Number of rows

    for (int i = 1; i <= n; i++) {
        // Ascending letters
        for (int j = 0; j < i; j++) {
            cout << char('A' + j);
        }

        // Descending letters
        for (int j = i - 2; j >= 0; j--) {
            cout << char('A' + j);
        }

        cout << endl; // Next row
    }

    return 0;
}
