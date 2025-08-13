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

// Function to print a rectangle where each row contains the column number
// Example for rows=3, cols=4:
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4
void printRectangleOfColsNumbers(int rows, int cols){
     for(int i = 1; i <= rows; i++){        // Row number starts from 1
        for(int j = 1; j <= cols; j++){
            cout << j << " ";               // Print current column number
        }
        cout << endl;                       // Move to next line
    }
};

// Function to print a triangle pattern of stars
// Example for rows=4,
// *
// * *
// * * *
// * * *  *
void printTriangleOfStarts(int rows){
     for(int i = 1; i <= rows; i++){        // Row number starts from 1
        for(int j = 1; j <= i; j++){
            cout << "* " << " ";            // Print start
        }
        cout << endl;                       // Move to next line
    }
};


// Function to print a triangle pattern of rows
// Example for rows=4,
// 1
// 2 2
// 3 3 3
// 4 4 4 4
void printTriangleOfNumbers(int rows){
     for(int i = 1; i <= rows; i++){        // Row number starts from 1
        for(int j = 1; j <= i; j++){
            cout << i+1 << " ";            // Print row
        }
        cout << endl;                       // Move to next line
    }
};

// Function to print a triangle pattern of non repeat numbers
// Example for rows=4,
// 1
// 2 3
// 4 5 6
// 7 8 9 10
void printTriangleOfNonRepeatNumbers(int rows){
     for(int i = 1; i <= rows; i++){        // Row number starts from 1
        for(int j = 0; j < i; j++){
            cout << i+j << " ";            // Print
        }
        cout << endl;                       // Move to next line
    }
};


// Function to print a triangle pattern of  revers numbers
// Example for rows=4,
// 1
// 2 1
// 3 2 1
// 4 3 2 1
void printTriangleOfReverseNumbers(int rows){
     for(int i = 1; i <= rows; i++){        // Row number starts from 1
        for(int j = 0; j < i; j++){
            cout << i-j << " ";            // Print
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

    cout << endl;
    cout << "--------------" << endl;
    cout << endl;

    printRectangleOfColsNumbers(rows, cols);

    cout << endl;
    cout << "--------------" << endl;
    cout << endl;

    printTriangleOfStarts(rows);

    cout << endl;
    cout << "--------------" << endl;
    cout << endl;

    printTriangleOfNumbers(rows);

    cout << endl;
    cout << "--------------" << endl;
    cout << endl;

    printTriangleOfNonRepeatNumbers(rows);

    cout << endl;
    cout << "--------------" << endl;
    cout << endl;

    printTriangleOfReverseNumbers(rows);
    return 0;
}
