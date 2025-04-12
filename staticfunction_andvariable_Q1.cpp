#include <iostream>
using namespace std;

class Worker {
    string fullName;
    int workerId;
    static int totalWorkers;

public:
    Worker(string fn, int wid) : fullName(fn), workerId(wid) {
        totalWorkers++;
    }

    static void displayCount() {
        cout << "Number of Employees: " << totalWorkers << endl;
    }
};

int Worker::totalWorkers = 0;

int main() {
    Worker staffA("Omar", 001), staffB("Khalid", 002), staffC("Zain", 003);
    Worker::displayCount();
}
