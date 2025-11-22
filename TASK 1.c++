#include <iostream>
using namespace std;

class Student{
public: 
string name;
int roll_number;


void display(){

cout << "NAME:  " << name << ", ROLL NO: " << roll_number << endl;

}

};

int main (){

Student s1;
Student s2;

s1.name = "WASI SHAH";
s1.roll_number = 20;
s2.name = "HASNAIN SHAH";
s2.roll_number = 21;

s1.display();
s2.display();
return 0;

}
