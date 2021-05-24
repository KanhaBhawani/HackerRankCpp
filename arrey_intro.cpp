//**********this code is developed by Kanha Bhawani**************
#include<iostream>
using namespace std;

int main()
{
    int N;
    cin>>N;
    int ar[N];
    for(int i = 0 ; i < N ; i++){
        cin>>ar[i];
    }
    for (int i = N-1; i >= 0; i--)
    {
        cout<<ar[i]<<" ";
    }
    

    return 0;
}