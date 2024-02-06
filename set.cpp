#include <bits/stdc++.h>
using namespace std;

void print(set<string> &s)
{
    // for (auto it = s.begin(); it != s.end(); it++)
    // {
    //     cout << *it << " ";
    // }
    for (string str : s)
    {
        cout << str << " ";
    }
    cout << endl;
}

int main()
{
    set<string> s;
    s.insert("def"); // log(n)
    s.insert("abc");
    s.insert("jkl");
    s.insert("abc");
    s.erase("jkl");
    print(s);
    auto it = s.find("abc"); // log(n)
    if (it == s.end())
        cout << "Not found" << endl;
    else
        cout << *it << endl;
    return 0;
}