//**********this code is developed by Kanha Bhawani**************
#include<iostream>
using namespace std;

int main()
{
    unsigned int n;
    cin>>n;
    unsigned int ar[n];
    for (unsigned int i = 0; i < n; i++)
    {
        cin>>ar[i];
    }
    unsigned int greatest=0;
    for (unsigned int i = 0; i < n; i++)
    {
        if (ar[i]>=greatest)
        {
            greatest=ar[i];
        }
    }
    unsigned int sum=0;
    for (unsigned int i = 0; i < n; i++)
    {
        if (ar[i]==greatest)
        {
            sum++;
        }
        
    }
    cout<<sum;

    return 0;
} 