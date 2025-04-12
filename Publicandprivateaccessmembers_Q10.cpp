#include <iostream>
using namespace std;

class Person {
private:
    string idName;
    int idAge;
public:
    Person(string x, int y) : idName(x), idAge(y) {}

    void show() const {
        cout << idName << ", " << idAge << endl;
    }
};

class Student : public Person {
private:
    char level;
public:
    Student(string a, int b, char c) : Person(a, b), level(c) {}

    void show() const {
        Person::show();
        cout << level << endl;
    }
};

int main() {
    Student stu("John Doe", 20, 'A');
    stu.show();
}
