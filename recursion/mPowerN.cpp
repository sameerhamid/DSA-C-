#include<iostream>
using namespace std;

int power(int m , int n){
    if(n==0){
        return 1;
    }

    return m * power(m , n-1);
}

int powerOptimized(int m , int n){
    if(n==0){
        return 1;
    }else if(n%2 ==0){
        return pow(m*m, n/2);
    }else{
        return m * powerOptimized(m*m , (n-1)/2);
    }
}

int main(){
    cout << powerOptimized(2, 9) << endl;
    return 0;
}
