#include<iostream>
#include<vector>
using namespace std;

void reverse(vector<int>& nums){
    int size = nums.size();
    int start = 0;
    int end = size - 1;
    while(start < end){
        swap(nums.at(start),nums.at(end));
        start++;
        end--;
    }
}

int main(){
    vector<int> vec ={1,2,1,2,3,4,3,4,5};
    reverse(vec);
    for(int val : vec){
        cout << val << endl;
    }
    return 0;
}
