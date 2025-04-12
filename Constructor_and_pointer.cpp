#include <iostream>
using namespace std;

class Employee {
    const double basePay;
    int identifier;

public:
    Employee(int code, double pay) : identifier(code), basePay(pay) {
        cout << "Employee address: " << this << endl;
        cout << "Employee Id: " << identifier << "    Salary: " << basePay << endl;
    }
};

int main() {
    Employee emp1(1234, 200000), emp2(1111, 150000);
}
