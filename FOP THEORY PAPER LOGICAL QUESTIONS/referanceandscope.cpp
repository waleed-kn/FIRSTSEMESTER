#include <iostream>
using namespace std;
void modify(int* ptr) {
 *ptr = 50;
}
int main() {
 int num = 20;
 modify(&num);
 cout << num << endl;
 return 0;
}
