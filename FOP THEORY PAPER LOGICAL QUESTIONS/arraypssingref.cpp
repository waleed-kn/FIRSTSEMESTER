#include <iostream>
using namespace std;
void modifyFirstElement(int (&arr)[5]) {
 arr[0] = 100;
}
int main() {
 int arr[5] = {1, 2, 3, 4, 5};
 modifyFirstElement(arr);
 cout << arr[0] << endl;
 return 0;
}