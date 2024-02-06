#include <iostream>
using namespace std;

bool isSafe(int **a, int n, int x, int y)
{
    for (int row = 0; row < x; row++)
    {
        if (a[row][y] == 1)
            return false;
    }
    int row = x;
    int col = y;
    while (row >= 0 && col >= 0)
    {
        if (a[row][col] == 1)
            return false;
        row--;
        col--;
    }
    row = x;
    col = y;
    while (row >= 0 && col < n)
    {
        if (a[row][col] == 1)
            return false;
        row--;
        col++;
    }
    return true;
}

bool nQueen(int **a, int n, int x)
{
    if (x >= n)
    {
        return true;
    }
    for (int col = 0; col < n; col++)
    {
        if (isSafe(a, n, x, col))
        {
            a[x][col] = 1;
            if (nQueen(a, n, x + 1))
                return true;
            a[x][col] = 0;
        }
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    int **board = new int *[n];
    for (int i = 0; i < n; i++)
    {
        board[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            board[i][j] = 0;
        }
    }
    if (nQueen(board, n, 0))
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << board[i][j] << " ";
            }
            cout << endl;
        }
    }
    else
    {
        cout << "Not Possible" << endl;
    }

    return 0;
}