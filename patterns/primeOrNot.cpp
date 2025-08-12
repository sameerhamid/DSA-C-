#include<iostream>
using namespace std;


void printTraingleOfStars(int rows, int cols){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cout << "* ";
        }
        cout<< endl;
    }
};

void printColsNumberTraingle(int rows, int cols){
     for(int i = 1; i <= rows; i++){
        for(int j = 1; j <= cols; j++){
            cout << i << " ";
        }
        cout<< endl;
    }
};

int main(){
    int rows, cols;
    cout << "Enter number of rows: " << endl;
    cin >> rows;
    cout << "Enter number of columns: " << endl;
    cin >> cols;

    printTraingleOfStars(rows,cols);

    cout <<  endl;
    cout << "-------------- " << endl;
    cout <<  endl;

    printColsNumberTraingle(rows,cols);
    return 1;
}
