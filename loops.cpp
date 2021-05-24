//**********this code is developed by Kanha Bhawani**************
// ***** DONE *******
#include <iostream>
using namespace std;

int main()
{
    int a, b;
    // cout << "give two positive integers" << endl;
    cin >> a >> b;
    // cout << "given interval: [" << a << "," << b << "]" << endl;
    for (int n = a; n <= b; n++)
    {

        if (n <= 9 && n >= 1)
        {
            switch (n)
            {
            case 1:
                cout << "one" << endl;
                break;
            case 2:
                cout << "two" << endl;
                break;
            case 3:
                cout << "three" << endl;
                break;
            case 4:
                cout << "four" << endl;
                break;
            case 5:
                cout << "five" << endl;
                break;
            case 6:
                cout << "six" << endl;
                break;
            case 7:
                cout << "seven" << endl;
                break;
            case 8:
                cout << "eight" << endl;
                break;
                // case 9:
                //     cout<<"one";
                //     break;

            default:
                cout << "nine" << endl;
                break;
            }
        }
        else if (n > 9)
        {
            if (n % 2 == 0)
            {
                cout << "even" << endl;
            }
            else
            {
                cout << "odd" << endl;
            }
        }
        else
        {
            // cout << "only positive integers accepted!" << endl;
            break;
        }
    }

    return 0;
}