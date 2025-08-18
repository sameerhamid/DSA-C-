#include<iostream>
using namespace std;

int main(){
    int size = 7;
    int arr[] = {1,2,3,4,6,7,8};
    int start = 0;
    int end = size-1;

    while(start < end){
        swap(arr[start],arr[end]);
        // int temp = arr[start];
        // arr[start] = arr[end];
        // arr[end] = temp;
        start++;
        end--;
    }

    for(int i = 0; i < size; i++){
        cout << arr[i] << endl;
    }


    return 0;
}
