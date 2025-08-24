#include <fstream>

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


  return 0;
}
