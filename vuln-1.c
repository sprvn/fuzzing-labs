#include <stdio.h>

#pragma GCC diagnostic ignored "-Wdiv-by-zero"
    int main();

int main() {
  int a = 1/0;
  printf("%d\n", a);
  return 0;
}
