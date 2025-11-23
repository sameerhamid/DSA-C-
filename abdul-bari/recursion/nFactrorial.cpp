#include<iostream>
using namespace std;

int factorailOfN(int n){
    if(n==0){
        return 1;
    }

    return n * factorailOfN(n-1);
}

int main(){
    cout << factorailOfN(6) << endl;
    return 0;
}
