#include<iostream>
using namespace std;

// Recursive with -> o(n*n);

int fibonacii(int n){
    if(n<=1){
        return n;
    }
    return fibonacii(n-2) + fibonacii(n-1);
}

// Recursive with -> o(n);

int fibonaciiOptimize(int n){
    int arr[n+1];;
    for(int i =0; i<n; i++){
        arr[i] = -1;
    }
    if(n<=1){
        arr[n] = n;
        return n;
    }
    if(arr[n-2] == -1){
        arr[n-2] = fibonaciiOptimize(n-2);
    }
    if(arr[n-1] == -1){
        arr[n-1] = fibonaciiOptimize(n-1);
    }
    return arr[n-2] + arr[n-1];
}

// Itrative with -> o(n)

int fibonaciiItrative(int n){
    int t1 = 0, t2 = 1, r;
    for(int i=2; i<=n; i++){
        r = t1 + t2;
        t1 = t2;
        t2 = r;
    }
    return r;
}



int main(){
    cout << fibonaciiOptimize(8) << endl;
    cout << "fibonaciiOptimize : " << fibonaciiOptimize(8) << endl;
    return 0;
}
