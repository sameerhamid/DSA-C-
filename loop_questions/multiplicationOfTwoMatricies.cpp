#include <iostream>
using namespace std;

int main() {
    const int size = 3;
    int A[size][size] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int B[size][size] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int rowOfA;
    int colsOfA;
    int rowOfB;
    int colsOfB;

    cout << "Enter no of rows of A" << endl;
    cin >> rowOfA;
    cout << "Enter no of cols of A" << endl;
    cin >> colsOfA;
    cout << "Enter no of rows of B" << endl;
    cin >> rowOfB;
    cout << "Enter no of cols of B" << endl;
    cin >> colsOfB;

    const int size = 3;
    int A[size][size] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int B[size][size] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    if(colsOfA != rowOfB){
        cout << "Not Possible" << endl;
        return;
    }

    int C[size][size] = {0};

    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            for(int k = 0; k < size; k++){
                C[i][j] += A[i][j] * B[k][j];
            }
        }
    }

    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
