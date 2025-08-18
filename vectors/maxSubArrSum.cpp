#include<iostream>
using namespace std;

int maxSubArraySumBruteforceAproach(vector<int>& vec){
    int maxSum = INT_MIN;
    int size = vec.size();
    for(int st = 0; st < size; st ++){
        int currentSum = 0;
        for(int end = st; end < size; end++){
          currentSum += vec[end];
          maxSum = max(currentSum,maxSum);
        }
    }
    return maxSum;
}

int maxSubArraySumKadanesAlgo(vector<int>& vec){
    int size = vec.size();
    int maxSum = INT_MIN;
    int subArrSum = 0;
    for(int i =0; i < size; i++){
        subArrSum += vec[i];
        maxSum = max(subArrSum,maxSum);
        if(subArrSum < 0){
            subArrSum = 0;
        }
    }
    return maxSum;
}

int main(){
    vector<int> vec = {-1,-5,-3,-5};
    cout << "Brute force Sum = " << maxSubArraySumBruteforceAproach(vec) << endl;
    cout << "Kadane's Algorithm Sum = " <<  maxSubArraySumKadanesAlgo(vec) << endl;
    return 0;
}
