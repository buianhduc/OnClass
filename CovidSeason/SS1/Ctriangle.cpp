#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
#define int long long
vector<int> arr;

signed main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
    int count = 0;
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n - 2; i++) {
        int k = i + 2;
        for (int j = i + 1; j < n; j++) {
            while (k < n and arr[i] + arr[j] > arr[k]) {
                k++;
            }
            if (k > j) {
                count += k - j - 1;
            }
        }
    }
    cout << count;
}