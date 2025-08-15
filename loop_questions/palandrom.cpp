#include<iostream>
using namespace std;

int reverseOfNumber(int n){
    int rem ;
    int rev = 0;
    while(n!=0){
        rem = n % 10;
        n = n / 10;
        rev = rev * 10 + rem;
    }
    return rev;
}

int main(){
    int n = 101;
    int reversedNum = reverseOfNumber(n);
    if(n == reversedNum){
        cout << n << " is palandrom" << endl;
    }else{
        cout << n << " is not palandrom" << endl;
    }
    return 0;
}
