#include <iostream>
using namespace std;
void modifyArray(int* ptr) {
 *(ptr + 1) = 50;
}
int main() {
 int arr[] = {10, 20, 30, 40, 50};
 modifyArray(arr);
 cout << arr[4] << endl;
 return 0;
}
