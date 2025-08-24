#include <iomanip>
#include <ios>
#include <iostream>
#include <fstream>
#include <ostream>


int main(int argc, char* argv[]) {
  using namespace std;
  namespace fs = std::filesystem;
  const double pi= 3.141234552342343254363463453223523;

  ofstream test_file("test.txt");
  ifstream test_file1("test.txt");
  ofstream test("file.txt");

  setprecision(3);

  int old_precision= cout.precision();

  cout << "pi is " << pi << '\n';
  test_file << pi << '\n';

  cout << "pi is " << setprecision(16) << pi << '\n';

  cout << "pi is " << setfill('-') << left << setw(30) << pi << '\n';

  cout << "pi is " << (pi < 3) << '\n';
  cout << "pi is " << boolalpha << (pi < 3) << '\n';

  int i;
  double d;

  test_file1 >> i >> d;
  
  cout << "i is " << i << ", d is " << d << '\n';
  test_file.close();
  
  for (auto & p : fs::directory_iterator(".")) {
    if (is_regular_file(p)) {
      test << p << " is a regular file.\n";
    } else if (is_directory(p)) {
      test << p << " is a directory.\n";
    } else {
      test << p << " is neither regular file nor dicrectory.\n";
    }
  }

}
