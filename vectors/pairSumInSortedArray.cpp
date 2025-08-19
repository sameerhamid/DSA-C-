#include<iostream>
#include<vector>
using namespace std;

vector<int> pairSumBruteForceAproach(vector<int>& nums,int n){
    vector<int> ans;
    for(int i = 0; i < nums.size(); i++){
        for(int j = i+1; j < nums.size(); j++){
            if((nums[i]+nums[j]) == n){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return ans;
}

vector<int> pairSumOptimizedAproach(vector<int>& nums,int target){
    vector<int> ans;
    int size = nums.size();
    int start = 0;
    int end = size - 1;
    while (start < end){
        int pairSum = nums[start]+nums[end];
        if(pairSum < target){
            start++;
        }else if(pairSum > target){
            end--;
        }else if(pairSum == target){
            ans.push_back(nums[start]);
            ans.push_back(nums[end]);
            return ans;
        }
    }
    return ans;
}

int main(){
    vector<int> vec ={1,2,1,2,3,4,3,4,5};
    int n = 9;
    vector<int> sum = pairSumBruteForceAproach(vec,n);
    cout << "Ans = " << vec[sum[0]] << " and " << vec[sum[1]] << endl;
    vector<int> sum2 = pairSumOptimizedAproach(vec,n);
    cout << "Ans = " << sum2[0] << " and " << sum2[1] << endl;
    return 0;
}
