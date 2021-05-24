//**********this code is developed by Kanha Bhawani**************
//*******DONE********
#include <iostream>
#include <climits>

using namespace std;

void update(int *a, int *b)
{
    *a = *a + *b;
    *b = max(((*a-*b) - *b), (*a - (*a-*b)));
}

int main()
{
    int a, b;
    int *pa = &a;
    int *pb = &b;

    cin >> a >> b;
    update(pa, pb);
    cout << a << endl
         << b;

    return 0;
}