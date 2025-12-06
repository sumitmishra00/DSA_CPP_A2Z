#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s = "SUMIT";
    int len = s.size();
    s[len-1] = 'z';
    cout<<s[len-1];
    cout<<s[2];
    return 0;
}