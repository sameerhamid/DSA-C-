#include<iostream>
using namespace std;

int factroial(int n){
    if(n==0 || n==1){
        return 1;
    }
    return n * factroial(n-1);
}

int main(){
    int n ;
    cout << "Enter the number to find factorial: " << endl;
    cin >> n;
    cout << "Facatroal of "<< n << " is: " << factroial(n) << endl;
    return 0;
}
