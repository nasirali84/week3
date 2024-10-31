#include <iostream>
using namespace std;

// Function to print solid rectangle pattern
void printSolidRectangle(int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

// Function to print solid square pattern
void printSolidSquare(int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

// Function to print number square pattern
void printNumberSquare(int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 1; j <= size; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}

// Function to print star triangle pattern
void printStarTriangle(int height) {
    for (int i = 1; i <= height; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

// Function to print reverse star triangle pattern
void printReverseStarTriangle(int height) {
    for (int i = height; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

// Function to print number triangle pattern
void printNumberTriangle(int height) {
    for (int i = 1; i <= height; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}

// Function to print odd number triangle pattern
void printOddNumberTriangle(int height) {
    int num = 1;
    for (int i = 1; i <= height; i++) {
        for (int j = 1; j <= i; j++) {
            cout << num << " ";
            num += 2; // Increment by 2 to get the next odd number
        }
        cout << endl;
        num = 1; // Reset num for the next row
    }
}

// Function to print alphabet square pattern
void printAlphabetSquare(int size) {
    for (int i = 0; i < size; i++) {
        for (char j = 'A'; j < 'A' + size; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}

int main() {
    cout << "Solid Rectangle Pattern:" << endl;
    printSolidRectangle(3, 5);
    
    cout << "\nSolid Square Pattern:" << endl;
    printSolidSquare(4);
    
    cout << "\nNumber Square Pattern:" << endl;
    printNumberSquare(4);
    
    cout << "\nStar Triangle Pattern:" << endl;
    printStarTriangle(4);
    
    cout << "\nReverse Star Triangle Pattern:" << endl;
    printReverseStarTriangle(4);
    
    cout << "\nNumber Triangle Pattern:" << endl;
    printNumberTriangle(4);
    
    cout << "\nOdd Number Triangle Pattern:" << endl;
    printOddNumberTriangle(4);
    
    cout << "\nAlphabet Square Pattern:" << endl;
    printAlphabetSquare(4);
    
    return 0;
}