#include <iostream>
using namespace std;

// 1. Rectangle filled with stars
// Example (rows=3, cols=4):
// * * * *
// * * * *
// * * * *
void printStarRectangle(int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

// 2. Rectangle with same row number in each row
// Example (rows=3, cols=4):
// 1 1 1 1
// 2 2 2 2
// 3 3 3 3
void printRowNumberRectangle(int rows, int cols) {
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= cols; j++) {
            cout << i << " ";
        }
        cout << endl;
    }
}

// 3. Rectangle with column numbers in each row
// Example (rows=3, cols=4):
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4
void printColumnNumberRectangle(int rows, int cols) {
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= cols; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}

// 4. Right triangle of stars
// Example (rows=4):
// *
// * *
// * * *
// * * * *
void printStarTriangle(int rows) {
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

// 5. Right triangle with same row number
// Example (rows=4):
// 1
// 2 2
// 3 3 3
// 4 4 4 4
void printRowNumberTriangle(int rows) {
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            cout << i << " ";
        }
        cout << endl;
    }
}

// 6. Right triangle with continuous increasing numbers
// Example (rows=4):
// 1
// 2 3
// 4 5 6
// 7 8 9 10
void printContinuousNumberTriangle(int rows) {
    int num = 1;
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            cout << num++ << " ";
        }
        cout << endl;
    }
}

// 7. Right triangle with reverse counting in each row
// Example (rows=4):
// 1
// 2 1
// 3 2 1
// 4 3 2 1
void printReverseNumberTriangle(int rows) {
    for (int i = 1; i <= rows; i++) {
        for (int j = i; j >= 1; j--) {
            cout << j << " ";
        }
        cout << endl;
    }
}

// 8. Rectangle with repeated letters in each row
// Example (rows=3, cols=4):
// A A A A
// B B B B
// C C C C
void printRepeatedLetterRectangle(int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        char ch = 'A' + i;
        for (int j = 0; j < cols; j++) {
            cout << ch << " ";
        }
        cout << endl;
    }
}

// 9. Rectangle with ABCD repeated in each row
// Example (rows=3, cols=4):
// A B C D
// A B C D
// A B C D
void printABCPerRowRectangle(int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            char ch = 'A' + j;
            cout << ch << " ";
        }
        cout << endl;
    }
}

// 10. Rectangle with letters shifted per row
// Example (rows=3, cols=4):
// A B C D
// B C D E
// C D E F
void printShiftedLetterRectangle(int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            char ch = 'A' + i + j;
            cout << ch << " ";
        }
        cout << endl;
    }
}

// 11. Right triangle with repeated letters per row
// Example (rows=4):
// A
// B B
// C C C
// D D D D
void printRepeatedLetterTriangle(int rows) {
    for (int i = 0; i < rows; i++) {
        char ch = 'A' + i;
        for (int j = 0; j <= i; j++) {
            cout << ch << " ";
        }
        cout << endl;
    }
}

// 12. Right triangle with consecutive letters per row
// Example (rows=4):
// A
// B C
// C D E
// D E F G
void printConsecutiveLetterTriangle(int rows) {
    for (int i = 0; i < rows; i++) {
        char ch = 'A' + i;
        for (int j = 0; j <= i; j++) {
            cout << char(ch + j) << " ";
        }
        cout << endl;
    }
}

// 13. Right triangle with reverse letters in each row
// Example (rows=4):
// A
// B A
// C B A
// D C B A
void printReverseLetterTriangle(int rows) {
    for (int i = 0; i < rows; i++) {
        char ch = 'A' + i;
        for (int j = 0; j <= i; j++) {
            cout << char(ch - j) << " ";
        }
        cout << endl;
    }
}




int main() {
    int rows, cols;

    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    printStarRectangle(rows, cols);
    cout << "--------------\n";
    printRowNumberRectangle(rows, cols);
    cout << "--------------\n";
    printColumnNumberRectangle(rows, cols);
    cout << "--------------\n";
    printStarTriangle(rows);
    cout << "--------------\n";
    printRowNumberTriangle(rows);
    cout << "--------------\n";
    printContinuousNumberTriangle(rows);
    cout << "--------------\n";
    printReverseNumberTriangle(rows);
    cout << "--------------\n";
    printRepeatedLetterRectangle(rows, cols);
    cout << "--------------\n";
    printABCPerRowRectangle(rows, cols);
    cout << "--------------\n";
    printShiftedLetterRectangle(rows, cols);
    cout << "--------------\n";
    printRepeatedLetterTriangle(rows);
    cout << "--------------\n";
    printConsecutiveLetterTriangle(rows);
    cout << "--------------\n";
    printReverseLetterTriangle(rows);

    return 0;
}
