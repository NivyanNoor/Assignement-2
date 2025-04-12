#include <iostream>
using namespace std;

class Shape {
private:
    double val;
protected:
    void setArea(double a) { val = a; }
public:
    void print() { cout << val << endl; }
};

class Circle : public Shape {
private:
    double rad;
protected:
    void setCircleArea() {
        Shape::setArea(3.14 * rad * rad);
    }
public:
    Circle(double r = 0) : rad(r) {
        setCircleArea();
    }
};

int main() {
    Circle c1(4.5);
    c1.print();
}
