#include <iostream>
using namespace std;
struct Point {
 int x, y;
 Point() : x(0), y(0) {}
};
int main() {
 Point p;
 cout << p.x << " " << p.y << endl;
 return 0;
}
