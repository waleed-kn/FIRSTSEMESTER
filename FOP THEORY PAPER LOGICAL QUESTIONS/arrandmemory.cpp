#include <iostream>
using namespace std;
void reverseArray(int arr[], int size) {
 for (int i = 0; i < size / 2; i++) {
 swap(arr[i], arr[size - i - 1]);
 }
}
int main() {
 int arr[5] = {1, 2, 3, 4, 5};
 reverseArray(arr, 5);
 cout << arr[0] << "  " << arr[4] << endl;
 return 0;
}
