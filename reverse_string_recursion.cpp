#include <iostream>
using namespace std;

string reverse(string s, string rs, int n)
{
    if (n == 0)
        return rs;
    rs += s[n - 1];
    return reverse(s, rs, n - 1);
}

int main()
{
    string str, reversed_str;
    cin >> str;
    cout << reverse(str, reversed_str, str.size()) << endl;
    return 0;
}
