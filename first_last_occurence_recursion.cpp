#include <iostream>
using namespace std;

int first(int a[], int n, int i, int t)
{
    if (i == n)
        return -1;
    if (a[i] == t)
        return i;
    return first(a, n, i + 1, t);
}

int last(int a[], int n, int t)
{
    if (t == a[n - 1])
        return n - 1;
    if (n == 0)
        return -1;
    return last(a, n - 1, t);
}

int main()
{
    int n, target, index = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> target;
    cout << first(a, n, index, target) << endl;
    cout << last(a, n, target) << endl;

    return 0;
}
