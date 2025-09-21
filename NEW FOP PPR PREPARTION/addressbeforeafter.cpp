#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <chrono>

using namespace std;
using namespace std::chrono;

void quicksort(vector<int>& arr, int low, int high) {
    if (low < high) {
        int pivot = arr[high];
        int i = low - 1;
        for (int j = low; j < high; ++j) {
            if (arr[j] < pivot) {
                ++i;
                swap(arr[i], arr[j]);
            }
        }
        swap(arr[i + 1], arr[high]);
        quicksort(arr, low, i);
        quicksort(arr, i + 2, high);
    }
}

int main() {
    int n = 1000000;  // Adjust array size for more stress
    vector<int> arr(n);
    
    srand(time(0));
    for (int i = 0; i < n; ++i) {
        arr[i] = rand() % 10000;
    }

    auto start = high_resolution_clock::now();
    
    quicksort(arr, 0, n - 1);

    auto end = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(end - start);
    cout << "Time taken to sort array of size " << n << ": " << duration.count() << " microseconds" << endl;

    return 0;
}
