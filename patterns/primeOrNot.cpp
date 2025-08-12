#include<iostream>
using namespace std;


void printTraingleOfStars (){
    int rows, cols;
    cout << "Enter number of rows: " << endl;
    cin >> rows;
    cout << "Enter number of columns: " << endl;
    cin >> cols;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cout << "* ";
        }
        cout<< endl;
    }
}

int main(){
    printTraingleOfStars();
    return 1;
}
