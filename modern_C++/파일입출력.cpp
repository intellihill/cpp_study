#include <fstream>

int main() {
    // 긴 버전
    // std::ofstream square_file;
    // square_file.open("squares.txt");
    // for (int i= 0; i < 10; ++i) {
    //     square_file << i << "^2 = " << i*i << '\n';
    //     square_file.close();
    // }
    // 짧은 버전
    // 객체가 범위를 벗어나면 자동으로 닫힌다.
    std::ofstream square_file{"squares.txt"};
    for (int i= 0; i < 10; ++i) {
        square_file << i << "^2 = " << i*i << '\n';
    }
}