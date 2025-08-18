#include<iostream>
#include<vector>
using namespace std;

int singleNumber(vector<int>& nums){
    int ans = 0;
    for(int val : nums){
        ans = ans ^ val;
    }
    return ans;
}

/* given an non empty array of integers,
   every element appears twice accectp for one. Find the single one
*/
int main(){
    vector<int> vec ={1,2,1,2,3,4,3,4,5};
    cout << singleNumber(vec) << endl;
    return 0;
}
