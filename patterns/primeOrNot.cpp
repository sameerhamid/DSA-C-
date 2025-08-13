#include<iostream>
using namespace std;

// Function to print a rectangle pattern of stars
// Example for rows=3, cols=4:
// * * * *
// * * * *
// * * * *
void printRectangleOfStars(int rows, int cols){
    for(int i = 0; i < rows; i++){          // Loop through rows
        for(int j = 0; j < cols; j++){      // Loop through columns
            cout << "* ";                   // Print star
        }
        cout << endl;                       // Move to next line after each row
    }
};

// Function to print a rectangle where each row contains the row number
// Example for rows=3, cols=4:
// 1 1 1 1
// 2 2 2 2
// 3 3 3 3
void printRectangleOfRowNumbers(int rows, int cols){
     for(int i = 1; i <= rows; i++){        // Row number starts from 1
        for(int j = 1; j <= cols; j++){
            cout << i << " ";               // Print current row number
        }
        cout << endl;                       // Move to next line
    }
};

int main(){
    int rows, cols;

    // Input from user
    cout << "Enter number of rows: " << endl;
    cin >> rows;
    cout << "Enter number of columns: " << endl;
    cin >> cols;

    // Print rectangle of stars
    printRectangleOfStars(rows, cols);

    cout << endl;
    cout << "--------------" << endl;
    cout << endl;

    // Print rectangle of row numbers
    printRectangleOfRowNumbers(rows, cols);

    return 0;
}
