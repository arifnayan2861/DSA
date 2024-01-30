#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> v = {1, 2, 3, 4, 5};
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    for(auto it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
    auto it = v.begin();
    while(it != v.end()) {
        cout << *it << " ";
        it++;
    }
    cout << endl;
    for(auto &num : v) {
        cout << num << " ";
    }
    cout << endl;
    /*vector<pair<int, string>> v = {{1, "Arif"}, {2, "Mahmood"}, {3, "Sarker"}, {4, "Nayan"}};
    vector<pair<int, string>> ::iterator it;
    for(it = v.begin(); it != v.end(); it++) {
        //cout << (*it).first << " " << (*it).second << endl;
        cout << (it->first) << " " << (it->second) << endl;
    }*/
    return 0;
}
