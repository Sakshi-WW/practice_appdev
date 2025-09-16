#include <iostream>
using namespace std;

int main() {
    // Declare a 6x4 matrix
    int matrix[6][4];

    // Initialize the matrix (optional)
    for(int i = 0; i < 6; i++) {
        for(int j = 0; j < 4; j++) {
            matrix[i][j] = 0;  // You can change this to any value you need
        }
    }

    // Display the matrix
    for(int i = 0; i < 6; i++) {
        for(int j = 0; j < 4; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
