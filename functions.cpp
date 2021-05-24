//**********this code is developed by Kanha Bhawani**************
//******DONE******
#include <iostream>
using namespace std;

int max_of_four(int a, int b, int c, int d)
{
    int greatest;
    if (a > b)
    {
        if (a > c)
        {
            if (a > d)
            {
                greatest = a;
            }
            else
            {
                greatest = d;
            }
        }
        else
        {
            if (c > d)
            {
                greatest = c;
            }
            else
            {
                greatest = d;
            }
        }
    }
    else
    {
        if (b > c)
        {
            if (b > d)
            {
                greatest = b;
            }
            else
            {
                greatest = d;
            }
        }
        else
        {
            if (c > d)
            {
                greatest = c;
            }
            else
            {
                greatest = d;
            }
        }
    }
    return greatest;
}

int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    cout<<max_of_four(a,b,c,d);

    return 0;
}