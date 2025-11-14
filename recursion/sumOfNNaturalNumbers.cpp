#include<iostream>
using namespace std;

int sumOfNNaturalNumbers(int n){
    if(n==0){
        return 0;
    }

    return n + sumOfNNaturalNumbers(n-1);
}

int main(){
    cout << sumOfNNaturalNumbers(6) << endl;
    return 0;
}
