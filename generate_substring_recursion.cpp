#include <iostream>
using namespace std;

void substring(string s, string ans)
{
    if (s.size() == 0)
    {
        cout << ans << endl;
        return;
    }
    char ch = s[0];
    string ros = s.substr(1);
    substring(ros, ans);
    substring(ros, ans + ch);
}

int main()
{
    string str;
    cin >> str;
    substring(str, "");
    return 0;
}
