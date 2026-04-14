#include<bits/stdc++.h>
using namespace std;

class solution {
public:
    void rearrangeArray(vector<int>& arr, int k) {
        for (int i = 0; i < k; i++) {
            int minIdx = i;
            for (int j = i; j < arr.size(); j++) {
                if (arr[minIdx] > arr[j]) {
                    minIdx = j;
                }
            }
            swap(arr[i], arr[minIdx]);
        }
    }
};

/*
int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int k;
    cin >> k;
    solution sol;
    sol.rearrangeArray(arr, k);

    for (int val : arr) {
        cout << val << " ";
    }
    return 0;
}
*/