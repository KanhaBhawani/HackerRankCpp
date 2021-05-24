//**********this code is developed by Kanha Bhawani**************
#include <bits/stdc++.h>
using namespace std;

int countingValleys(int steps, string path)
{
    // vector<int> p;
    // for(auto run : path){
    //     if(run == 'U') p.push_back(1);
    //     else p.push_back(-1);
    // }
    // for (auto run : p)
    // {
    //     cout << run << " ";
    // }

    int level = 0, count = 0;
    for (auto run : path)
    {
        if (level == 0 && run == 'D')
            count += 1;

        if (run == 'U')
            level += 1;
        else
            level += -1;
    }
    return count;
}

int main()
{
    int steps;
    string path;
    cin >> steps >> path;
    cout << countingValleys(steps, path);

    return 0;
}