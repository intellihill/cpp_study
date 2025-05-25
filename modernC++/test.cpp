#include <iostream>

using namespace std;

class Car {
private:
    int year= 1000;
public:
    Car(int _year) : year(_year) {
        cout << "Original constructor year: " << year << "\n";
    }
    void showYear() {
        cout << "Year is: " << year << endl;
    }
};


int main() {
    Car car(2000);

    // car.showYear();


    return 0;
}