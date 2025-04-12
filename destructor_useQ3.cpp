#include <iostream>
using namespace std;

class Car {
    string carType;
    int yearMade;

public:
    Car(string type, int year) : carType(type), yearMade(year) {
        cout << "Constructor Called!" << endl;
    }

    ~Car() {
        cout << "Destructor Called!" << endl;
    }
};

int main() {
    Car car1("Toyota", 2012), car2("Alto", 2020);
}
