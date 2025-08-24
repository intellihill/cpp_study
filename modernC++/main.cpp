#include <iostream>
#include <fstream>
#include <memory>

int main() {

  std::ifstream ifs("some_aray.txt");
  std::ofstream file("outstream.txt");
  int size;

  ifs >> size;

  float* v= new float[size];
  for (int i= 0; i < size; ++i) {
    ifs >> v[i];
    file << i << '\n';
  }

  std::unique_ptr<double> dp{new double};
  *dp= 7;

  std::cout << "The value of *dp is " << *dp << std::endl;


  return 0;
}
