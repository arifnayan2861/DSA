#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> ans;

void permute(vector<int> &a, int n, int idx)
{
    if (idx == n)
    {
        ans.push_back(a);
        return;
    }
    for (int i = 0; i < n; i++)
    {
        /* code */
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    permute(a, n, 0);
    for (auto &i : ans)
    {
        for (auto &j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}

// 1 0 1 0 1
// 1 1 1 1 1
// 0 1 0 1 0
// 1 0 0 1 1
// 1 1 1 0 1