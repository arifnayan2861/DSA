#include <iostream>
using namespace std;

bool move(int **m, int n, int x, int y)
{
    if (m[x][y] != 0 && x < n && y < n)
    {
        return true;
    }
    return false;
}

bool rat_in_maze(int **m, int n, int x, int y, int **soln_array)
{

    if (x == n - 1 && y == n - 1)
    {
        soln_array[x][y] = 1;
        return true;
    }
    if (move(m, n, x, y))
    {
        soln_array[x][y] = 1;
        if (rat_in_maze(m, n, x + 1, y, soln_array))
            return true;
        if (rat_in_maze(m, n, x, y + 1, soln_array))
            return true;
        soln_array[x][y] = 0;
        return false;
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    int **maze = new int *[n];
    for (int i = 0; i < n; i++)
    {
        maze[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            cin >> maze[i][j];
        }
    }
    int **soln_array = new int *[n];
    for (int i = 0; i < n; i++)
    {
        soln_array[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            soln_array[i][j] = 0;
        }
    }
    if (rat_in_maze(maze, n, 0, 0, soln_array))
    {
        cout << endl;
        for (int i = 0; i < n; i++)
        {
            maze[i] = new int[n];
            for (int j = 0; j < n; j++)
            {
                cout << soln_array[i][j] << " ";
            }
            cout << endl;
        }
    }
    else
    {
        cout << "Not Possible" << endl;
    }
    return 0;

    delete[] maze;
    delete[] soln_array;
}

// 1 0 1 0 1
// 1 1 1 1 1
// 0 1 0 1 0
// 1 0 0 1 1
// 1 1 1 0 1