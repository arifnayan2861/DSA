#include<iostream>
using namespace std;

const int N = 1e5;
int a[N];

void merge(int left, int right, int mid) {
    int left_size = (mid - left) + 1;
    int right_size = right - mid;
    int L[left_size + 1];
    int R[right_size + 1];

    for(int i = 0; i < left_size; i++) {
        L[i] = a[i + left];
    }
    for(int i = 0; i < right_size; i++) {
        R[i] = a[mid + 1 + i];
    }

    L[left_size] = R[right_size] = INT_MAX;

    int left_index = 0;
    int right_index = 0;
    while(left <= right) {
        if(L[left_index] < R[right_index]) {
            a[left] = L[left_index];
            left_index++;
        }
        else {
            a[left] = R[right_index];
            right_index++;
        }
        left++;
    }
}

void merge_sort(int left, int right) {
    if(left == right) return;
    int mid = (left + right) / 2;
    merge_sort(left, mid);
    merge_sort(mid + 1, right);
    merge(left, right, mid);
}

void print_array(int n) {
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}

int main() {
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    merge_sort(0, n - 1);

    print_array(n);
    return 0;
}
