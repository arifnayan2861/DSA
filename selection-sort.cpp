#include<iostream>
using namespace std;

void selection_sort(int a[], int n) {
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(a[j] < a[i]) {
                swap(a[j], a[i]);
            }
        }
    }
}

void print_array(int a[], int n) {
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}

int main() {
    int n;
    cin >> n;

    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    selection_sort(a, n);

    print_array(a, n);
    return 0;
}
