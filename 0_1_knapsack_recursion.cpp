#include <iostream>
using namespace std;

int knapsack(int weight[], int price[], int n, int W)
{
    if (n == 0 || W == 0)
        return 0;
    if (weight[n - 1] > W)
        return knapsack(weight, price, n - 1, W);
    return max(knapsack(weight, price, n - 1, W - weight[n - 1]) + price[n - 1], knapsack(weight, price, n - 1, W));
}

int main()
{
    int n, W;
    cin >> n;
    int weight[n], price[n];
    for (int i = 0; i < n; i++)
    {
        cin >> weight[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> price[i];
    }
    cin >> W;
    cout << knapsack(weight, price, n, W) << endl;
    return 0;
}

// 10 20 30
// 100 50 150
// 3
// 50