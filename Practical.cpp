///Q-1///

#include <iostream>
#include <string>
using namespace std;

class Laptop{
private:
    string name;
    float price;
    string processor;

public:
    Laptop(string n, float p, string pro){
        name = n;
        price = p;
        processor = pro;
    }

    void displayInfo() {
        cout << "Laptop Name: " << name << endl;
        cout << "Price: " << price << endl;
        cout << "Processor: " << processor << endl;
    }
};
int main() {
    Laptop laptop1("HP", 120000.0, "Intel i5");
    Laptop laptop2("MacBook Air M2", 180000.0, "Apple M2");
    cout << "Laptop 1 details:" << endl;
    laptop1.displayInfo();
    cout << "\nLaptop 2 details:" << endl;
    laptop2.displayInfo();
    return 0;
}

///Q-2///

#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string accountNumber;
    double balance;
    string ownerName;

public:
    BankAccount(string accnum, string owner, double initialbalance) {
        accountNumber = accnum;
        ownerName = owner;
        balance = initialbalance;
    }

    void credit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Credited: " << amount << endl;
        } else {
            cout << "Invalid credit amount." << endl;
        }
    }

    void debit(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Debited: " << amount << endl;
        } else {
            cout << "Invalid or insufficient funds for debit." << endl;
        }
    }

    void displayBalance() const {
        cout << "Account Holder: " << ownerName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Current Balance: " << balance << endl;
    }
};

int main() {
    BankAccount myAccount("111111111", "Deep", 10000.00);
    myAccount.displayBalance();
    myAccount.credit(200.50);
    myAccount.debit(150.00);
    myAccount.displayBalance();
    return 0;
}

///Q-3///

#include <iostream>
using namespace std;

class Shape {
private:
    string color;
    double area;
public:
    void setColor(string c) {
        color = c;
    }
    void setArea(double a) {
        area = a;
    }
    string getColor() const {
        return color;
    }
    double getArea() const {
        return area;
    }
};
class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r, string c) {
        radius = r;
        setColor(c);
    }
    void CircleArea() {
        double area = 3.14*radius*radius;
        setArea(area);
    }
};
class Rectangle : public Shape {
private:
    double length;
    double breath;
public:
    Rectangle(double l, double b, string c) {
        length = l;
        breath = b;
        setColor(c);
    }

    void RectangleArea() {
        double area = length*breath;
        setArea(area);
    }
};
int main() {
    Circle c(5.0, "Yellow");
    c.CircleArea();
    cout << "Circle Color: " << c.getColor() << endl;
    cout << "Circle Area: " << c.getArea() << endl;

    Rectangle r(6.0, 7.0, "Green");
    r.RectangleArea();
    cout << "Rectangle Color: " << r.getColor() << endl;
    cout << "Rectangle Area: " << r.getArea() << endl;
    return 0;
}

///Q-4///

[Not-Done]

///Q-5///

#include<iostream>
using namespace std;

class Calculator {
public:
    void add(double a, double b) {
        cout << "Addition = " <<a+b<<endl;
    }
    void sub(double a, double b) {
        cout << "Subtraction = " <<a-b<<endl;
    }
    void mul(double a, double b) {
        cout << "Multiply = " <<a*b<<endl;
    }
    void div(double a, double b) {
        try {
            if (b == 0) {
                throw b;
            } else {
                double divi = a / b;
                cout << "Division(a/b) = " << divi <<endl;
            }
        } catch (double num) {
            cout << "Cannot be divided by this number : " << num << ")" <<endl;
        }
    }
};

int main() {
    Calculator obj;
    double a1 = 6.0, b1 = 4.0;
    double a2 = 10.0, b2 = 0.0;
    obj.add(a1, b1);
    obj.sub(a1, b1);
    obj.mul(a1, b1);
    obj.div(a1, b1);
    cout << "-----" << endl;
    obj.div(a2, b2);
    return 0;
}

///Q-6///

[Not-Done]

///Q-7///

#include <iostream>
using namespace std;

class Vehicle {
public:
    void startEngine();
    void drive(); 
};
class Car : public Vehicle {
public:
    void startengine() { 
        cout << "Car engine starting" << endl;
    }
    void drive() {
        cout << "Car is driving" << endl;
    }
};
class Bike : public Vehicle {
public:
    void startEngine() {
        cout << "Bike: Engine started\n";
    }
    void drive() {
        cout << "Bike is driving\n";
    }
}

int main() {
    Vehicle* vehicles[2];
    vehicles[0] = new Car;
    vehicles[1] = new Bike;
    for (int i = 0; i < 2; i++) {
        vehicles[i].startEngine(); 
        vehicles[i].drive();      
        cout << "------" << endl;
    }
    return 0;
}