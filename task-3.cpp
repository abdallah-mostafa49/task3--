#include <iostream>
using namespace std;
int main()
{
        const int rows = 3, columns = 4; // Define matrix dimensions (3x4)
        int matrix[rows][columns], transpose[columns][rows]; // Declare the matrix and its transpose

        // Input elements of the matrix from the user
        cout << "Enter the elements of the matrix:" << endl;
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < columns; j++)
                cin >> matrix[i][j];

        // Print the original matrix
        cout << "\nOriginal Matrix:" << endl;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < columns; j++)
                cout << matrix[i][j] << " "; 
            cout << endl; 
        }

        // Compute the transpose of the matrix
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < columns; j++)
                transpose[j][i] = matrix[i][j];

        // Print the transposed matrix
        cout << "\nTransposed Matrix:" << endl;
        for (int i = 0; i < columns; i++) {
            for (int j = 0; j < rows; j++)
                cout << transpose[i][j] << " "; 
            cout << endl; 
        }

        return 0; 
    }
