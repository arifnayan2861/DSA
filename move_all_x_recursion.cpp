#include <iostream>
using namespace std;

string move_x(string s)
{
    if (s.size() == 0)
        return "";
    char ch = s[0];
    if (ch == 'x')
        return move_x(s.substr(1)) + ch;
    return ch + move_x(s.substr(1));
}

int main()
{
    string str;
    cin >> str;
    cout << move_x(str) << endl;
    return 0;
}
