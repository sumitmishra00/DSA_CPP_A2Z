//WAP to print sum of first 3 N numbers using recursion using parameterised way 

#include <bits/stdc++.h>
using namespace std;

void PrintSum(int i, int sum) {
    if (i < 1) {          // base condition
        cout << sum;
        return;
    }

    PrintSum(i - 1, sum + i);   // recursive call
}

int main() {
    int i;
    cin >> i;

    PrintSum(i, 0);
    return 0;
}
