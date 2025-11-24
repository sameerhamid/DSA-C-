#include<iostream>
#include<stdlib.h>
using namespace std;

struct Array
{
    int *A;
    int size;
    int length;
};


void Display(struct Array arr)
{
    cout << "Printing Elements of an array: "<< endl;
    for(int i=0; i<arr.length; i++){
        cout << arr.A[i] << " ";
    }
};

int main(){
    struct Array arr;
    int n;
    cout << "Enter size of array: " << endl;
    cin >> arr.size;
    arr.A = (int *)malloc(arr.size * sizeof(int));
    arr.length = 0;

    cout << "Enter number of elements to store " << endl;
    cin >> n;

    cout << "Enter elemets to store: ";
    for(int i=0; i<n; i++){
        cin >> arr.A[i];
    }
    arr.length = n;

    Display(arr);
    cout << endl;
    cout << "-------------------------" << endl;

    return 0;
}
