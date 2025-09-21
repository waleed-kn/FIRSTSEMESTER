#include <iostream>
using namespace std;
void printArray(int arr[3]) {
 for (int i = 0; i < 3; i++) {
 cout << arr[i] << " ";
 }
}
int main() {
 int arr[] = {1, 2, 3};
 printArray(arr);
 return 0;
}
