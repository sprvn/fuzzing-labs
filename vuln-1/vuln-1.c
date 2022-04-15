#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main( int argc, char *argv[] ) {
  if isdigit(*argv[1]) {
    int result = 100/atoi(argv[1]);
    printf("Result: %i\n", result);
  } else {
    printf("Integer not provided");
  }
  return 0;
}
