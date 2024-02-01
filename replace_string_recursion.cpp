#include <iostream>
using namespace std;

void replace(string s, string rs, string key)
{
    if (s.size() == 0)
        return;
}

int main()
{
    string str, replace_str, key;
    cin >> str >> replace_str >> key;
    cout << replace(str, replace_str, key) << endl;
    return 0;
}
