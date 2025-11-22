#include <iostream>
using namespace std;

class Patient {
private:
    int age;
    string disease;

public:
    void set_age(int n) {
        age = n;
    }

    void set_disease(string name) {
        disease = name;
    }

    void display() {
        cout << "AGE: " << age << endl;
        cout << "DISEASE: " << disease << endl;
    }
};

int main() {

    Patient p1;
    p1.set_age(20);
    p1.set_disease("Cancer");
    p1.display();
    return 0;
}

