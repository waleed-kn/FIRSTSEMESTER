#include <iostream>
using namespace std;
struct Car {
 string make;
 string model;
};
void updateCar(Car* car) {
 car->make = "Tesla";
 car->model = "Model X";
}
int main() {
 Car myCar = {"Ford", "Mustang"};
 updateCar(&myCar);
 cout << myCar.make << " " << myCar.model << endl;
 return 0;
}