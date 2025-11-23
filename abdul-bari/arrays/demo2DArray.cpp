#include<iostream>
using namespace std;

int main(){
    // created in stack
    int A[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 2, 4, 6}};

    cout << "---------------- A --------------------" << endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    // rows will be created in stack
    int *B[3];
    // create an array in heap and assign it
    // in c
    // B[0] =(int *) malloc(4 * sizeof(int))
    B[0] = new int[4];
    B[1] = new int[4];
    B[2] = new int[4];

    cout << "---------------- B --------------------" << endl;

    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout << B[i][j] << " ";
        }
        cout << endl;
    }

    // --------------- in c --------------------

    int **C;
    // C = (int **)malloc(3 * sizeof(int *));
    // C[0] = (int *) malloc(4 * sizeof(int));
    // C[1] = (int *) malloc(4 * sizeof(int));
    // C[2] = (int *) malloc(4 * sizeof(int));

    // ----------------------- in cpp. ---------------------
    // allocate array of 3 int* pointers
    // rows are created in heap
    C = new int *[3];

    // and three array are created inside the heap
    C[0] = new int[4];
    C[1] = new int[4];
    C[2] = new int[4];

    cout << "---------------- C --------------------" << endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
