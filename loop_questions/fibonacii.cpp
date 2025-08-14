#include<iostream>
using namespace std;

int main(){
    int n = 10;
    int a = 0;
    int b = 1;
    int c = 0;
    cout << a << " ";
    for(int i = 0; i < n; i++){
        a = b;
        b = c;
        c = a + b;
        cout << c << " ";
    }
    return 0;
}
