#include <iostream>
using namespace std;

int maze(int n, int i, int j)
{
    if (i == n - 1 && j == n - 1)
        return 1;
    if (i >= n || j >= n)
        return 0;
    return maze(n, i + 1, j) + maze(n, i, j + 1);
}

int main()
{
    int n, i, j;
    cin >> n >> i >> j;
    cout << maze(n, i, j) << endl;
    return 0;
}
