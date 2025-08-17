#include<iostream>
using namespace std;

int main(){
    int a = 6, b= 10;
    // bitwise AND
    cout << (a & b) <<endl;

    // bitwise OR
    cout << (a | b) << endl;

    // bitwis XOR
    cout << (a ^ b) << endl;

    // bitwise left shift
    cout << (10 << 2) << endl;

    // bitwise right shift
    cout << (10 >> 2) << endl;
    return 0;
}
