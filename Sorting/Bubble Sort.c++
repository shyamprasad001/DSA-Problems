#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    void bubbleSort(vector<int>& arr, int n) {
        for (int i = 0; i <= n - 2; i++) {
            bool swapped = false;
            for (int j = 0; j <= n - 2 - i; j++) {
                if (arr[j] > arr[j + 1]) {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                    swapped = true;
                }
            }
            if (!swapped) break;
        }
    }
};
/*
int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    solution sol;
    sol.bubbleSort(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << (i + 1 < n ? " " : "");
    }
    return 0;
}
*/