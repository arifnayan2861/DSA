#include <iostream>
using namespace std;

int tile(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return tile(n - 1) + tile(n - 2);
}

int main()
{
    int n;
    cin >> n;
    cout << tile(n) << endl;
    return 0;
}
