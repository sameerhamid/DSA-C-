#include<iostream>
using namespace std;

bool powerOfTwo(int n){
    if(n < 1){
        return false;
    }

    while(n != 1){
        if(n % 2 == 1){
            return 0;
        }
        n = n / 2;
    }

    return 1;
}

int main(){
    int n = 6;
    if(powerOfTwo(n)){
        cout << n << " is power of 2" << endl;
    }else{
        cout << n << " is not power of 2" << endl;
    }

    return 0;
}
