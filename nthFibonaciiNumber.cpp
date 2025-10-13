#include <iostream>
using namespace std;

// TODO: Implement this method
int nthFibonacciNumber(int n){
      if(n==0){
            return 0;
      }
      if(n ==1 ){
            return 1;
      }
      int a = 1;
      int b = 1;
      for(int i=2; i< n; i++){
        int c = a+b;
        a = b;
        b = c;
      }

      return b;
}

// NOTE: Please do not modify this function
int main(){
    int n;
    cin >> n;
    int result = nthFibonacciNumber(n);
    cout<<result;
}
