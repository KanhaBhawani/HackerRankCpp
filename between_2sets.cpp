//**********this code is developed by Kanha Bhawani**************
#include <bits/stdc++.h>

using namespace std;
int getTotalX(vector<int> a, vector<int> b)
{
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    bool div1 = true, div2 = true;
    unsigned sum = 0;
    for (unsigned int i = *(a.end()-1); i <= b[0]; i++)
    {
        div1=true;
        div2= true;
        // cout<<endl<<"**"<<i<<endl;
        for (auto run : a)
        {
            // cout<<i<<"__"<<run;
            if (i % run != 0)
            {
                div1 = false;
                break;
            }
        }
        if (div1)
        {
            // cout<<endl<<"-->"<<i<<endl;
            for (auto run : b)
            {
                // cout<<i<<"__"<<run;
                if (run % i != 0)
                {
                    div2 = false;
                    break;
                }
            }
            if (div2)
            {
                // cout<<"..."<<i<<endl;
                sum++;
            }
        }
    }

    return sum;
}

int main()
{
    int n1, n2;
    cin >> n1 >> n2;
    vector<int> a(n1), b(n2);
    for (int i = 0; i < n1; i++)
        cin >> a[i];
    for (int i = 0; i < n2; i++)
        cin >> b[i];
    cout<<getTotalX(a,b);

    return 0;
}