//**********this code is developed by Kanha Bhawani**************
#include <bits/stdc++.h>
// #include<vector>
using namespace std;
int getMoneySpent(vector<int> keyboards, vector<int> drives, int b)
{
    // keyboards.sort();
    // sort(keyboards.begin(),keyboards.end());
    // sort(drives.begin(),drives.end());
    int max = -1;

    for (unsigned int i = 0; i < keyboards.size(); i++)
    {
        for (unsigned int j = 0; j < drives.size(); j++)
        {
            if (keyboards[i] + drives[j] <= b && keyboards[i] + drives[j] > max)
            {
                max = keyboards[i] + drives[j];
            }
        }
    }

    return max;
}

int main()
{
    int b, n, m;
    cin >> b >> n >> m;
    vector<int> keyboards(n) , drives(m);
    for (unsigned int i = 0; i < n; i++)
    {
        cin>> keyboards[i];
    }
    for (unsigned int i = 0; i < m; i++)
    {
        cin>> drives[i];
    }
    cout<<getMoneySpent(keyboards,drives,b);
    
    return 0;
}