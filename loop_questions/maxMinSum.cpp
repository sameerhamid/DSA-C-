// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;

void miniMaxSum(vector<int> arr) {
    int min = 100000;
    int max = -1;
    int minSum = 0;
    int maxSum = 0;

    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr.size()-i-1;j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                // int temp = arr[j];
                // arr[j]= arr[j+1];
                // arr[j+1] = temp;
            }
        }
    }
    for(int i=0; i<4; i++){
        maxSum+= arr[arr.size()-i-1];
        minSum += arr[i];
    }
    cout << "Min Sum = " << minSum << " Max Sum = " << maxSum << endl;
}


int main() {
    vector<int> arr = {1,3,5,7,9};
    vector<int> arr1 = {9, 7, 5, 3, 1};
    miniMaxSum(arr1);

    return 0;
}
