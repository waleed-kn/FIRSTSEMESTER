#include <iostream>
using namespace std;

// Function to calculate the average of an array
float calculateAverage(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return static_cast<float>(sum) / size; // Casting to float for correct division
}

int main() {
    int size;

    // Taking input for the array size
    cout << "Enter the number of elements: ";
    cin >> size;

    int arr[size];

    // Taking input for array elements
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // Calling the function and displaying the result
    float average = calculateAverage(arr, size);
    cout << "The average is: " << average << endl;

    return 0;
}
