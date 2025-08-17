#include<iostream>
using namespace std;

int main(){
    int arr[] = {5,4,2,7,8,1,9,};
    int minNum = INT_MAX;
    int maxNum = INT_MIN;
    int size =  sizeof(arr) / sizeof(arr[0]);

    for(int i = 0; i < size; i++){
        minNum = min(arr[i],minNum);
        maxNum = max(arr[i],maxNum);
    }

    cout << "MINIMUM = "<< minNum << endl;
    cout << "MAXIMUM = "<< maxNum << endl;

    return 0;
}
