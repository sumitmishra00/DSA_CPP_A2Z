// WAP to print from 1 to N using recursion 

#include<bits/stdc++.h>
using namespace std;

void PrintNum( int i , int n)
{
    if ( i > n)

    return;

    cout<< i;

    PrintNum(i + 1 , n);
}
int main()
{
    int n;
    cin>> n;
    PrintNum( 1 , n);
}