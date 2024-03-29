#include <iostream>
using namespace std;

void permutation(string s, string ans)
{
    if (s.size() == 0)
    {
        cout << ans << endl;
        return;
    }
    for (int i = 0; i < s.size(); i++)
    {
        char ch = s[i];
        string ros = s.substr(0, i) + s.substr(i + 1);
        permutation(ros, ans + ch);
    }
}

int main()
{
    string str;
    cin >> str;
    permutation(str, "");
    return 0;
}
