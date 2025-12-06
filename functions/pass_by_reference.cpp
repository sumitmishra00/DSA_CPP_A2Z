#include<bits/stdc++.h>
using namespace std;

/*void dosomething(string &s)
{
    s[0]='t';
    cout<<s<<endl;
}

int main()
{
    string s = "raj";
    dosomething(s);
    cout<<s<<endl;
    return 0;
}  */

// For araay example 

void dosomething(int arr[], int n)
{
    arr[0] += 100;
    cout<<"value inside function:"<< arr[0] <<endl;
}

int main()
{

    int n = 5;

    int arr[n];

    for(int i = 0; i<n; i = i + 1)
    {
        cin>>arr[i];
    }

    dosomething(arr,n);

    cout<<"Value inside int main:"<< arr[0]<< endl;

    return 0;
}