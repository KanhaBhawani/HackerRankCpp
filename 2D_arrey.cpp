//**********this code is developed by Kanha Bhawani**************
// vector approach bhi hai ek wo karke dekh

#include <iostream>
using namespace std;

int main()
{
    unsigned int n, q;
    unsigned int k;
    cin >> n >> q;

    // Create an array of pointers to integer arrays
    // (i.e., an array of variable-length arrays)
    int **p = new int *[n];

    // Fill each index of 'n' with a variable-length array
    for (unsigned int i = 0; i < n; i++)
    {
        cin >> k;
        // Create an array of length 'k' at index 'i'
        p[i] = new int[k];
        for (unsigned int j = 0; j < k; j++)
        {
            // Fill each cell in the 'inner' variable-length array
            int l;
            cin >> l;
            p[i][j] = l;
            // or
            // cin>>p[i][j];
        }
    }

    for (unsigned int i = 0; i < q; i++)
    {
        unsigned int a, b;
        cin >> a >> b;
        cout << p[a][b];
    }

    return 0;
}