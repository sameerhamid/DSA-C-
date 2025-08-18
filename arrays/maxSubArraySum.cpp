#include<iostream>
using namespace std;

int maxSubArraySumBruteforceAproach(int arr[], int size){
    int maxSum = INT_MIN;
    for(int st = 0; st < size; st ++){
        int currentSum = 0;
        for(int end = st; end < size; end++){
          currentSum += arr[end];
          maxSum = max(currentSum,maxSum);
        }
    }
    return maxSum;
}

int maxSubArraySumKadanesAlgo(int arr[], int size){
    int maxSum = INT_MIN;
    int subArrSum = 0;
    for(int i =0; i < size; i++){
        subArrSum += arr[i];
        maxSum = max(subArrSum,maxSum);
        if(subArrSum < 0){
            subArrSum = 0;
        }
    }
    return maxSum;
}

int main(){
    int arr[] = {-1,-5,-3,-5};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Brute force Sum = " << maxSubArraySumBruteforceAproach(arr,size) << endl;
    cout << "Kadane's Algorithm Sum = " <<  maxSubArraySumKadanesAlgo(arr,size) << endl;
    return 0;
}
