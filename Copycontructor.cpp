#include <iostream>
using namespace std;

class Rectangle {
    float height;
    float width;

public:
    Rectangle(float h = 0, float w = 0) : height(h), width(w) {}

    Rectangle(Rectangle& source) {
        height = source.height;
        width = source.width;
    }

    void setDimensions(float h, float w) {
        height = h;
        width = w;
    }

    void show() {
        cout << "Length: " << height << "   Breadth: " << width << endl;
    }
};

int main() {
    Rectangle rec1(3.5, 9.2);
    Rectangle rec2;

    cout << "Before Copy" << endl;
    cout << "Rectangle 1 attributes:" << endl;
    rec1.show();
    cout << "Rectangle 2 attributes:" << endl;
    rec2.show();

    cout << "After Copy" << endl;
    cout << "Rectangle 1 attributes:" << endl;
    rec1.show();
    rec2 = rec1;
    cout << "Rectangle 2 attributes:" << endl;
    rec2.show();
}
