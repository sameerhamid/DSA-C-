#include <iostream>
using namespace std;

int main()
{
    int n = 13333;

    while (n>9){
        int sum =0;
        int rem = 0;
        while (n != 0){
        rem = n% 10;
        n = n / 10;
        sum = sum + rem;
        }
        n = sum;
    }

    cout << n << endl;


    return 0;
}
