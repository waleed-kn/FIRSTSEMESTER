#include <iostream>
using namespace std;
int calculate(int a, int b, int c) {
 return (a + b) * c;
}
int main() {
 int x = 2, y = 3, z = 4;
 cout << calculate(x, y, z) << endl;
 return 0;
}