#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, n;
    cout << "Enter the number of rows and columns of the 1st martix: ";
    cin >> m >> n;
    int A[4][4], B[4][4], C[4][4], D[4][4];
    cout << "Enter the 9 elements of the 1st martix: ";
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            cin >> A[i][j];
        }
    }
    cout << "Enter the number of rows and columns of the 2nd martix: ";
    cin >> m >> n;
    cout << "Enter the 9 elements of the 2nd martix: ";
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            cin >> B[i][j];
        }
    }
    cout << "The 1st martix is: \n";
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    cout << "The 2nd martix is: \n";
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            cout << B[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    int temp;
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            temp = 0;
            for (int k = 1; k <= 3; k++)
            {
                temp += A[i][k] * B[k][j];
            }
            D[i][j] = temp;
        }
    }
    cout << "The addition of the two entered matrices is:\n";
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
    cout << "The multiplication of the two entered matrices is:\n";
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            cout << D[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}