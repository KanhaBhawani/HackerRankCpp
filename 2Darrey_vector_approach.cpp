//**********this code is developed by Kanha Bhawani**************
// vector approach-->
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, q, k, x, a, b;
    cin >> n >> q;

    // vector<vector<int>> row(n);
    vector<vector<int>> row;

    for (int i = 0; i < n; i++)
    {
        cin >> k;
        // IF we use row(n), then we dont have to define col vector.
        // ****OR****
        // row[i].resize[k];
        vector<int> col;
        for (int j = 0; j < k; j++)
        {
            // cin>>x;
            // row[i].push_back(x);
            // ****OR****
            // cin>>row[i][j];
            cin >> x;
            col.push_back(x);
        }
        // void
        row.push_back(col);
    }
    for (int i = 0; i < q; i++)
    {
        cin >> a >> b;
        cout << row[a][b] << endl;
    }

    return 0;
}