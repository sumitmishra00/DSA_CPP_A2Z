#include<bits/stdc++.h>
using namespace std;

void pattern12(int n)
{
    for(int i = 0; i < n; i++)
    {
        // left numbers
        for(int j = 1; j <= i + 1; j++)
        {
            cout << j;
        }

        // spaces
        for(int j = 0; j < 2 * (n - i - 1); j++)
        {
            cout << " ";
        }

        // right numbers
        for(int j = i + 1; j >= 1; j--)
        {
            cout << j;
        }

        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    pattern12(n);
    return 0;
}
