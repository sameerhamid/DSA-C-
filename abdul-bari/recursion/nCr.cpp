#include<iostream>
using namespace std;

int factorial(int n){
    if(n==0){
        return 1;
    }
    return n * factorial(n-1);
}

int nCr(int n, int r){
    int nfact, rfact, nmrfact;
    nfact = factorial(n);
    rfact = factorial(r);
    nmrfact = factorial(n-r);
    return nfact /(rfact * nmrfact);
}

// pascalls traingle

int nCrUsingPascalsTraiangle(int n, int r){
    if(r == 0 || n == r){
        return 1;
    }

    return nCrUsingPascalsTraiangle(n-1, r-1) + nCrUsingPascalsTraiangle(n-1, r);
}

int main(){
    cout << "nCr = " << nCr(5, 3) << endl;
    cout << "nCrUsingPascalsTraiangle = " << nCr(5, 3) << endl;
    return 0;
}
