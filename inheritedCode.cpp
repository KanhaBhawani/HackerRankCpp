// EXCEPTION HANDLING-->
#include <iostream>
#include <string>
#include <sstream>
#include <exception>
using namespace std;
/* THEORY-->
One of the advantages of C++ over C is Exception Handling. 
Exceptions are run-time anomalies or abnormal conditions that
a program encounters during its execution. There are two types 
of exceptions: a)Synchronous, b)Asynchronous(Ex:which are 
beyond the program’s control, Disc failure etc). C++ provides 
following specialized keywords for this purpose.
*/
class BadLengthException
{
    int n;

public:
    BadLengthException(int k) : n(k) {}
    int what()
    {
        return n;
    }
};

bool checkUsername(string username)
{
    bool isValid = true;
    int n = username.length();
    if (n < 5)
    {
        throw BadLengthException(n);
        /* throw: Used to throw an exception. Also used 
        to list the exceptions that a function throws, but
        doesn’t handle itself.*/
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (username[i] == 'w' && username[i + 1] == 'w')
        {
            isValid = false;
        }
    }
    return isValid;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        string username;
        cin >> username;
        try
        /* try: represents a block of code that 
        can throw an exception. */
        {
            bool isValid = checkUsername(username);
            if (isValid)
            {
                cout << "Valid" << '\n';
            }
            else
            {
                cout << "Invalid" << '\n';
            }
        }
        catch (BadLengthException e)
        /* catch: represents a block of code that is 
        executed when a particular exception is thrown. */
        {
            cout << "Too short: " << e.what() << '\n';
        }
    }
    return 0;
}