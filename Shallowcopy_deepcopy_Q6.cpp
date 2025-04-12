#include <iostream>
#include <cstring>
using namespace std;

class Person {
public:
    string* Identity;
    int Flag;

    Person(string id = "Unknown", int val = 0) : Flag(val) {
        Identity = new string;
        *Identity = id;
    }

    Person(Person& ref) {
        if (ref.Flag == 1) {
            Identity = new string;
            *Identity = *ref.Identity;
            Flag = ref.Flag;
        }
    }

    ~Person() {
        delete Identity;
        Identity = nullptr;
    }

    void show() {
        cout << Identity << endl;
        cout << *Identity << endl;
    }
};

int main() {
    Person a("Ali", 0), b, c;

    b.show();
    b = a;

    cout << "Shallow Copy:" << endl;
    a.show();
    b.show();

    a.Flag = 1;
    c = a;

    cout << "Deep Copy:" << endl;
    a.show();
    c.show();
}
