#include <iostream>
using namespace std;

// 1. Rectangle filled with stars
void printStarRectangle(int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

// 2. Rectangle with same row number in each row
void printRowNumberRectangle(int rows, int cols) {
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= cols; j++) {
            cout << i << " ";
        }
        cout << endl;
    }
}

// 3. Rectangle with column numbers in each row
void printColumnNumberRectangle(int rows, int cols) {
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= cols; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}

// 4. Right triangle of stars
void printStarTriangle(int rows) {
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

// 5. Right triangle with same row number
void printRowNumberTriangle(int rows) {
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            cout << i << " ";
        }
        cout << endl;
    }
}

// 6. Right triangle with continuous increasing numbers
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
void printReverseNumberTriangle(int rows) {
    for (int i = 1; i <= rows; i++) {
        for (int j = i; j >= 1; j--) {
            cout << j << " ";
        }
        cout << endl;
    }
}

// 8. Rectangle with repeated letters in each row
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
