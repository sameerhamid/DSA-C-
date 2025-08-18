#include<iostream>
using namespace std;

int main(){
    int size = 7;
    int arr[] = {1,2,3,4,6,7,8};
    int sum = 0;
    int product = 1;
    for(int i = 0; i < size; i ++){
        sum += arr[i];
        product *= arr[i];
    }
    cout << "SUM = " << sum << endl;
    cout << "PRODUCT = " << product << endl;
    return 0;
}
