#include <iostream>
using namespace std;

int main()
{
    int n = 2004;
    if (n % 400 == 0)
    {
        cout << "Leap year" << endl;
    }
    else if (n % 100 != 0 && n % 4 == 0)
    {
        cout << "Leap year" << endl;
    }
    else
    {
        cout << "Not a leap year" << endl;
    }

    return 0;
}
