#include<iostream>
using namespace std;

int linearSerach(int arr[], int size, int searchEl){
    for(int i = 0; i < size; i++){
        if(arr[i] == searchEl){
          return i;
        }
    }
    return -1;
}

int main(){
    int arr[] ={1,2,4,6,7,2,3,7,9};
    int n = 2;
    int size = sizeof(arr) / sizeof(arr[0]);
    int searchElIndex = linearSerach(arr, size, n);
    if(searchElIndex == -1){
        cout << n <<" Not found!" << endl;
    }else{
        cout << n << " Found at index " << searchElIndex << endl;
    }


    return 0;
}
