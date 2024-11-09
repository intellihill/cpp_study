// void type


void my_function(void) {

}

int main() {
  // void my_void;
  int i = 123;
  float f = 123.456f;

  // point
  void *my_void;
  my_void = (void*)&i;
  my_void = (void*)&f;

  return 0;
}