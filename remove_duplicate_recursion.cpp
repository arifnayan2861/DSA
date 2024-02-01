#include <iostream>
using namespace std;

string remove_duplicate(string s)
{
    if (s.size() == 0)
        return "";
    char ch = s[0];
    string ans = remove_duplicate(s.substr(1));
    if (ch == ans[0])
        return ans;
    return ch + ans;
}

int main()
{
    string str;
    cin >> str;
    cout << remove_duplicate(str) << endl;
    return 0;
}
