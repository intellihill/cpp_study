#include <iostream>

using namespace std;

#define NUM_STUDENTS 100000

void doSomething(int students_scores[]) {

    cout << students_scores << endl;

    cout << students_scores[0] << endl;
    cout << students_scores[1] << endl;
    cout << students_scores[2] << endl;
    cout << students_scores[3] << endl;
}


int main() {

    const int num_students = 20;

    int students_scores[num_students] = {1, 2, 3, 4, 5};

    cout << students_scores << endl;

    cout << students_scores[0] << endl;
    cout << students_scores[1] << endl;
    cout << students_scores[2] << endl;
    cout << students_scores[3] << endl;

    doSomething(students_scores);
    return 0;
}