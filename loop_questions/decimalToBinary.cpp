#include<iostream>
using namespace std;

int main(){
    int decNum;
    cout << "Enter the decimal number: "<< endl;
    cin>> decNum;
    int ans = 0;
    int pow = 1;

    while (decNum>0)
    {
        int rem = decNum % 2;
        decNum /= 2;
        ans += (rem * pow);
        pow *= 10;
    }

    cout << "Binary = " << ans <<endl;


    return 0;
}
