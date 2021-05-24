#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s)
{
    int k1, k2;

    stringstream ab, ac, ad;
    char c1 = s[0], c2 = s[1], pm = s[s.length() - 2];
    // cout<<pm<<endl; //

    s.pop_back();
    s.pop_back();

    ab << c1;
    ab >> k1;
    // cout << "k1 "<< k1 <<endl; //

    ac << c2;
    ac >> k2;
    // cout << "k1 "<< k2 <<endl; //

    int time = k1 * 10 + k2;
    // cout << "time "<< time << endl; //
    if (time == 12)
    {
        if (pm != 'P')
        {
            s[0] = '0';
            s[1] = '0';
            return s;
        }
        else
        {
            return s;
        }
    }
    else
    {
        if (pm == 'P')
        {
            time += 12;
            cout << time << endl;
        }
        else
            return s;
    }
    string times;
    ad << time;
    ad >> times;
    // cout << times << endl; //
    s.replace(0, 2, times);
    return s;
}

int main()
{
    // ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    // fout << result << "\n";
    cout << result << "\n";

    // fout.close();

    return 0;
}