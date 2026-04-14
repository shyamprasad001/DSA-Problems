#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    void selectionSort(int arr[], int n) {
        int min_index;

        for (int i = 0; i <= n - 2; i++) {
            min_index = i;

            for (int j = i; j <= n - 1; j++) {
                if (arr[j] < arr[min_index]) {
                    min_index = j;
                }
            }

            int temp = arr[i];
            arr[i] = arr[min_index];
            arr[min_index] = temp;
        }
    }
};

/*
int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    solution sol;
    sol.selectionSort(arr, n);

    for (auto x : arr) {
        cout << x << " ";
    }

    return 0;
}
*/