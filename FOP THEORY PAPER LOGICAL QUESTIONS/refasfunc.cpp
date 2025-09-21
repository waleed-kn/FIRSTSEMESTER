#include <iostream>
using namespace std;
int& max(int& a, int& b) {
 if (a > b) return a;
 return b;
}
int main() {
 int x = 10, y = 20;
 max(x,y)=25;
 cout << x << " " << y << endl;
 return 0;
}
