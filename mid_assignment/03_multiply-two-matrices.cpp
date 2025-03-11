#include <iostream>
using namespace std;

void multiplyMatrices(int A[3][3], int B[3][3], int result[3][3]) 
{
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            result[i][j] = 0;
            for (int k = 0; k < 3; k++) 
            {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

void displayMatrix(int matrix[3][3]) 
{
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
int main() 
{
    int A[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
    int B[3][3] = { {9, 8, 7}, {6, 5, 4}, {3, 2, 1} };
    int result[3][3];

    multiplyMatrices(A, B, result);
    cout << "Matrix Multiplication:\n";
    displayMatrix(result);
    cout<<"Name: Kaniz Fatema"<< endl<< "ID: 20245103154"<<endl;
    return 0;
}