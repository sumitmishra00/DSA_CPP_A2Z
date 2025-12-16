#include<bits/stdc++.h>
using namespace std;

/*
Pattern 6
n = 4

1 2 3 4
1 2 3
1 2
1
*/
void pattern6(int n)
{
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n - i + 1; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

/*
Pattern 7 (Pyramid)
n = 4

   *
  ***
 *****
*******
*/
void pattern7(int n)
{
    for(int i = 0; i < n; i++)
    {
        // space
        for(int j = 0; j < n - i - 1; j++)
            cout << " ";

        // stars
        for(int j = 0; j < 2*i + 1; j++)
            cout << "*";

        cout << endl;
    }
}

/*
Pattern 8 (Inverted Pyramid)
n = 4

*******
 *****
  ***
   *
*/
void pattern8(int n)
{
    for(int i = 0; i < n; i++)
    {
        // space
        for(int j = 0; j < i; j++)
            cout << " ";

        // stars
        for(int j = 0; j < 2*n - (2*i + 1); j++)
            cout << "*";

        cout << endl;
    }
}

/*
Pattern 9 (Diamond)
n = 4

   *
  ***
 *****
*******
 *****
  ***
   *
*/
void pattern9(int n)
{
    pattern7(n);
    pattern8(n);
}

/*
Pattern 10
n = 5

*
**
***
****
*****
****
***
**
*
*/
void pattern10(int n)
{
    // upper part
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
            cout << "*";
        cout << endl;
    }

    // lower part
    for(int i = n-1; i >= 1; i--)
    {
        for(int j = 1; j <= i; j++)
            cout << "*";
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;

    cout << "\nPattern 6\n";
    pattern6(n);

    cout << "\nPattern 7\n";
    pattern7(n);

    cout << "\nPattern 8\n";
    pattern8(n);

    cout << "\nPattern 9\n";
    pattern9(n);

    cout << "\nPattern 10\n";
    pattern10(n);

    return 0;
}
