#include<bits/stdc++.h>
using namespace std;

int main()
{
    // integer
    int x = 10;
    // long 
    long x = 15;
    cin>> x;
    // long long

    long long x = 160000;  

    // float , double is same 

    double z = 2.3;

    float y = 3;

    cout << "value of y:" << y << "\n"; 
    cout << "value of z:" << z << "\n"; 

    // string and getline 

    string s1;
    string s2;
    cin>>s1>>s2 ;
    cout<< s1 << " " << s2;

    // to store full line in once we use getline instead of string
    string str;
    getline(cin,str);
    cout<<str;

    // char 
    char ch = 'S';
    cout<< ch;
    return 0;


    
}