#include <iostream>
using namespace std;

// Function to print the star plus pattern
void printStarPlusPattern(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == n / 2 || j == n / 2) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

// Function to print the star cross pattern
void printStarCrossPattern(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j || i + j == n - 1) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

// Function to print the Floyd triangle pattern
void printFloydTriangle(int n) {
    int num = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
}

// Function to print the binary triangle pattern
void printBinaryTriangle(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << (i + j) % 2 << " ";
        }
        cout << endl;
    }
}

// Function to print the number triangle flipped
void printNumberTriangleFlipped(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i + 1; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}

// Function to print the square number pattern
void printSquareNumberPattern(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << i << " ";
        }
        cout << endl;
    }
}

// Function to print the alphabet triangle pattern
void printAlphabetTriangle(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << char('A' + j - 1) << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;

    // Example usage for each function
    cout << "Star Plus Pattern (n=5):" << endl;
    printStarPlusPattern(5);
    cout << endl;

    cout << "Star Cross Pattern (n=5):" << endl;
    printStarCrossPattern(5);
    cout << endl;

    cout << "Floyd Triangle Pattern (n=4):" << endl;
    printFloydTriangle(4);
    cout << endl;

    cout << "Binary Triangle Pattern (n=4):" << endl;
    printBinaryTriangle(4);
    cout << endl;

    cout << "Number Triangle Flipped (n=4):" << endl;
    printNumberTriangleFlipped(4);
    cout << endl;

    cout << "Square Number Pattern (n=4):" << endl;
    printSquareNumberPattern(4);
    cout << endl;

    cout << "Alphabet Triangle Pattern (n=4):" << endl;
    printAlphabetTriangle(4);
    cout << endl;

    return 0;
}