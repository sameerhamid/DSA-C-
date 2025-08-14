#include<iostream>
using namespace std;

int main(){
    int n = 10;
    int a = 0;
    int b = 1;
    cout << a << " ";
    cout << b << " ";
    for(int i = 0; i < n; i++){
        int c = a + b;
        a = b;
        b = c;
        cout << c << " ";
    }
    return 0;
}
