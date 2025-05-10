#include <iostream>

{
  int a = 1;
  void doSomething()
  {
    a += 3;
  }
}


int a = 1;
void doSomething(int b)
{
  a += 5;
}

int main()
{
  using namespace std;

  int apple = 5;

  cout << apple << endl;

  {
    apple = 1;

    cout << apple << endl;
  }

    cout << apple << endl;

  return 0;
}