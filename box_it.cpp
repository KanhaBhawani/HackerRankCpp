#include <iostream>
using namespace std;
//Implement the class Box
class Box
{
    //l,b,h are integers representing the dimensions of the box
    int l, b, h;
    // The class should have the following functions :
public:
    // Constructors:
    Box() : l(0), b(0), h(0) {}
    Box(int L, int B, int H) : l(L), b(B), h(H) {}
    Box(Box &B1) : l(B1.l), b(B1.b), h(B1.h) {}

    int getLength() { return l; }                     // Return box's length
    int getBreadth() { return b; }                    // Return box's breadth
    int getHeight() { return h; }                     //Return box's height
    long long  CalculateVolume() { return l * b * h; } // Return the volume of the box

    //Overload operator < as specified
    bool operator<(Box &B1)
    {
        if (l < B1.l || (b < B1.b && l == B1.l) || (h < B1.h && l == B1.l && b == B1.b))
        {
            return true;
        }
        return false;
    }

    //Overload operator << as specified
    friend ostream &operator<<(ostream &out, Box &B)
    {
        out << B.l << " " << B.b << " " << B.h;
        return out;
    }
};
void check2()
{
    int n;
    cin >> n;
    Box temp;
    for (int i = 0; i < n; i++)
    {
        int type;
        cin >> type;
        if (type == 1)
        {
            cout << temp << endl;
        }
        if (type == 2)
        {
            int l, b, h;
            cin >> l >> b >> h;
            Box NewBox(l, b, h);
            temp = NewBox;
            cout << temp << endl;
        }
        if (type == 3)
        {
            int l, b, h;
            cin >> l >> b >> h;
            Box NewBox(l, b, h);
            if (NewBox < temp)
            {
                cout << "Lesser\n";
            }
            else
            {
                cout << "Greater\n";
            }
        }
        if (type == 4)
        {
            cout << temp.CalculateVolume() << endl;
        }
        if (type == 5)
        {
            Box NewBox(temp);
            cout << NewBox << endl;
        }
    }
}

int main()
{
    check2();
}