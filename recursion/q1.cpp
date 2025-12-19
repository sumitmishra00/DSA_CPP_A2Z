// WAP to print name N times using recursion 


#include<bits/stdc++.h>
using namespace std;

void printName( int i , int  n)
{
    if ( i > n)

    return;

    cout<<"Sumit"<< endl;

    printName( i + 1 , n); //Recursive function

}

int main()
{
    int n;
    cin>>n;

    printName( 1, n);
    return 0;
}