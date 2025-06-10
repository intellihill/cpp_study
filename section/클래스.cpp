#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Friend: name, address, height, age, weight...

class Friend {
public: // access specifier(public, private, protected)
    string name;
    string address;
    int age;
    double height;
    double weight;

    void print() {
        cout << name << " " << address << " " << age << " " << height << " " << weight << endl;
    }
}

void print(const Friend &fr) {
    cout << fr.name << " " << fr.address << " " << fr.age << " " << fr.height << " " << fr.weight << endl;
}

void print(const string &name, const string &address, const int &age, const double &height, const double &weight) {
    cout << name << " " << address << " " << age << " " << height << " " << weight << endl;
}

int main() {

    Friend jj{"Jack Jack", "Seoul", 24, 190.2, 100.4};

    // print(jj.name, jj.address, jj.age, jj.height, jj.weight);
    // print(jj);
    jj.print();

    vector<string> name_vec;
    vector<string> address_vec;
    vector<int> age_vec;
    vector<double> height_vec;
    vector<double> weight_vec;

    print(name_vec[0], address_vec[0], age_vec[0], height_vec[0], weight_vec[0]);

    return 0;
}