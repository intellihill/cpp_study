/**
 * Literal
 * Operand
 * unary: +1 << 피연산자가 1개
 * binary: 1+2 << 피연산자가 2개 
 * ternary
 */
#include <iostream>

using namespace std;
int main()
{
  int x = 2; // x is a variable, 2 is a literal.

  cout << 1 + 2 << endl; // 1, 2 are literal. 1+2 is expression. '+' is operator

  int y = (x > 0) ? 1 : 2; // tenary

  cout << "Hello, World" << endl;

  return 0;
}