
#include <stdio.h>
void func(int* n){
  *n=123;
}

int main() {
    // Write C code here
  int n=0;
  func(&n);
  printf("%d", n);

  return 0;
}
