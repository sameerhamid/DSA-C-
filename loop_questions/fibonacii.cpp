#include<iostream>
using namespace std;

int fibonacii(int n){
    if(n == 0 || n == 1){
        return n;
    }
    return fibonacii(n-1) + fibonacii(n-2);
}

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
        cout << c << " " << endl;
    }

    return 0;
}
