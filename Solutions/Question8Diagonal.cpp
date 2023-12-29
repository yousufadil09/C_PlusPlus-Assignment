#include <iostream>
#include <string>
using namespace std;

int main()
{
    
    int r1 = 0, c1 = 0, r2 = 0, c2 =0; // Initialize size of both matrix
    int a[10][10] , b[10][10], output_matrix[10][10]; // Initialize Matrix A & B & Output matrix
    int i , j , k =0; // Initialize loop variables
    bool diagonal = false;

    // Take input from users

    cout << "Enter number of Rows between 1 and 10 for Matrix A : ";
    cin >> r1;
    cout << "Enter number of Columns between 1 and 10 for Matrix A : ";
    cin >> c1;
    cout << "Enter number of Rows between 1 and 10 for Matrix B : ";
    cin >> r2;
    cout << "Enter number of between 1 and 10 Columns for Matrix B : ";
    cin >> c2;

    while (c1 != r2) // Check for Number of Columns for Matrix A is equal to Number of Rows for Matrix B
    {
    cout << "\nError! \nEntered number of Columns for Matrix A do not match with entered number of Rows for Matrix B\n";
    
    cout << "Enter number of Rows between 1 and 10 for Matrix A : ";
    cin >> r1;
    cout << "Enter number of between 1 and 10 Columns for Matrix A : ";
    cin >> c1;
    cout << "Enter number of between 1 and 10 Rows for Matrix B : ";
    cin >> r2;
    cout << "Enter number of between 1 and 10 Columns for Matrix B : ";
    cin >> c2;
    }
    
    // Create Matrix A after taking each element from the user sequentially

    cout << "\nEnter elements for Matrix A : \n";
    for (i = 0; i<r1; i++)
        for (j = 0; j<c1; j++)
        {
        cout << "Enter element a" << i+1 << j+1 << " " ;
        cin >> a[i][j];
        }
    
    // Create Matrix B after taking each element from the user sequentially

    cout << "\nEnter elements for Matrix B : \n";
    for (i = 0; i<r2; i++)
        for (j = 0; j<c2; j++)
        {
        cout << "Enter element b" << i+1 << j+1 << " " ;
        cin >> b[i][j];
        
        }
    
    // Create Multiplication output Matrix with initial values '0'

    for (i = 0; i<r1; i++)
        for (j = 0; j<c2; j++)
        {
            output_matrix[i][j] =0;
        }

    for (i = 0; i<r2; i++)
        for (j = 0; j<c2; j++)
        {
            if (i == j)
            {
                if ((a[i][j] == a[i+1][j+1]) && (b[i][j] == b[i+1][j+1]))
                    {
                        // Matrix Multiplication 
                        for (i = 0; i<r1; i++)
                        {    
                            for (j = 0; j<c2; j++)
                            {
                                for (k = 0; k < c1; k++)
                                {
                                    output_matrix[i][j] += a[i][k] * b[k][j];
            
                                }
                            }   
                        }
                    }
                else
                {
                    cout << "\nMatrix Diagonal elements are not same, Multiplication is not done";
                }
            }
            
        }

    // Matrix A Display
    cout << "\nMatrix A: \n";
    for (i = 0; i<r1; i++)
        for (j = 0; j<c2; j++)
        {
            cout <<" " <<a[i][j];
            if (j == c2-1)
            {
                cout << endl;
            }
        }
    // Matrix B Display
    cout << "\nMatrix B: \n";
    for (i = 0; i<r1; i++)
        for (j = 0; j<c2; j++)
        {
            cout <<" " <<b[i][j];
            if (j == c2-1)
            {
                cout << endl;
            }
        }
    // Output Matrix Display
    cout << "\nOutput Matrix : \n";
    for (i = 0; i<r1; i++)
        for (j = 0; j<c2; j++)
        {
            cout <<" " <<output_matrix[i][j];
            if (j == c2-1)
            {
                cout << endl;
            }
        }

return 0;
}
