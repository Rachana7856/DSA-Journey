#include <iostream>
using namespace std;

int main()
{

    int a = 2000;

    if (a % 4 == 0)
    {
        if (a % 100 == 0)
        {
            if (a % 400 == 0)
            {
                cout << "Its a leap year." << endl;
            }
            else
            {
                cout << "Not a leap year." << endl;
            }
        }
        else
        {
            cout << "its a leap year" << endl;
        }
    }
    else
    {
        cout << "not a leap year." << endl;
    }

    return 0;
}