#include <iostream>
using namespace std;

bool is_sorted(int a[], int n)
{
    if (n == 2 && a[0] < a[1])
        return true;
    if (a[n - 1] < a[n - 2])
        return false;
    return is_sorted(a, n - 1);
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << is_sorted(a, n) << endl;

    return 0;
}
