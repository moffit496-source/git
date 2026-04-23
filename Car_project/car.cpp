#include <iostream>
#include <string>
using namespace std;

// Структура Car
struct Car {
    string brand;
    string model;
    int year;
    int hp;

    void printInfo() {
        cout << "Марка: " << brand << endl;
        cout << "Модель: " << model << endl;
        cout << "Год выпуска: " << year << endl;
        cout << "Мощность: " << hp << " л.с." << endl;
    }
};


double powerToKW(int hp) {
    return hp * 0.735;
}

int main() {
    setlocale(LC_ALL, "RU");

    Car myCar;
    myCar.brand = "Toyota";
    myCar.model = "Camry";
    myCar.year = 2020;
    myCar.hp = 200;

    myCar.printInfo();

    cout << "Мощность в кВт: " << powerToKW(myCar.hp) << endl;

    return 0;
}
