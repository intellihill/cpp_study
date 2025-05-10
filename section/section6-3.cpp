#include <iostream>

using namespace std;

int main() {
    const int num_students = 5;
    int scores[num_students] = { 84, 92, 76, 81, 56 };

    int total_socore = 0;

    for (int i = 0; i < num_students; ++i) {
        total_socore += scores[i];
    }

    double avg_score = static_cast<double>(total_socore) / num_students;


    return 0;
}