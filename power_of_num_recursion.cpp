#include <bits/stdc++.h>
using namespace std;

int power_of(int n, int p)
{
    if (p == 0)
        return 1;
    return n * power_of(n, p - 1);
}

int main()
{
    int num, power;
    cin >> num >> power;
    cout << power_of(num, power) << endl;
}