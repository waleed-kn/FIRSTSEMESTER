#include <iostream>
using namespace std;

int main() {
    int n;

    // Taking input for array size
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n]; // Declaring an array of size 'n'

    // Taking input for array elements
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Assume first element is the largest
    int maxElement = arr[0];

    // Loop through the array to find the largest element
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }

    // Display the largest element
    cout << "The largest element is: " << maxElement << endl;

    return 0;
}
