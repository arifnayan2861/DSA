#include<bits/stdc++.h>
using namespace std;

void print(map<int, string> &m) {
    cout << m.size() << endl;
    for(auto &x : m) {
        cout << x.first << " " << x.second << endl;
    }
    cout << endl;
}

int main() {
    map<int, string> m;
    m[1] = "abc";
    m[5] = "cdc";
    m.insert({3, "acd"});
    m.insert({4, "afg"});
    print(m);
    auto it = m.find(3);
    if(it == m.end()) {
        cout << "NO VALUE" << endl;
    }
    else {
        cout << (it->first) << " " << (it->second) << endl;
    }
    return 0;
}
