//WAP to print sum of first 3 N numbers using recursion using functional way 

#include <bits/stdc++.h>
using namespace std;

int sum(int n) {
    if (n == 0)
        return 0;              // base case

    return n + sum(n - 1);     // recursive relation
}

int main() {
    int n = 3;
    cout << sum(n);
    return 0;
}
