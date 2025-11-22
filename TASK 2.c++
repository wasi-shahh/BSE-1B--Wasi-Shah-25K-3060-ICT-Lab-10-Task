#include <iostream>
using namespace std;

class Book {
private:
    string title;
    int price;

public:
    void set_title(string a) {
        title = a;
    }

    void set_price(int b) {
        price = b;
    }

    void display() {
        cout << "TITLE: " << title << endl;
        cout << "PRICE: " << price << endl;
    }
};

int main() {

    Book b1;
    b1.set_title("Harry Potter");
    b1.set_price(1000);
    b1.set_price(1500);

    b1.display();

    return 0;
}

