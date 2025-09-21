#include <iostream>
using namespace std;

// Function to find maximum and minimum in an array
void findMaxMin(int arr[], int size, int &max, int &min) {
    max = min = arr[0];  // Initialize max and min with the first element

    for (int i = 1; i < size; i++) {
        if (arr[i] > max) max = arr[i]; // Update max
        if (arr[i] < min) min = arr[i]; // Update min
    }
}

int main() {
    int size;
    cout << "Enter the number of elements: ";
    cin >> size;

    int arr[size];
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    int max, min;
    findMaxMin(arr, size, max, min);

    cout << "Maximum Element: " << max << endl;
    cout << "Minimum Element: " << min << endl;

    return 0;
}
