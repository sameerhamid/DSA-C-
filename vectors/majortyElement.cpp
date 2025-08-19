#include<iostream>
using namespace std;

int majortyElementBurteForce(vector<int>& vec){
    int size = vec.size();

    for(int val : vec){
        int freq = 0;
        for (int el : vec ){
            if(val == el){
                freq++;
            }
        }
        if(freq > size / 2){
            return val;
        }
    }
    return -1;
}

int majortyElementOptimized(vector<int>& vec){
    int size = vec.size();

    // sort
    sort(vec.begin(),vec.end());
    // frequency count
    int freq = 1, ans = vec[0];
    for(int i = 1; i < size; i++){
        if(vec[i] == vec[i-1]){
            freq++;
        }else{
            freq = 1;
            ans = vec[i];
        }
        if(freq > size/2){
            return ans;
        }
    }
    return -1;
}

int majortyElementMooresVotingAlgo(vector<int>& vec){
    int size = vec.size();
    int freq = 0, ans = 0;
    for(int i = 0; i < size; i++){
        if(freq == 0){
            ans = vec[i];
        }
        if(ans == vec[i]){
            freq++;
        }else{
            freq--;
        }
    }
    int count = 0;
    for(int val : vec){
        if(val == ans){
            count++;
        }
    }
    if(count > size/2) return ans;
    return -1;
}

int main(){
    vector<int> vec = {1,2,2,2,2,2,2,2,3,4,1,1,1};
    cout << "Majority Element  = " <<  majortyElementBurteForce(vec) << endl;
    cout << "Majority Element Using Sort = " <<  majortyElementOptimized(vec) << endl;
    cout << "Majority Element Using Sort = " <<  majortyElementMooresVotingAlgo(vec) << endl;

    return 0;
}
