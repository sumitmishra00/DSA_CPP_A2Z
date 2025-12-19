// WAP to print num in reverse N to 1 using recursion

#include <bits/stdc++.h>
using namespace std;

void PrintRev(int i) {
    if (i == 0)
        return;        // base case

    cout << i << " ";  // print
    PrintRev(i - 1);   // recursive call
}

int main() {
    int n;
    cin >> n;

    PrintRev(n);
}
