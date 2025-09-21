#include <iostream>
using namespace std;
void displayArray(int arr[]) {
 for (int i = 0; i <= 4; i++) {
 cout << arr[i] << " ";
 }
}
int main() {
 int nums[] = {10, 20, 30, 40, 50};
 displayArray(nums);
 return 0;
}
