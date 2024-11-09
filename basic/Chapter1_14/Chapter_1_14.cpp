// Chapter 1_14.cpp : Defines the entry point for the console application.

#include <iostream>
#include <algorithm>

using namespace std;

#define MY_NUMBER 9 // macro 
#define MAX(a, b) ((a > b) ? a: b)
#define LIKE_APPLE


void doSomething() {
  
}

int main() {

  #ifdef LIKE_APPLE
  cout << "APPLE" << endl;
  #endif

  #ifndef LIKE_APPLE
  count << "Orange" << endl;
  #endif

  cout << MY_NUMBER << endl;
  cout << MAX(1, 2) << endl;
  cout << std::max(1, 2) << endl;

  return 0;
}