#include <iostream>
using namespace std;

class Vehicle {
public:
    void ignite() {
        cout << "Vehicle engine started." << endl;
    }
};

class Airplane : public Vehicle {
public:
    void ignite() {
        cout << "Airplane engine starting." << endl;
    }
};

int main() {
    Vehicle obj1;
    Airplane obj2;

    obj1.ignite();
    obj2.ignite();
}
