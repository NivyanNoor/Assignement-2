#include <iostream>
using namespace std;

class Employee {
protected:
    string empName;
    string empId;
    double empSalary;
public:
    Employee(string x, string y, double z) : empName(x), empId(y), empSalary(z) {}

    void showInfo() {
        cout << empName << endl;
        cout << empId << endl;
        cout << empSalary << endl;
    }
};

class Manager : public Employee {
protected:
    string empDept;
public:
    Manager(string a, string b, double c, string d) : Employee(a, b, c), empDept(d) {}

    void showInfo() {
        Employee::showInfo();
        cout << empDept << endl;
    }
};

int main() {
    Manager man1("Nivyan", "11p", 20000, "CS");
    Employee emp1("John", "30w", 18000);

    man1.showInfo();
    emp1.showInfo();
}
